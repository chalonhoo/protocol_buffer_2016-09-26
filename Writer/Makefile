# 
#
# Makefile for executable.exe

# debug flag, use " make D=1 " to enable debug mode
EXE_TARGET = Writer$(FN_D).exe

SRCS += \
	$(wildcard *.cpp) \
	$(wildcard ../proto/*.cc) \	


CFLAGS += -g -pipe -Wall \
	-DLINUX \

CFLAGS += \
	-I../proto \


LDFLAGS += \
	-L../../protobuf-src/protobuf/lib -lprotobuf$(FN_D) \
	-lprotobuf-lite$(FN_D) \
	-lprotoc$(FN_D) \

TOP_DIR?=..
include $(TOP_DIR)/Makefile.template

