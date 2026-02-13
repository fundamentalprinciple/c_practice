#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	int i = 23, pid;
	pid = fork();
	if (pid > 0) {
		sleep(5); //should appear delayed
		printf("parent pid%d : i=%d\n", pid, i);
		wait(NULL);
	} else {
		i = i +1;
		printf("child pid%d : i=%d\n", pid, i);
	}
}
