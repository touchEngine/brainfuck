#ifndef __BRAINFUCK_H__
#define __BRAINFUCK_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define 	PROGRAM_NAME			brainfuck
#define 	VERSION 				"0.2.0"
#define 	BRAINFUCK_TAPE_SIZE 	3000
#define 	MAX_INPUT_SIZE 			10000
#define		EXIT_NORMAL				0
#define 	EXIT_WITH_EXCEPTION		-1

void no_match_error();
void show_version();
void print_usage();
void show_arg_error();
void show_welcome();

int intepreter(char *, char *);

char *sub_interpreter(char **, char *);

char *jump_to_rbracket(char **, char *);

char *go_loop(char **, char *);

char get_arg(char *);

#endif