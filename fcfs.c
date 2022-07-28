#include <stdio.h>

int main()
{
 int at[10],bt[10],wt[10],tt[10],n;
 int burst = 0,cmpl_t;
 float avg_wt,avg_tt,total=0;
 printf("enter the number of process\n");
 scanf("%d",&n);
 printf("enter the arrival time and burst time of process\n");
 printf("AT\tBT\n");
 for(int i=0;i<n;i++)
 {
     scanf("%d%d",&at[i],&bt[i]);
 }
 for(int i=0;i<n;i++)
 {
     if(i==0)
     wt[i]=at[i];
     else
     wt[i]=burst-at[i];
     burst+=bt[i];
     total+=wt[i];
 }
 avg_wt=(total)/n;
 cmpl_t=0;
 total=0;
 for(int i=0;i<n;i++)
 {
     cmpl_t+=bt[i];
     tt[i]=cmpl_t-at[i];
     total+=tt[i];
 }
    avg_tt=(total)/n;
    printf("PROCESS WAITING TIME  TURNAROUND TIME\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\n",i+1,wt[i],tt[i]);
        
    }
    printf("average waiting time is :%f\n",avg_wt);
    printf("average turn around time is %f\n",avg_tt);
    return 0;
}
