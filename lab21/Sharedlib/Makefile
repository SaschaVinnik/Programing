CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile:
	cp src/list.h ../shared
	$(CC) -c $(C_OPTS) -fPIC -I../Staticlib/dist src/list.c -o dist/list.o
	$(CC) -shared dist/list.o ../Staticlib/dist/libentity.a -o dist/liblist.so
	cp dist/liblist.so ../shared
