// Online C compiler to run C program online
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    pid_t = pid;
    pid = getpid();
    printf("Before fork %d\n", pid);
    pid = fork();
    if(pid == 0){
        printf("The line from child, \n the child process id %d\n", getpid());
        execl("\bin\ls", "ls", "-1", (char *)0);
        exit(0);
    } else if(pid >0){
        wait (NULL);
    } else {
        printf("\n fork failed");
        exit(1);
    }
    return 0;
}
