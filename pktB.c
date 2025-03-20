#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
 

    printf("PARENT uid: %d, gid: %d, pid: %d, ppid: %d, pgid: %d\n",getuid(), getgid(), getpid(), getppid(),getpgrp());
    for(int i =0; i<3; i++){
        switch (fork())
        {
        case -1:
            perror("fork error");
            break;
        case 0:
            printf("CHILD uid: %d, gid: %d, pid: %d, ppid: %d, pgid: %d\n",getuid(), getgid(), getpid(), getppid(),getpgrp());
        
        default:
            wait();
            
        }
    }

    return 0;
}