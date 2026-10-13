#include<stdio.h>
#include<string.h>
    int main(){
        char str[100];
        int i;
        printf("ENTER THE SENTENCE");
        fgets(str,sizeof(str),stdin);
     for(i=0;str[i]!='\0';i++)
        {
            if(i==0 && str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
            else if(str[i-1]==' '&& str[i]>='a'&&str[i]<='z')
            {
                str[i]=str[i]-32;
            }
            }
            printf("OUTPUT IS:%s ", str);
            return 0;
}