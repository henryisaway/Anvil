#ifndef ANVIL_PARSER_COMMAND_REGISTRY_H_
#define ANVIL_PARSER_COMMAND_REGISTRY_H_ 

#include <stdlib.h>

typedef void (*HandlerFunction)(int argc, char** argv);

enum CommandEnum {
    CMD_NEW,
    CMD_CREATE,
    CMD_DELETE,
    CMD_LIST,
    CMD_NULL
};

typedef struct Command {
    char* name;
    enum CommandEnum command;
    HandlerFunction handler;
    char* help;
} Command;

extern Command command_registry[];

#endif // ANVIL_PARSER_COMMAND_REGISTRY_H_