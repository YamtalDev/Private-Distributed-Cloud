# make clean/all CONFIG=Debug/Release ARCH=linux64/raspi ECHO=0/1

# the parrent dir of "arch" dir
ROOT_DIR= ../../..

#PROJ_SRCS = $(wildcard *.c)
PROJ_SRCS= daemon_test.cpp daemon.cpp

# list of directories containing header files
#PROJ_INC_DIR = $(ROOT_DIR)/include
PROJ_INC_DIR= ../../../concrete/include ../../../framework/include 

# the executable file
PROJ_OUT= daemon.out

# list of ADDITIONAL compiler flags (prepended with "-" sign)
#PROJ_CFLAGS = -Wunused-but-set-variable
PROJ_CFLAGS= -DPDC_DEBUG
PROJ_CPPFLAGS= -DPDC_DEBUG

#PROJ_MACROS = _BSD_SOURCE
PROJ_MACROS=

# additional object files (created by other projects) .o or .obj for cpp
PROJ_ADD_OBJS= reactor.obj imonitor.obj buse.o buse_logger.o

# additional libraries
PROJ_LIBS=

# linker flags
PROJ_LDFLAGS=

# list of projects (makefiles) this project depends on
PROJ_DEPENDS= $(ROOT_DIR)/framework/test/reactor/Makefile $(ROOT_DIR)/framework/test/imonitor/Makefile ../buse/Makefile

include $(ROOT_DIR)/build/make/Project.mak
