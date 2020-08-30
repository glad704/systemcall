#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd;
	char buffer[40];
	char msg[40]="hello i am glad";
	fd= open("raman.txt",O_RDWR);
	printf("fd = %d\n",fd);
	if(fd!=-1)
	{
		printf("raman.txt opened with read write access!!\n");
		write(fd,msg,sizeof(msg));
		lseek(fd,0,SEEK_SET);
		read(fd,buffer,sizeof(msg));
		printf("%s ---- was written tomy file\n",buffer);
		close(fd);
	}
	return 0;
}
