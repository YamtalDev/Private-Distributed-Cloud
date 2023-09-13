# make clean/all CONFIG=Debug/Release ARCH=linux64/raspi ECHO=0/1
# the parrent dir of "arch" dir
ROOT_DIR = ../../../

#PROJ_SRCS = $(shell xmlstarlet select -t -v //Unit/@filename xx.cbp | grep -e '\.c')
#PROJ_SRCS = iot_server_SA.cpp
PROJ_SRCS = agent.cpp

# list of directories containing header files
PROJ_INC_DIR = ../../include

# the executable file
PROJ_OUT = agent.out

# list of compiler flags (prepended with "-" sign)
#PROJ_CFLAGS = -Wunused-but-set-variable
PROJ_CPPFLAGS = -Wno-old-style-cast

#PROJ_MACROS = _BSD_SOURCE
PROJ_MACROS =

# additional object files (created by other projects)
PROJ_ADD_OBJS =

# additional libraries
PROJ_LIBS =

# linker flags
PROJ_LDFLAGS =

# list of projects (makefiles) this project depends on
PROJ_DEPENDS =

include $(ROOT_DIR)/build/make/Project.mak