#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
pid_t pid;
if((pid==fork())<0)
{
perror("fork error");
}
if(pid==0)
{
printf("I'm the Child\n");
}
else
{
printf("I'm the Parent\n");
}
printf("Both\n");
return 0;
}

