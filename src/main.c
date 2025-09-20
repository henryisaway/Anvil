#include <stdio.h>
#include <stdbool.h>

#include "parser/dispatcher.h"

int main(int argc, char* argv[]) {
    if(validate_argc(argc)) {
        dispatch_command(argc, argv);
    }

    return 0;
}