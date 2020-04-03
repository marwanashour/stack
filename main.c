#include <stdio.h>
#include <stdlib.h>
int arr[10];
int ii=-1;
// try git
int push(int b)
{
    ii++;
    arr[ii]=b;


}
int pop()
{

    printf("pop = %d \n",arr[ii]);
    ii--;



}
int disp ()
{  int k ;
    for (k=0 ; k<=9 ; k++)
    {
        printf(" %d,  ",arr[k]);
    }
    printf("\n");
}

int main()
{   int no ;
int i ;
int value ;
int p ;
int j ;
int cont ;
int flag = 0 ;




do
    {
    printf("Enter 1 for a push or 0 for a pop , 2 for display \n");
    scanf("%d",&no);



    if (no==1)
    {

        printf("enter value of number ");
        scanf("%d",&value);
        push(value);


    }
    else if (no ==0)
    {
        pop(p);


    }
    else if (no==2)
    {
        disp();

    }
    printf("do you want to end if yes enter 1 if no o =");
    scanf("%d",&flag);
    }
    while (flag ==0);


    return 0;
}
