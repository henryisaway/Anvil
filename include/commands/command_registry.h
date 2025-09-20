#ifndef ANVIL_PARSER_COMMAND_REGISTRY_H_
#define ANVIL_PARSER_COMMAND_REGISTRY_H_ 

#include <stdlib.h>

// --- Help messages ---
#define HELP_HELP "[command] Optionally provide a command for specific help about that command"

#define NEW_HELP \
"<template_name> The name of the template that will be used for the project\n" \
"<project_name> The name of the new project\n\n" \
"This will copy the relevant template from Anvil's registry into the current directory."

#define CREATE_HELP \
"Creates a new template.\n" \
"Usage: create <template_name> <reference_path>\n\n" \
"<template_name>   The name under which the template will be stored.\n" \
"<reference_path>  Path to an existing project directory that will serve\n" \
"                  as the reference for this template.\n\n" \
"The directory at <reference_path> is copied into ~/.config/anvil/templates/<template_name>\n\n" \
"Once created, the template can be used with:\n" \
"  anvil new <template_name> <project_name>\n\n" \
"This will copy the stored template into the current working directory as <project_name>."

#define DELETE_HELP "<template_name> Name of the template to be deleted."

// ---

typedef void (*HandlerFunction)(int argc, char** argv);

enum CommandEnum {
    CMD_HELP,
    CMD_NEW,
    CMD_CREATE,
    CMD_DELETE,
    CMD_LIST,
    CMD_NULL
};

typedef struct Command {
    char* name;                 // name of the command
    enum CommandEnum command;   // enum of the command
    HandlerFunction handler;    // function pointer responsible for handling the command
    char* desc;                 // short description of the command
    char* syntax;               // demonstration of the command's syntax
    char* help;                 // extra help text if necessary, can set to NULL if not needed.
} Command;

extern Command command_registry[];

/** @brief Finds a command in the registry
* @param query String containing the name of the command to be looked up
* @return Returns the struct command of the queried command, a null struct command if not found.
*/
Command find_command(char* query);

#endif // ANVIL_PARSER_COMMAND_REGISTRY_H_