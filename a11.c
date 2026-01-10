#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	int i = 23, pid;
	pid = fork();
	if (pid > 0) {
		sleep(1); //should appear delayed
		printf("parent: %d\n", i);
		wait(NULL);
	} else {
		printf("child: %d\n", i);
	}
}
