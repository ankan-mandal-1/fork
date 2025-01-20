#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    for(int i=0; i<5; i++){
        if(fork() ==0 ){
            printf("[Son] pid %d from [parent] ppid %d\n", getpid(), getppid());
            exit(0);
        }
    }
    
    for(int i=0; i<5; i++){
        wait(NULL);
    }
}
