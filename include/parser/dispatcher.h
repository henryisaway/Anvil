#ifndef ANVIL_PARSER_DISPATCHER_H_
#define ANVIL_PARSER_DISPATCHER_H_

#include <stdbool.h>

#include "commands/command_registry.h"

bool validate_argc(int argc);

void dispatch_command(int argc, char* argv[]);

#endif // ANVIL_PARSER_DISPATCHER_H_