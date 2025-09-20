#include "commands/command_registry.h"

Command command_registry[] = {
    {"new", NULL, "Creates a new project from a template."},
    {"create", NULL, "Creates a new template."},
    {"delete", NULL, "Deletes a template."},
    {"list", NULL, "Lists all available templates."},
    {NULL, NULL, NULL}
};
