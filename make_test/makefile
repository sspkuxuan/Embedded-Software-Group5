# Author : Longfeifei


CC = gcc 
APP_SRC = $(wildcard *.c)                      
TARGETS = $(patsubst %.c, %.out, $(APP_SRC))  

LIBS = -L ./lib   
CCFLAGS = -lpthread -g -Wall -O0   


all:$(TARGETS)

$(TARGETS):%.out:%.c
		@ echo CXX/LD -o $@ $<
		@ $(CC) $^ $(CCFLAGS) -o $@

clean:
		rm -rf *.out *.o $(TARGETS)

.PHONY:clean

