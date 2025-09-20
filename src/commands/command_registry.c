#include "commands/command_registry.h"

#include <stdio.h>
#include <string.h>

#include "logging/logger.h"

Command command_registry[] = {
    {"help", CMD_HELP, NULL, "Lists all available commands.", "help [command]", HELP_HELP},
    {"new", CMD_NEW , NULL, "Creates a new project from a template.", "new <template_name> <project_name>", NEW_HELP},
    {"create", CMD_CREATE, NULL, "Creates a new template.", "create <template_name> <reference_path>", CREATE_HELP},
    {"delete", CMD_DELETE, NULL, "Deletes a template.", "delete <template_name>", DELETE_HELP},
    {"list", CMD_LIST, NULL, "Lists all available templates.", "list", NULL},
    {NULL, CMD_NULL, NULL, NULL, NULL, NULL}
};

Command find_command(char* query) {
    Command command = command_registry[0];

    for(int i = 0; command.name != NULL;) {
        if (strcmp(query, command.name) == 0) { return command; }
        command = command_registry[++i];
    }

    char final_message[MAX_LOG_MSG_SIZE];
    char* base_error_message = "The following queried command was not found: ";
    snprintf(final_message, MAX_LOG_MSG_SIZE, "%s%s", base_error_message, query);
    log_message(final_message);

    return (Command){NULL, CMD_NULL, NULL, NULL, NULL, NULL};
}