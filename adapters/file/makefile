######################################################################
# 
# (c) Copyright, Real-Time Innovations, 2007.  All rights reserved.
# No duplications, whole or partial, manual or electronic, may be made
# without express written permission.  Any such copies, or
# revisions thereof, must display this notice unaltered.
# This code contains trade secrets of Real-Time Innovations, Inc.
#
#
# To compile, type:
# 	gmake -f <makefile_file_name>
#
# Note: This makefile is only meant to build our example applications and
#       may require alterations to build on your system.
#
# This makefile assumes that your build environment is already correctly
# configured. (For example, the correct version of your compiler and
# linker should be on your PATH.)
######################################################################

# If undefined in the environment default NDDSHOME to install dir
ifndef NDDSHOME
NDDSHOME := "/home/gerardo/rti_connext_dds-5.2.7"
endif

## Begin Platform specifix
DEFINES_ARCH_SPECIFIC = -DRTI_UNIX -DRTI_LINUX

ARCH = i86Linux3gcc4.8.2

c_cc = gcc
c_cc_flags = -m32 -Wall -g -O0
c_ld = gcc
c_ld_flags = -m32 -Wl,--no-as-needed -g
syslibs = -ldl -lnsl -lm -lpthread -lrt
## End Platform specifix

DEFINES = $(DEFINES_ARCH_SPECIFIC)  

INCLUDES = -I. -I$(NDDSHOME)/include -I$(NDDSHOME)/include/ndds

LIBS = -L$(NDDSHOME)/lib/$(ARCH) \
       -lnddsc -lnddscore -lrtirsinfrastructure $(syslibs) $(extralibs)

CDRSOURCES    = 
COMMONSOURCES = FileAdapter.c LineConversion.c
EXEC          = 

ifeq ($(findstring Darwin, $(ARCH)), Darwin)
    SHAREDLIB     = objs/$(ARCH)/libfileadapter.dylib
else
    SHAREDLIB     = objs/$(ARCH)/libfileadapter.so
endif

DIRECTORIES   = objs.dir objs/$(ARCH).dir
COMMONOBJS    = $(COMMONSOURCES:%.c=objs/$(ARCH)/%.o)


# Put the objects in a sub directory to keep your directory clean.
all: $(ARCH)
$(ARCH) : $(DIRECTORIES) $(COMMONOBJS) $(SHAREDLIB)


# Build the adapter shared library and copy it to the working directory
$(SHAREDLIB) : $(COMMONOBJS)
	$(c_cc) $(c_ld_flags) -shared -o $@ $^ $(LIBS)
	cp $(SHAREDLIB) ./

objs/$(ARCH)/%.o : src/%.c 
	$(c_cc) $(c_cc_flags)  -o $@ $(DEFINES) $(INCLUDES) -c $<



# Here is how we create those subdirectories automatically.
%.dir : 
	@echo "Checking directory $*"
	@if [ ! -d $* ]; then \
		echo "Making directory $*"; \
		mkdir -p $* ; \
	fi;
