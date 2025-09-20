#ifndef ANVIL_PARSER_COMMAND_REGISTRY_H_
#define ANVIL_PARSER_COMMAND_REGISTRY_H_ 

#include <stdlib.h>

typedef void (*HandlerFunction)(int argc, char** argv);

typedef struct Command {
    char* name;
    HandlerFunction handler;
    char* help;
} Command;

extern Command command_registry[];

#endif // ANVIL_PARSER_COMMAND_REGISTRY_H_