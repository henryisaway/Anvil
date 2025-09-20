#include "commands/command_registry.h"

Command command_registry[] = {
    {"new", CMD_NEW ,NULL, "Creates a new project from a template."},
    {"create", CMD_CREATE, NULL, "Creates a new template."},
    {"delete", CMD_DELETE, NULL, "Deletes a template."},
    {"list", CMD_LIST, NULL, "Lists all available templates."},
    {NULL, CMD_NULL, NULL, NULL}
};
