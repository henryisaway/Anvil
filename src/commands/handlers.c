#include <stdio.h>

#include "commands/handlers.h"
#include "logging/logger.h"

void handler_new(int argc, char** argv) {
    log_message("handler_new was called.");
}

void handler_create(int argc, char** argv) {
    log_message("handler_create was called.");
}

void handler_delete(int argc, char** argv) {
    log_message("handler_delete was called.");
}

void handler_list(int argc, char** argv) {
    log_message("handler_list was called.");
}