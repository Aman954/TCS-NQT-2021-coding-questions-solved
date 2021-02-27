#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
int noi,noe,i;
float intwall[200],extwall[200],sumt=0,sum1,sumt2=0,sum2;
double total;
scanf("%d",&noi);
scanf("%d",&noe);
if(noi==0 || noe==0)
{
   printf("Dont want to paint"); 
}
else 
{
    for(i=0;i<noi;i++)
    {
        scanf("%f",&intwall[i]);
        sumt=sumt+intwall[i];
    }
    sum1=sumt*18;
    for(i=0;i<noe;i++)
    {
        scanf("%f",&extwall[i]);
        sumt2=sumt2+extwall[i];
    }
    sum2=sumt2*12;
    
    total=sum1+sum2;
    
    printf("Total estimated Cost:%.2f INR",total);
}

 
}

