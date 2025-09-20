#include "logging/logger.h"

#include <stdio.h>
#include <stdlib.h>

void throw_fatal_exception(char* exception) {
    if (exception == NULL) {
        exception = "Unknown exception.";
    }

    printf("A fatal error has occurred: %s\n", exception);
    printf("Exiting progam with code %d\n", EXIT_FAILURE);

    exit(EXIT_FAILURE);
}