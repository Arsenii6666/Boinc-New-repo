include $(top_srcdir)/Makefile.incl

vdadir=$(libexecdir)/boinc-server-maker/vda
vda_PROGRAMS = vda vdad ssim

AM_CXXFLAGS += $(MYSQL_CFLAGS)
AM_LDFLAGS += -static

vda_SOURCES = vda.cpp vda_lib.cpp vda_lib2.cpp vda_policy.cpp stats.cpp
vda_LDADD = $(SERVERLIBS)

vdad_SOURCES = vdad.cpp vda_lib.cpp vda_lib2.cpp vda_policy.cpp stats.cpp
vdad_LDADD = $(SERVERLIBS)

ssim_SOURCES = ssim.cpp vda_lib.cpp vda_policy.cpp stats.cpp des.h
ssim_LDADD = $(SERVERLIBS)
