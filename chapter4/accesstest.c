#include"apue.h"
#include<fcntl.h>
int main(int argc, char *argv[])
{
	if(argc !=2)
	{
		printf("error");
		exit(1);
	}
	if(access(argv[1],R_OK)<0)
	{
		err_ret("access error for%s",argv[1]);
	}else
		printf("sucess access %s",argv[1]);
	if(open(argv[1],O_RDONLY)<0)
		err_ret("open %sfailed",argv[1]);
	else
		printf("open %ssucess",argv[1]);
	return 0;
}