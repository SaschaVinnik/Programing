sargets = task1.bin task2.bin task3.bin task4.bin task5.bin task22.bin task23.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra  -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference 

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: task1.bin task2.bin  task3.bin task4.bin task5.bin task22.bin task23.bin

task1.bin: src/task1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task2.bin: src/task2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task3.bin: src/task3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task4.bin: src/task4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task5.bin: src/task5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task22.bin: src/task22.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task23.bin: src/task23.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

run: clean prep compile
	./dist/task.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

