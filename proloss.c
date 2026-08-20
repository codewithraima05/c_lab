#include<stdio.h>
int main()
{
    float sp , cp ; float profit , loss;
    printf("ENTER THE SELLING PRICE & COST PRICE");
    scanf("%f",&cp);
    scanf("%f" ,&sp);
    if(sp>cp){
    profit=((sp-cp)/cp)*100.0;
    printf("profit  %.0f%%", profit);
    }
    else if(cp>sp){
    loss=((cp-sp)/cp)*100.0;
    printf("loss  %.0f%%", loss);
    }
    else{
    printf("NO LOSS , NO PROFIT");
    }
    return 0;
}