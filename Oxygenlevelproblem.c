#include <stdio.h>
#include<math.h>
int main(void)
{
 int a[3][3],i,j,b[3],k=0;
 int static sum;
 for(i=0;i<3;i++)
 {
     sum=0;
     for(j=0;j<3;j++)
     {
     scanf("%d\n",&a[i][j]);
     }
 }
 
 for(i=0;i<3;i++)
 {
     sum=0;
     for(j=0;j<3;j++)
     {
         if(a[i][j]>1 && a[i][j]<100)
         {
           sum=sum+a[i][j]; 
         }
         else 
         {
            k=1;
         }
     }
          b[i]=round(sum/3);

 }
 
 
 if(k!=1)
 {
 
 if(b[0]>=b[1] && b[0]>=b[2])
 {
     if(b[0]>=75)
     {
     if(b[0]==b[1])
     {
         printf("Trainee Number:%d\n",1);
         printf("Trainee Number:%d",2);
     }
     else if(b[0]==b[2])
     {
         printf("Trainee Number:%d\n",1);
         printf("Trainee Number:%d",3);
     }
     else if(b[0]==b[1] && b[0]==b[2])
     {
        printf("Trainee Number:%d\n",1);
         printf("Trainee Number:%d\n",2);
         printf("Trainee Number:%d",3);
     }
     else 
     {
         printf("Trainee Number:%d",1);
     }
     }
     else 
     {
         printf("All Trainees are unfit");
     }
 }
 
 else if(b[1]>=b[0] && b[1]>=b[2])
 {
     if(b[1]>=75)
     {
     if(b[1]==b[0])
     {
         printf("Trainee Number:%d\n",1);
         printf("Trainee Number:%d",2);
     }
     else if(b[1]==b[2])
     {
         printf("Trainee Number:%d\n",2);
         printf("Trainee Number:%d",3);
     }
     else if(b[0]==b[1] && b[1]==b[2])
     {
        printf("Trainee Number:%d\n",1);
         printf("Trainee Number:%d\n",2);
         printf("Trainee Number:%d",3);
     }
     else 
     {
         printf("Trainee Number:%d",2);
     }
     }
     else 
     {
         printf("All trainees are unfit");
     }
     
 }
 
 else 
 {
     if(b[2]>=75)
     {
     if(b[2]==b[0])
     {
         printf("Trainee Number:%d\n",1);
         printf("Trainee Number:%d",3);
     }
     else if(b[1]==b[2])
     {
         printf("Trainee Number:%d\n",2);
         printf("Trainee Number:%d",3);
     }
     else if(b[2]==b[0] && b[2]==b[1])
     {
        printf("Trainee Number:%d\n",1);
         printf("Trainee Number:%d\n",2);
         printf("Trainee Number:%d",3);
     }
     else 
     {
         printf("Trainee Number:%d",3);
     }
     }
     else 
     {
         printf("All trainees are unfit");
     }
 }
 }
 else 
 {
     printf("INVALID INPUT");
 }
    
     
	return 0; 
}

