// Online C compiler to run C program online
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    if(fork()==0){
        printf("Hello from child\n");
    } else {
        printf("Hello from parent\n");
        wait(NULL);
        printf("Child has terminated\n");
    }
    printf("Bye\n");
    
    if(child==0){
        printf("Child: I am running!\n\n");
        printf("Child: I have PID: %d\n", getpid());
        sleep(4);
        exit(100);
    } else {
        printf("Parent: I am running and waiting for child to finish");
        childpid = wait(&exitstatus);
        printf("Parent: child finish execution!, It had the PID: %d, exit status %d\n\n", childpid, WEXITSTATUS(exitstatus));
    }
    return 0;
}
