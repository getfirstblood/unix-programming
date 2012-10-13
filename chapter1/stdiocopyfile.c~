#include"apue.h"
int main(void)
{
	int c;
	while((c = getc(stdin))!=EOF)
	{
		if(putc(c,stdout) == EOF)
		{
			err_sys("error!");
		}
		if(ferror(stdin))
			err_sys("error");
	}
	exit(0);
}