#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
double pprmtr,cost;
int path[8]={800,600,750,900,1400,1200,1100,1500};
char busstops[][2]={"TH","GA","IC","HA","TE","LU","NI","CA","\0\0"};
char source[2],destination[2];
int sum=0,i,j,check1=0,check2=0,check=0,index1,index2,fcheck1=0,fcheck=0;
pprmtr=0.005;
gets(source);
gets(destination);


   for(j=0;source[j];j++)
   {
      if(source[j]==destination[j])
      {
          check2++;
      }
   }

if(check2!=2)
{
for(i=0;i<8;i++)
{
    check=0;
    check1=0;
   for(j=0;j<2;j++)
   {  
      if(source[j]==busstops[i][j])
      {
          check1++;
      }
      else if(destination[j]==busstops[i][j])
      {
          check++;
      }
     
      if(check1==2)
      {
          index1=i;
          fcheck1=2;
      }
      if(check==2)
      {
          index2=i;
          fcheck=2;
      }
      
   }
    if(fcheck==2 && fcheck1==2)
      {
          break;
      }
}
}
else 
{
    printf("source and destination cannot be same");
}

if(fcheck1==2 && fcheck==2)
{

  if(index1>index2)
  {
      for(i=index2;i<=index1;i++)
      {
          sum=sum+path[i];

      }
      cost=sum*pprmtr;
      printf("%.1f INR",ceil(cost));
  }
  else 
  {
      for(i=index1;i<=2;i++)
      {
          sum=sum+path[i];
      }
      cost=sum*pprmtr;
      printf("%.1f INR",ceil(cost)); 
  }
   
}
else 
{
    printf("INVALID INPUT");
}
 
}

