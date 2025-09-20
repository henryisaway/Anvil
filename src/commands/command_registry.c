#include "commands/command_registry.h"

Command command_registry[] = {
    {"help", CMD_HELP, NULL, "Lists all available commands. Usage: anvil help [command]"},
    {"new", CMD_NEW ,NULL, "Creates a new project from a template. Usage: anvil new <template_name> <project_name>"},
    {"create", CMD_CREATE, NULL, "Creates a new template. Usage: anvil create <template_name> <template_path>"},
    {"delete", CMD_DELETE, NULL, "Deletes a template. Usage: anvil delete <template_name>"},
    {"list", CMD_LIST, NULL, "Lists all available templates."},
    {NULL, CMD_NULL, NULL, NULL}
};
