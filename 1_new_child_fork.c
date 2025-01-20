#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    pid_tp = fork();
    if(p<0){
        Perrror("Fork Failed");
        exit(1);
    }
    printf("Hello world!, process_id(pid) = %d\n", getpid());
    return 0;
    
}
