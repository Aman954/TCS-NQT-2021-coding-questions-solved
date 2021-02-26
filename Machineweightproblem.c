#include <stdio.h>
#include<math.h>
int main(void)
{
 int weight;
 scanf("%d",&weight);
 if(weight>7000 || weight<1)
 {
  printf("INVALID INPUT");
 }
 else 
 {
 printf("Time Estimated:%d minutes",cal(weight));
 }
}

int cal(int weight)
{
  if(weight<=2000 && weight>0)
  {
      return 25;
  }
  else if(weight>2000 && weight<=4000)
  {
      return 35;
  }
  else 
  {
      return 45;
  }
}

