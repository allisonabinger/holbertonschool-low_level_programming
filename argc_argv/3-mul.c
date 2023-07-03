#include <stdlib.h>
#include <stdio.h>
void mul(int argc, char *argv[]){
	
	int result, i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	result = (atoi(argv[1]))*(atoi(argv[2]));

	printf("%d\n", result);

	return (0);
}
