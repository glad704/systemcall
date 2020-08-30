#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd1;
	fd1 = open("raman.txt",O_RDONLY|O_CREAT,777);
	close(2);
	dup(fd1);
	while(1)
	{
	}
	return 0;
}
