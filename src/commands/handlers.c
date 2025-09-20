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
        printf("You can ask for help about a specific command through 'anvil help [command]'.\n");
        printf("Command list:\n");

        Command command = command_registry[0];
        for (int i = 0; command.name != NULL; ) {
            printf("- %s: %s\n", command.name,  command.desc);
            command = command_registry[++i];
        }

        return;
    }

    // By here, we know the user asked for help in a specific command
    if (argc > 3) {
        log_message("Invalid number of arguments provided to the help command.");
        throw_exception("Too many arguments. Usage: anvil help [command].");
        return;
    }

    char* command_name = argv[2];
    Command query = find_command(command_name);

    // Command not found
    if (query.name == NULL) {
        char final_message[MAX_LOG_MSG_SIZE];
        char* base_error_message = "The requested command doesn't exist: ";
        snprintf(final_message, MAX_LOG_MSG_SIZE, "%s%s", base_error_message, command_name);

        throw_exception(final_message);
        return;
    }

    printf("%s\n", query.desc);
    printf("Usage: anvil %s\n", query.syntax);

    if (query.help) {
        printf("\n%s\n", query.help);
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