#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

void* run(void* program);

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		printf("argument \033[31not\033[0m found!\n");
		return -1;
	}

	pthread_t id;
	for(int i = 1; i < argc; i++) pthread_create(&id, NULL, &run, (void*)argv[i]);

	while(1);
	return 0;
}

void* run(void* program)
{
	char command[1024];
	sprintf(command, "mate-terminal -e %s", program);
	system(command);
	while(1);
}
