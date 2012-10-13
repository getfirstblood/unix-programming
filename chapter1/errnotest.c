#include"apue.h"
#include<errno.h>
int main(int argc,char *argv[])
{
	printf("error:%s",strerror(EACCES));
	errno = ENOENT;
	perror(argv[0]);
	exit(0);
}