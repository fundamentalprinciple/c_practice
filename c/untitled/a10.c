#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	int p;
	p = fork();
	if (p > 0) {
		printf("Parent: child PID = %d\n", p);
		p = wait(NULL);
		printf("Parent: child %d exited\n", p);
	} else if (p == 0) {
		printf("In child process");
		exit(0);
	} else {
		printf("Error\n");
	}	
}
