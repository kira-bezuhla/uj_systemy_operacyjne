/*Napisa´c program wypisujacy identyfikatory
UID, GID, PID, PPID i PGID dla danego procesu.*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t uid = getuid();
    pid_t gid = getgid();
    pid_t pid = getpid();
    pid_t ppid = getppid();
    pid_t pgid = getpgid(pid);

    printf("uid: %d\n", uid);
    printf("gid: %d\n", gid);
    printf("pid: %d\n", pid);
    printf("ppid: %d\n", ppid);
    printf("pgid: %d\n", pgid);

    return 0;
}