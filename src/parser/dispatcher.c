#include "parser/dispatcher.h"

#include <stdio.h>
#include <stdbool.h>

#include "commands/command_registry.h"
#include "commands/handlers.h"
#include "logging/logger.h"

bool validate_argc(int argc) {
    if (argc <= 1) {
        printf("Invalid number of arguments.\n");
        printf("Usage: anvil <command> <arguments>\n");
        return false;
    }

    return true;
}

void dispatch_command(int argc, char* argv[]) {
    char* command_name = argv[1];

    Command command = find_command(command_name);

    switch(command.command) {
        case CMD_NULL:
            log_message("Unknown command called.");
            printf("'%s' is not a valid command. Use 'anvil help' for a list of available commands.\n",
            command_name);
            break;
        default:
            log_message("The following command was called:");
            log_message(command.name);

            command.handler(argc, argv);
    }
}