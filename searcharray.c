#include<stdio.h>
int main()
{
    int  i , arr[5], f=0, v; 
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
        scanf("%d", &arr[i]);
    
    printf("ENTER THE NUMBER YOU WANT TO SEARCH");
    scanf("%d",&v);

    for(i=0;i<5;i++)
    {
        if(v==arr[i])
        {
            f=1;;
            break;
        }
    }
    if(f==1){
        printf("SEARCH SUCCESSFUL");
    }
    else{
        printf("SEARCH UNSUCCESSFUL");
    }
        return 0;

}
