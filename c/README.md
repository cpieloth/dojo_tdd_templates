TDD Template for C
==================

A simple template for a test-driven C dojo. 

* Add C code files in `./src/dojo/`
* Modify `./src/main_dojo.c` to change the entry point 
* Add unit tests in `./tests`
* Update targets and rules in `./Makefile`
* Prepare environment: `make init`
* Compile code: `make` 
* Run code: `build/main_dojo`
* Run tests: `build/main_tests` or `make test`
* Dependencies: C compiler, make, [check](http://check.sourceforge.net)
