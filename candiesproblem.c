#include <stdio.h>

int main(void)
{
 int n=10,sold,k=10;
 scanf("%d",&sold);
 if(sold<=5)
 {
     if(sold==0)
     {
         printf("INVALID INPUT\n");
         printf("NUMBER OF CANDIES AVAILABLE : %d",k);
     }
     else 
     {
     k=k-sold;
     printf("NUMBER OF CANDIES SOLD : %d\n",sold); 
     printf("NUMBER OF CANDIES AVAILABLE : %d",k);
     }
     if(k==0)
      k=10;
 }
 else 
 {
  printf("INVALID INPUT\n");
  printf("NUMBER OF CANDIES AVAILABLE : %d",k);
 }
 
	return 0;
}

