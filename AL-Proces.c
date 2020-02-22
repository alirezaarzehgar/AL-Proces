#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int run(char* program);

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		printf("argument \033[31not\033[0m found!\n");
		return -1;
	}

	for(int i = 1; i < argc; i++) run(argv[i]);

	return 0;
}

int run(char* program)
{
	int a = fork();
	if(a == 0) system(program);
	else return 0;
	return 1;
}
