#include <stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{
char path[10];
printf("enter the path");
scanf("%s",path);
struct stat *buf;
buf = malloc(sizeof(struct stat));
stat(path,buf);
int size = buf->st_size;
int id = buf->st_mode;
printf("%d\n",size);
printf("%d\n",id);
free(buf);
}
