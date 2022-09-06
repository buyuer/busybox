#include "busybox.h"

int hello_main(int argc, char *argv[])MAIN_EXTERNALLY_VISIBLE;

int hello_main(int argc, char *argv[]) {
    printf("hello\n");

    for (int index = 0; index < argc; ++index) {
        printf("argv[%d]: %s\n", index, argv[index]);
    }

    return 0;
}
