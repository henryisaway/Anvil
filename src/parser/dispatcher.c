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
        case CMD_HELP:
            log_message("Dispatcher asked for HELP");
            handler_help(argc, argv);
            break;
        case CMD_NEW:
            log_message("Dispatcher asked for NEW");
            handler_new(argc, argv);
            break;
        case CMD_CREATE:
            log_message("Dispatcher asked for CREATE");
            handler_create(argc, argv);
            break;
        case CMD_DELETE:
            log_message("Dispatcher asked for DELETE");
            handler_delete(argc, argv);
            break;
        case CMD_LIST:
            log_message("Dispatcher asked for LIST");
            handler_list(argc, argv);
            break;
        default:
            log_message("Unknown command called.");
            printf("'%s' is not a valid command. Use 'anvil help' for a list of available commands.\n",
            command_name);
    }
}