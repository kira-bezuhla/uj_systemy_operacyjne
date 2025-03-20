#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
 
    pid_t id;
    printf("parent process uid: %d, gid: %d, pid: %d, ppid: %d, pgid: %d\n",getuid(), getgid(), getpid(), getppid(),getpgrp());
    sleep(3);
    for(int i =0; i<3; i++){
        id = fork();
        if(id<0){
            perror("fork failed");
            exit(1);
        }
        else if(id==0){
            printf("child process uid: %d, gid: %d, pid: %d, ppid: %d, pgid: %d\n",getuid(), getgid(), getpid(), getppid(),getpgrp());
            sleep(3);
            
        }
    }
    sleep(5);

    return 0;
}