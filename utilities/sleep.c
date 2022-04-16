#include "kernel/types.h" 
#include "kernel/stat.h"
#include "user/user.h"
int
main(int argc, char *argv[])
{
	int num;

	if(argc < 2)
	{
		char *ERROR = "Something wrong!\nYou should input the number.";
		write(1, ERROR, strlen(ERROR));
	}
	else
	{
		num = atoi(argv[1]);
		sleep(num);
	}

	exit(0);
}

	


