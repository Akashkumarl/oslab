#include <stdio.h>
#include<unistd.h>
int main()
{
    int i,n;
    printf("enter the limit");
    scanf("%d",&n);
    if(fork()!=0)
     {
          printf("parent process with id %d",getpid());
          printf("\neven numbers are");
          for(i=0;i<n;i++)
           {
                if(i%2==0)
                printf("%d",i);
                
           }
     }
     else
      { printf("\n child process:%d",getpid());
        printf("\nodd numbers are:");
        for(i=0;i<n;i++)
        {
            if(i%2!=0)
            printf("%d",i);
        }
          
      }
} 
