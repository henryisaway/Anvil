#ifndef ANVIL_LOGGING_LOGGER_H_
#define ANVIL_LOGGING_LOGGER_H_

// Toggle logging on/off if LOGGER is 1 (on) or 0 (off)
#define LOGGING 1

/* @brief logs a message to stdout if LOGGING is set to 1
* @param message The message to be sent to stdout
*/
void log_message(char* message);

/* @brief Displays an error message
* @param exception A string containing the reason for the exception
*/
void throw_exception(char* exception);

/* @brief Displays an error message and exits the application
* @param exception A string containing the reason for the fatal exception
*/
void throw_fatal_exception(char* exception);

#endif // ANVIL_LOGGING_LOGGER_H_