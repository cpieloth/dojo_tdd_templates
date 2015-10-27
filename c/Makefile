# Basic Compiler and Linker
CC=gcc
CFLAGS=-g -O0 -Wall -std=c99
LDFLAGS=

# Project structure
srcdir=src
testdir=tests
builddir=build

# Executable: main
incl_main=
objs_main=$(builddir)/main_dojo.o $(builddir)/calculator.o
libs_main=
exec_main=$(builddir)/main_dojo

# Executable: check/tests
incl_check=
objs_check=$(builddir)/main_tests.o $(builddir)/calculator.o
libs_check=-lcheck -lm -lpthread -lrt
exec_check=$(builddir)/main_tests

# Global 
INCLUDES=-I. -I$(srcdir) $(incl_main) $(incl_check)
LIBS=
EXEC=$(exec_main) $(exec_check)

# Targets
all: init $(EXEC)

init:
	mkdir -p $(builddir)
	
check: $(exec_check)
	$(exec_check)

test: check

clean:
	$(RM) *.o *.so *.a $(EXEC)
	$(RM) -rf $(builddir)/*

$(builddir)/%.o: 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@	

# Source mappings
$(builddir)/calculator.o: $(srcdir)/dojo/calculator.c
$(builddir)/main_dojo.o: $(srcdir)/main_dojo.c
$(builddir)/main_tests.o: $(testdir)/main_tests.c

$(exec_main): $(objs_main)
	$(CC) $(LDFLAGS) -o $@ $(objs_main) $(libs_main) $(LIBS)
	
$(exec_check): $(objs_check)
	$(CC) $(LDFLAGS) -o $@ $(objs_check) $(libs_check) $(LIBS)
	