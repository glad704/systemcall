#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd1,fd2,fd3;
	fd1 = open("raman.txt",O_RDONLY|O_CREAT,0777);
	fd2 = open("ram.txt",O_RDONLY|O_CREAT,0777);
	fd3 = dup2(fd1,fd2);
	printf("fd3 value is %d\n",fd3);
	while(1)
	{
	}
	return 0;
}
