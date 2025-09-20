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

    // This will never actually be called,
    // since throw_fatal_exception calls
    // exit(EXIT_FAILURE).
    return (Command){NULL, CMD_NULL, NULL, NULL};
}

void dispatch_command(int argc, char* argv[]) {
    char* command_name = argv[1];

    Command command = find_command(command_name);

    switch(command.command) {
        case CMD_NEW:
            printf("Dispatcher asked for NEW\n");
            break;
        case CMD_CREATE:
            printf("Dispatcher asked for CREATE\n");
            break;
        case CMD_DELETE:
            printf("Dispatcher asked for DELETE\n");
            break;
        case CMD_LIST:
            printf("Dispatcher asked for LIST\n");
            break;
        default:
            printf("Unknown command.\n");
            // this should probably never be called
    }
}