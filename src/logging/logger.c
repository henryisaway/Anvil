#include "logging/logger.h"

#include <stdio.h>
#include <stdlib.h>

void log_message(char* message) {
    if(LOGGING) {
        printf("[LOG] %s\n", message);
    }
}

void throw_exception(char* exception) {
    if (exception == NULL) {
        exception = "Unknown exception.";
    }

    printf("An error has occurred: %s\n", exception);
}

void throw_fatal_exception(char* exception) {
    if (exception == NULL) {
        exception = "Unknown exception.";
    }

    printf("A fatal error has occurred: %s\n", exception);
    printf("Exiting progam with code %d\n", EXIT_FAILURE);

    exit(EXIT_FAILURE);
}