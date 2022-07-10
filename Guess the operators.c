#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int operator();
int number();
int main(){
    int final=1,i,num[5],oper;
    float sum;
    char ans[4],valid[4];
    srand(time(0));
    for(i=0;i<6;i++)
    {
        num[i]=number();
    }
    oper=operator();
    if(oper==1)
    {
        sum=num[0]+num[1]/num[2]*num[3]-num[4];
        char valid[]={'+','/','*','-'};
    }
    else if (oper==2)
    {
        sum=num[0]/num[1]*num[2]+num[3]-num[4];
        char valid[]={'/','*','+','-'};
    }
        else if (oper==3)
    {
        sum=num[0]-num[1]+num[2]*num[3]/num[4];
        char valid[]={'-','+','*','/'};
    }
        else if (oper==4)
    {
        sum=num[0]*num[1]-num[2]+num[3]/num[4];
        char valid[]={'*','-','+','/'};
    }
    printf("Guess the Operator!\nOperators Used is + - * /\nEnter the operator for the numbers\n");
    for(i=0;i<4;i++)
    {
        printf("%d___",num[i]);
    }
    printf("%d= %d",num[4],sum);
    for(i=0;i<5;i++)
    {
        printf("\nEnter %d Operator",i+1);
        scanf("%c",ans[i]);
    }
    for(i=0;i<5;i++)
    {
        if(ans[i]!=valid[i]){
            final=0;
        }
    }
    if(final==1)
    {
        printf("You Won");
    }
    else
    {
        printf("You Failed, Try again");
        main();
    }
    return 0;
}
int operator()
{
    int bi=rand()%5;
    if(bi==0)
    {
        operator();
    }
    else
    {
        return bi;
    }
}
int number()
{
    int vi=rand()%1000;
    if(vi==0)
    {
        operator();
    }
    else
    {
        return vi;
    }
}