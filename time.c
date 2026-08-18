#include<stdio.h>
int main()
{
    int hours , minute , seconds , time, remsec ;
    printf("ENTER THE TIME IN SECONDS");
    scanf("%d" , &time);
    hours= time/3600;
    remsec=time%3600;
    minute=remsec/60;
    seconds=remsec%60;
    printf("Hours:Minutes:Seconds %d %d %d \n " , hours ,minute,seconds);
    return 0;

}