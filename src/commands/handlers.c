#include <stdio.h>

#include "commands/command_registry.h"
#include "commands/handlers.h"
#include "logging/logger.h"

void handler_help(int argc, char** argv) {
    log_message("handler_help was called.");

    // By this point, we are sure argc > 1 ("anvil help [optional command name]")
    if (argc <= 2) {
        log_message("'help' was called with no additional arguments.");
        printf("Welcome to Anvil's help page!\n\n");
        printf("Note: <arguments> surrounded by <> are mandatory, while [arguments] surrounded by [] are optional.\n\n");
        printf("Command list:\n");

        Command command = command_registry[0];
        for (int i = 0; command.name != NULL; ) {
            printf("- %s: %s\n", command.name,  command.help);
            command = command_registry[++i];
        }
    }
}

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