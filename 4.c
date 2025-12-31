#include <stdio.h>

int main() {
	int age = 20;
	int *pAge = &age;
	
	/*
	char str[] = "OYE!";
	char *pStr = &str;
	*/	
	
	printf("%p\n", pAge);	
	printf("%p\n", &pAge);
	printf("%d\n", *pAge);
	printf("%lu\n", sizeof(age));
	printf("%lu\n", sizeof(pAge));
	printf("%lu\n", sizeof(*pAge));
}
