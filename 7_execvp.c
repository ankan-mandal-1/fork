#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

int main() {
    char *const argv[] = {"ls", "-1", NULL};
    execvp("ls", argv);
    perror("execvp");
    return 1;
}
