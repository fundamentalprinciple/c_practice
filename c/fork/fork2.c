#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int main() {
    pid_t pid; //for this process
    pid_t ppid; //for its parent, i.e bash
    pid = getpid();
    ppid = getppid();
    printf("pid: %d\n",pid);
    printf("ppid (bash): %d\n",ppid);

    pid = fork();
    
    if (pid == 0) {
        printf("from child process, pid=%d\n", pid);
        sleep(5);
        exit(0);
    }         
    else if (pid > 0) {
        pid_t x;
        int status;
        x = wait(&status);
        printf("from parent process, pid=%d\n", getpid());
        printf("SHAKALAKBOOMBOOM X: %d\n", x);
        exit(0);
    }    
    else {
        fprintf(stderr, "Error in fork");
        exit(-1);
    }
}
