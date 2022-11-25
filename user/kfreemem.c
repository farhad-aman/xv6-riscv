#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main()
{
    printf("Free memory: %d\n", kfreemem());

    // Specified in memlayout.h
    printf("Total memory: %d\n", 128 * 1024 * 1024);
    
    exit(0);
}
