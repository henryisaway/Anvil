#include "commands/command_registry.h"

Command command_registry[] = {
    {"new", NULL, "Creates a new project from a template."},
    {"add", NULL, "Adds a new template."},
    {"rm", NULL, "Removes a template."},
    {"list", NULL, "Lists all available templates."},
    {NULL, NULL, NULL}
};
