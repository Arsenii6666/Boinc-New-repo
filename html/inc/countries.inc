<?php
// This file is part of BOINC.
// http://boinc.berkeley.edu
// Copyright (C) 2017 University of California
//
// BOINC is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// BOINC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with BOINC.  If not, see <http://www.gnu.org/licenses/>.
// $Id$


// list of countries taken from http://www.cia.gov

global $countries;
$countries = array(
    "None",
    "International",
    "Afghanistan",
    "Albania",
    "Algeria",
    "American Samoa",
    "Andorra",
    "Angola",
    "Anguilla",
    "Antarctica",
    "Antigua and Barbuda",
    "Argentina",
    "Armenia",
    "Aruba",
    "Australia",
    "Austria",
    "Azerbaijan",
    "Bahamas, The",
    "Bahrain",
    "Bangladesh",
    "Barbados",
    "Belarus",
    "Belgium",
    "Belize",
    "Benin",
    "Bermuda",
    "Bhutan",
    "Bolivia",
    "Bosnia and Herzegovina",
    "Botswana",
    "Brazil",
    "British Virgin Islands",
    "Brunei",
    "Bulgaria",
    "Burkina Faso",
    "Burma",
    "Burundi",
    "Cambodia",
    "Cameroon",
    "Canada",
    "Cape Verde",
    "Cayman Islands",
    "Central African Republic",
    "Chad",
    "Channel Islands",
    "Chile",
    "China",
    "Colombia",
    "Comoros",
    "Congo, Democratic Republic of the",
    "Congo, Republic of the",
    "Cook Islands",
    "Costa Rica",
    "Cote d'Ivoire",
    "Croatia",
    "Cuba",
    "Cyprus",
    "Czech Republic",
    "Denmark",
    "Djibouti",
    "Dominica",
    "Dominican Republic",
    "East Timor",
    "Ecuador",
    "Egypt",
    "El Salvador",
    "Equatorial Guinea",
    "Eritrea",
    "Estonia",
    "Ethiopia",
    "Falkland Islands",
    "Faroe Islands",
    "Fiji",
    "Finland",
    "France",
    "French Guiana",
    "French Polynesia",
    "Gabon",
    "Gambia, The",
    "Gaza Strip",
    "Georgia",
    "Germany",
    "Ghana",
    "Gibraltar",
    "Greece",
    "Greenland",
    "Grenada",
    "Guadeloupe",
    "Guam",
    "Guatemala",
    "Guinea",
    "Guinea-Bissau",
    "Guyana",
    "Haiti",
    "Holy See (Vatican City)",
    "Honduras",
    "Hong Kong",
    "Hungary",
    "Iceland",
    "India",
    "Indonesia",
    "Iran",
    "Iraq",
    "Ireland",
    "Isle of Man",
    "Israel",
    "Italy",
    "Jamaica",
    "Japan",
    "Jordan",
    "Kazakhstan",
    "Korea, North",
    "Korea, South",
    "Kenya",
    "Kiribati",
    "Kuwait",
    "Kyrgyzstan",
    "Laos",
    "Latvia",
    "Lebanon",
    "Lesotho",
    "Liberia",
    "Libya",
    "Liechtenstein",
    "Lithuania",
    "Luxembourg",
    "Macau",
    "Macedonia",
    "Madagascar",
    "Malawi",
    "Malaysia",
    "Maldives",
    "Mali",
    "Malta",
    "Marshall Islands",
    "Martinique",
    "Mauritania",
    "Mauritius",
    "Mexico",
    "Micronesia",
    "Moldova",
    "Monaco",
    "Mongolia",
    "Montenegro",
    "Montserrat",
    "Morocco",
    "Mozambique",
    "Namibia",
    "Nauru",
    "Nepal",
    "Netherlands",
    "Netherlands Antilles",
    "New Caledonia",
    "New Zealand",
    "Nicaragua",
    "Niger",
    "Nigeria",
    "Niue",
    "Northern Mariana Islands",
    "Norway",
    "Oman",
    "Pakistan",
    "Palau",
    "Panama",
    "Papua New Guinea",
    "Paraguay",
    "Peru",
    "Philippines",
    "Pitcairn Islands",
    "Poland",
    "Portugal",
    "Puerto Rico",
    "Qatar",
    "Reunion",
    "Romania",
    "Russia",
    "Rwanda",
    "Saint Kitts and Nevis",
    "Saint Lucia",
    "Saint Pierre and Miquelon",
    "Saint Vincent and the Grenadines",
    "Samoa",
    "San Marino",
    "Sao Tome and Principe",
    "Saudi Arabia",
    "Senegal",
    "Serbia",
    "Seychelles",
    "Sierra Leone",
    "Singapore",
    "Slovakia",
    "Slovenia",
    "Solomon Islands",
    "Somalia",
    "South Africa",
    "Spain",
    "Sri Lanka",
    "Sudan",
    "Suriname",
    "Swaziland",
    "Sweden",
    "Switzerland",
    "Syria",
    "Taiwan",
    "Tajikistan",
    "Tanzania",
    "Thailand",
    "Togo",
    "Tokelau",
    "Tonga",
    "Trinidad and Tobago",
    "Tunisia",
    "Turkey",
    "Turkmenistan",
    "Turks and Caicos Islands",
    "Tuvalu",
    "Uganda",
    "Ukraine",
    "United Arab Emirates",
    "United Kingdom",
    "United States",
    "Uruguay",
    "Uzbekistan",
    "Vanuatu",
    "Venezuela",
    "Vietnam",
    "Virgin Islands",
    "Wallis and Futuna",
    "West Bank",
    "Western Sahara",
    "Yemen",
    "Zambia",
    "Zimbabwe"
);

$country_to_iso3166_2 = array (
    "Afghanistan" => "af",
    "Albania" => "al",
    "Algeria" => "dz",
    "American Samoa" => "as",
    "Andorra" => "ad",
    "Angola" => "ao",
    "Anguilla" => "ai",
    "Antarctica" => "aq",
    "Antigua and Barbuda" => "ag",
    "Argentina" => "ar",
    "Armenia" => "am",
    "Aruba" => "aw",
    "Australia" => "au",
    "Austria" => "at",
    "Azerbaijan" => "az",
    "Bahamas, The" => "bs",
    "Bahrain" => "bh",
    "Bangladesh" => "bd",
    "Barbados" => "bb",
    "Belarus" => "by",
    "Belgium" => "be",
    "Belize" => "bz",
    "Benin" => "bj",
    "Bermuda" => "bm",
    "Bhutan" => "bt",
    "Bolivia" => "bo",
    "Bosnia and Herzegovina" => "ba",
    "Botswana" => "bw",
    "Brazil" => "br",
    "British Virgin Islands" => "vg",
    "Brunei" => "bn",
    "Bulgaria" => "bg",
    "Burkina Faso" => "bf",
    "Burma" => "mm",
    "Burundi" => "bi",
    "Cambodia" => "kh",
    "Cameroon" => "cm",
    "Canada" => "ca",
    "Cape Verde" => "cv",
    "Cayman Islands" => "ky",
    "Central African Republic" => "cf",
    "Chad" => "td",
    "Channel Islands" => "gb",
    "Chile" => "cl",
    "China" => "cn",
    "Colombia" => "co",
    "Comoros" => "km",
    "Congo, Democratic Republic of the" => "cd",
    "Congo, Republic of the" => "cg",
    "Cook Islands" => "ck",
    "Costa Rica" => "cr",
    "Cote d'Ivoire" => "ci",
    "Croatia" => "hr",
    "Cuba" => "cu",
    "Cyprus" => "cy",
    "Czech Republic" => "cz",
    "Denmark" => "dk",
    "Djibouti" => "dj",
    "Dominica" => "dm",
    "Dominican Republic" => "do",
    "East Timor" => "tl",
    "Ecuador" => "ec",
    "Egypt" => "eg",
    "El Salvador" => "sv",
    "Equatorial Guinea" => "gq",
    "Eritrea" => "er",
    "Estonia" => "ee",
    "Ethiopia" => "et",
    "Falkland Islands" => "fk",
    "Faroe Islands" => "fo",
    "Fiji" => "fj",
    "Finland" => "fi",
    "France" => "fr",
    "French Guiana" => "gf",
    "French Polynesia" => "pf",
    "Gabon" => "ga",
    "Gambia, The" => "gm",
    "Gaza Strip" => "ps",
    "Georgia" => "ge",
    "Germany" => "de",
    "Ghana" => "gh",
    "Gibraltar" => "gi",
    "Greece" => "gr",
    "Greenland" => "gl",
    "Grenada" => "gd",
    "Guadeloupe" => "gp",
    "Guam" => "gu",
    "Guatemala" => "gt",
    "Guinea" => "gn",
    "Guinea-Bissau" => "gw",
    "Guyana" => "gy",
    "Haiti" => "ht",
    "Holy See (Vatican City)" => "va",
    "Honduras" => "hn",
    "Hong Kong" => "hk",
    "Hungary" => "hu",
    "Iceland" => "is",
    "India" => "in",
    "Indonesia" => "id",
    "Iran" => "ir",
    "Iraq" => "iq",
    "Ireland" => "ie",
    "Isle of Man" => "im",
    "Israel" => "il",
    "Italy" => "it",
    "Jamaica" => "jm",
    "Japan" => "jp",
    "Jordan" => "jo",
    "Kazakhstan" => "kz",
    "Korea, North" => "kp",
    "Korea, South" => "kr",
    "Kenya" => "ke",
    "Kiribati" => "ki",
    "Kuwait" => "kw",
    "Kyrgyzstan" => "kg",
    "Laos" => "la",
    "Latvia" => "lv",
    "Lebanon" => "lb",
    "Lesotho" => "ls",
    "Liberia" => "lr",
    "Libya" => "ly",
    "Liechtenstein" => "li",
    "Lithuania" => "lt",
    "Luxembourg" => "lu",
    "Macau" => "mo",
    "Macedonia" => "mk",
    "Madagascar" => "mg",
    "Malawi" => "mw",
    "Malaysia" => "my",
    "Maldives" => "mv",
    "Mali" => "ml",
    "Malta" => "mt",
    "Marshall Islands" => "mh",
    "Martinique" => "mq",
    "Mauritania" => "mr",
    "Mauritius" => "mu",
    "Mexico" => "mx",
    "Micronesia" => "fm",
    "Moldova" => "md",
    "Monaco" => "mc",
    "Mongolia" => "mn",
    "Montenegro" => "me",
    "Montserrat" => "ms",
    "Morocco" => "ma",
    "Mozambique" => "mz",
    "Namibia" => "na",
    "Nauru" => "nr",
    "Nepal" => "np",
    "Netherlands" => "nl",
    "Netherlands Antilles" => "an",
    "New Caledonia" => "nc",
    "New Zealand" => "nz",
    "Nicaragua" => "ni",
    "Niger" => "ne",
    "Nigeria" => "ng",
    "Niue" => "nu",
    "Northern Mariana Islands" => "mp",
    "Norway" => "no",
    "Oman" => "om",
    "Pakistan" => "pk",
    "Palau" => "pw",
    "Panama" => "pa",
    "Papua New Guinea" => "pg",
    "Paraguay" => "py",
    "Peru" => "pe",
    "Philippines" => "ph",
    "Pitcairn Islands" => "pn",
    "Poland" => "pl",
    "Portugal" => "pt",
    "Puerto Rico" => "pr",
    "Qatar" => "qa",
    "Reunion" => "re",
    "Romania" => "ro",
    "Russia" => "ru",
    "Rwanda" => "rw",
    "Saint Kitts and Nevis" => "kn",
    "Saint Lucia" => "lc",
    "Saint Pierre and Miquelon" => "pm",
    "Saint Vincent and the Grenadines" => "vc",
    "Samoa" => "ws",
    "San Marino" => "sm",
    "Sao Tome and Principe" => "st",
    "Saudi Arabia" => "sa",
    "Senegal" => "sn",
    "Serbia" => "rs",
    "Seychelles" => "sc",
    "Sierra Leone" => "sl",
    "Singapore" => "sg",
    "Slovakia" => "sk",
    "Slovenia" => "si",
    "Solomon Islands" => "sb",
    "Somalia" => "so",
    "South Africa" => "za",
    "Spain" => "es",
    "Sri Lanka" => "lk",
    "Sudan" => "sd",
    "Suriname" => "sr",
    "Swaziland" => "sz",
    "Sweden" => "se",
    "Switzerland" => "ch",
    "Syria" => "sy",
    "Taiwan" => "tw",
    "Tajikistan" => "tj",
    "Tanzania" => "tz",
    "Thailand" => "th",
    "Togo" => "tg",
    "Tokelau" => "tk",
    "Tonga" => "to",
    "Trinidad and Tobago" => "tt",
    "Tunisia" => "tn",
    "Turkey" => "tr",
    "Turkmenistan" => "tm",
    "Turks and Caicos Islands" => "tc",
    "Tuvalu" => "tv",
    "Uganda" => "ug",
    "Ukraine" => "ua",
    "United Arab Emirates" => "ae",
    "United Kingdom" => "gb",
    "United States" => "us",
    "Uruguay" => "uy",
    "Uzbekistan" => "uz",
    "Vanuatu" => "vu",
    "Venezuela" => "ve",
    "Vietnam" => "vn",
    "Virgin Islands" => "vg",
    "Wallis and Futuna" => "wf",
    "West Bank" => "il",
    "Western Sahara" => "eh",
    "Yemen" => "ye",
    "Zambia" => "zm",
    "Zimbabwe" => "zw"
);

// return a list of country options for a <select>
//
function country_select_options($selected_country="None") {
    global $countries;

    require_once("../inc/geoip.inc");

    // See if we can find the user's country and select it as default:
    //
    $gi = geoip_open("../inc/GeoIP.dat",GEOIP_STANDARD);
    $geoip_country = geoip_country_name_by_addr($gi,$_SERVER["REMOTE_ADDR"]);
    geoip_close($gi);

    if ($selected_country=="") $selected_country="None";
    if ($selected_country=="None" and $geoip_country!=""){
        $selected_country=$geoip_country;
    }

    $x = "";
    foreach ($countries as $country) {
        $selected = ($selected_country == $country ? "selected":"");
        $x .= "<option value=\"$country\" $selected>$country</option>\n";
    }
    return $x;
}

function is_valid_country($country) {
    global $countries;
    if ($country == '') return true;
    return in_array($country, $countries);
}

?>
