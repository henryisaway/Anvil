#ifndef ANVIL_COMMANDS_HANDLERS_H_
#define ANVIL_COMMANDS_HANDLERS_H_

/* @brief Handler function for the help command.
* @param argc Number of arguments provided to the function
* @param argv Array of argument strings
*/
void handler_help(int argc, char** argv);

/* @brief Handler function for the new command.
* @param argc Number of arguments provided to the function
* @param argv Array of argument strings
*/
void handler_new(int argc, char** argv);

/* @brief Handler function for the create command.
* @param argc Number of arguments provided to the function
* @param argv Array of argument strings
*/
void handler_create(int argc, char** argv);

/* @brief Handler function for the delete command.
* @param argc Number of arguments provided to the function
* @param argv Array of argument strings
*/
void handler_delete(int argc, char** argv);

/* @brief Handler function for the list command.
* @param argc Number of arguments provided to the function
* @param argv Array of argument strings
*/
void handler_list(int argc, char** argv);

#endif // ANVIL_COMMANDS_HANDLERS_H_