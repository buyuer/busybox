#include "busybox.h"

#include <sys/prctl.h>

int myscl_main(int argc, char *argv[])MAIN_EXTERNALLY_VISIBLE;

int myscl_main(int argc, char *argv[]) {
    long int ret = 0;
    const char name[1024];

    prctl(PR_GET_NAME, name);
    printf("old: %s\n", name);
    ret = syscall(801);
    prctl(PR_GET_NAME, name);
    printf("new: %s, and ret: %ld\n", name, ret);

    return 0;
}
