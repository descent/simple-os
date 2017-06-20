#include "systemFunc.h"
#include "../kernel/syscalls.h"

void start()
{
    char *line;

    uprintf("Program to demonstrate input\n");
    line = umalloc(256);
    uprintf("Hex number: ");
    ureadln(line);
    uprintf("Dec number: %d\n", str_toIntHex(line));
    uexit();
}