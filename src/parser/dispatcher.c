#include "parser/dispatcher.h"

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "commands/command_registry.h"
#include "logging/logger.h"

bool validate_argc(int argc) {
    if (argc <= 1) {
        printf("Invalid number of arguments.\n");
        printf("Usage: anvil <command> <arguments>\n");
        return false;
    }

    return true;
}

Command find_command(char* query) {
    Command command = command_registry[0];

    for(int i = 0; command.name != NULL; i++) {
        if (strcmp(query, command.name) == 0) { return command; }
        command = command_registry[i];
    }

    throw_fatal_exception("Command not found.");
    return (Command){NULL, NULL, NULL};
}

void dispatch_command(int argc, char* argv[]) {
    char* command_name = argv[1];

    find_command(command_name);
}