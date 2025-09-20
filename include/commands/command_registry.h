#ifndef ANVIL_PARSER_COMMAND_REGISTRY_H_
#define ANVIL_PARSER_COMMAND_REGISTRY_H_ 

#include <stdlib.h>

typedef void (*HandlerFunction)(int argc, char** argv);

typedef struct Command {
    char* name;
    HandlerFunction handler;
    char* help;
} Command;

// --- Command Registry ---

/* Command commands[] = {
    {"new", HandlerNew, "Creates a new project from a template."},
    {"add", HandlerAdd, "Adds a new template."},
    {"rm", HandlerRemove, "Removes a template."},
    {"list", HandlerList, "Lists all available templates."},
    {NULL, NULL, NULL}
}; */

extern Command command_registry[];

#endif // ANVIL_PARSER_COMMAND_REGISTRY_H_