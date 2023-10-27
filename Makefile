CC=gcc
CFLAGS=-std=c99 -Wall

# additional flags for gcov
TESTFLAGS=-fprofile-arcs -ftest-coverage


clean:
    rm -f *.o test *.gcov *.gcda *.gcno
