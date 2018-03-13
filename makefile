CXX = g++
LINKCXX = g++
CFLAGS = -std=c++11 -g -Wall -O2

TOP_DIR := $(shell pwd)
SRC_DIRS := $(shell find $(TOP_DIR) -maxdepth 1 -type d)
TARGET := $(TOP_DIR)/bin/mk0

CXX_SRCS = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.cpp))
CXX_OBJS = $(patsubst %.cpp,%.o,$(CXX_SRCS))

all:$(TARGET)

$(TARGET):$(CXX_OBJS)
	$(shell if [ ! -d $(TOP_DIR)/bin ];then mkdir $(TOP_DIR)/bin;fi)
	$(LINKCXX) $(CFLAGS) -o $@ $^
%.o:%.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

.PHONY:clean
clean:
	rm -rf $(TARGET) $(CXX_OBJS)
