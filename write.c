#include<unistd.h>
#include<stdio.h>
int main()
{
int count;
count=write(1,"hello\n",6); //the file descriptor is not one of the pre-specified ones i.e., 0, 1 or 2
printf("Total bytes written: %d\n",count);
}
