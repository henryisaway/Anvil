#include <stdio.h>

#include "commands/handlers.h"

void HandlerNew(int argc, char** argv) {
    printf("HandlerNew was called.\n");
}

void HandlerAdd(int argc, char** argv) {
    printf("HandlerAdd was called.\n");
}

void HandlerRemove(int argc, char** argv) {
    printf("HandlerRemove was called.\n");
}

void HandlerList(int argc, char** argv) {
    printf("HandlerList was called.\n");
}