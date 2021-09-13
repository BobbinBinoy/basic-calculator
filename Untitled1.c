#include <stdio.h>
#include<stdlib.h>
float sumto()
{

    int i,n,sumi=0;
    printf("enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sumi=sumi+i;
    }
    printf("The sum from 1 to %d terms is %d ", n, sumi);
}
int fibonacci()
{
    int first,second,current,i,limit;
    printf("enter the limit:");
    scanf("%d", &limit);
    printf("limit is %d ",limit);
    first=0;
    second=1;
    current=first;
    for(i=0;i<limit;i++)
    {
        printf("\t", current);
        first=second;
        second=current;
        current=first+second;
    }
    printf("\n");


}


int main()
{
    int num1,num2,sum,sub,mult,div;
    int option,list;
    int remin;
    printf("enter the numbers");
    scanf("%d %d", &num1,&num2);
    printf("what is the operation 1.sum 2.sub 3.mult 4.div: 5.more options:");
    scanf("%d", &option);
    printf("you selected option is %d \n", option);
    if(option == 1 )
    {




        sum=num1+num2;
        printf("sum is: %d", sum);
    }

    else if(option == 2)
    {



        sub=num1-num2;
        printf("sub is: %d", sub);
    }
    else if(option == 3)
    {



        mult=num1*num2;
        printf("mult is: %d", mult);
    }
    else if(option == 4)
    {



        div=num1/num2;
        printf("div is: %d", div);
    }
    else if(option== 5)
    {
        printf("1.find some from 1 to a particular number: 2.to print fibonacci series: 3.to find the reminder after division:");
        scanf("%d", &list);
        if(list== 1)
        {
            sumto();


        }
        else if(list== 2)
        {
            fibonacci();
        }
        else if(list== 3)
        {
            int remin;
            remin=num1%num2;
            printf("reminder is=", remin);
        }

    }
    else
    {
        printf("not defined");
    }


    return 0;

}

