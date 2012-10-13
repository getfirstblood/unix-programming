#include<apue.h>
int main()
{
	if(lseek(STDIN_FILENO,0,SEEK_CUR) == -1)
	{
		printf("can not");
	}
	else
		printf("ok");
	return 0;
}
	