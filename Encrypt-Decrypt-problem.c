#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
 int key;
 char msg[100];
 char alphabets[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
char alphabets2[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
int i,j;
 gets(msg);
 scanf("%d",&key);
 
 if(key<0)
 {
     printf("INAVALID INPUT");
 }
 else 
 {
 
 for(i=0;msg[i]!='\0';i++)
{
    for(j=0;j<26;j++)
    {
        if(msg[i]==alphabets[j])
        {
          if((key+j)<26)
          {
              msg[i]=alphabets[j+key];

          }
          else 
          {
              msg[i]=alphabets[key-1];
              
          }
          break;
            
        }
        else if(msg[i]==alphabets2[j])
        {
             if((key+j)<26)
          {
              msg[i]=alphabets2[j+key];
          }
          else 
          {
              msg[i]=alphabets2[key-1];
              
          }
          break;
        }
    }
}

 for(i=0;msg[i]!='\0';i++)
{
	printf("%c",msg[i]);
}
 
 }

 
}

