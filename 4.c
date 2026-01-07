#include <stdio.h>

int main() {
	int age = 20;
	int *pAge = &age;
	int num = 34;	
	/*
	char str[] = "OYE!";
	char *pStr = &str;
	*/	
	
	printf("%p\n", pAge);	
	printf("%p\n", &pAge);
	printf("%p\n", &num);
	printf("%d\n", *pAge);
	printf("%lu\n", sizeof(age));
	printf("%lu\n", sizeof(pAge));
	printf("%lu\n", sizeof(*pAge));
}
