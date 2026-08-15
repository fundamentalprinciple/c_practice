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
        sleep(10);
        printf("from child process, pid=%d\n", pid);
        execlp("/bin/ls", "ls", NULL);
    }         
    else if (pid > 0) {
        //wait(NULL);
        printf("from parent process, pid=%d\n", pid);
        exit(0);
    }    
    else {
        fprintf(stderr, "Error in fork");
        exit(-1);
    }
}
