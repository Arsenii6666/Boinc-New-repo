#include <iostream>
#include <cstdlib>
#include <boinc/boinc_api.h>
#include <boinc/boinc_db.h>
int main(int argc, char* argv[]) {

    boinc_init();

    BOINC_OPTIONS options;
    boinc_options_defaults(options);
    boinc_init_options(&options);

    if (!options.main_program) {
        std::cerr << "Failed to get initialization data" << std::endl;
        boinc_finish(1);
        return 1;
    }

    if (boinc_parse_init_data_file() != 0) {
        std::cerr << "Failed to parse initialization data" << std::endl;
        boinc_finish(1);
        return 1;
    }

    char* variety = "trickle_variety";
    char* text = "Hello BOINC!";
    boinc_send_trickle_up(variety, text);

    int min_checkpoint_period = 60;  // sec
    boinc_set_min_checkpoint_period(min_checkpoint_period);

    double cpu_time = 10.0;
    double checkpoint_cpu_time = 5.0;
    double fraction_done = 0.5;
    boinc_report_app_status(cpu_time, checkpoint_cpu_time, fraction_done);

    if (boinc_time_to_checkpoint()) {
        boinc_checkpoint_completed();
    }

    boinc_fraction_done(fraction_done);

    double sent = 100.0;
    double received = 200.0; 
    boinc_network_usage(sent, received); // for network load

    boinc_finish(0);

    return 0;
}
