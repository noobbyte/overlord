#ifndef __UTIL_H
#define __UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <setjmp.h>
#include <poll.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/signalfd.h>
#include <arpa/inet.h>

#define MAX_MESSAGE_LENGTH 4096
#define PORT 5001

#define RESET "\001\033[0m\002"
#define BOLD "\001\033[1m\002"
#define UNDERLINE "\001\033[4m\002"
#define RED "\001\033[0;31m\002"
#define GREEN "\001\033[0;32m\002"
#define YELLOW "\001\033[0;33m\002"
#define BLUE "\001\033[0;34m\002"
#define MAGENTA "\001\033[0;35m\002"
#define CYAN "\001\033[0;36m\002"
#define WHITE "\001\033[0;37m\002"
#define BOLD_RED "\001\033[1;31m\002"
#define BOLD_GREEN "\001\033[1;32m\002"
#define BOLD_YELLOW "\001\033[1;33m\002"
#define BOLD_BLUE "\001\033[1;34m\002"
#define BOLD_MAGENTA "\001\033[1;35m\002"
#define BOLD_CYAN "\001\033[1;36m\002"
#define BOLD_WHITE "\001\033[1;37m\002"

extern int sock;
extern char *input;
extern char message[MAX_MESSAGE_LENGTH];

int min(int a, int b);

int checkError(int descriptor, char *description);

void prompt(char **input_ptr, char *prefix, int history);

int startsWith(char *s1, char *s2);

int equals(char *s1, char *s2);

void leftShift(char *str, int offset);

int readMessage(int fd);

#endif
