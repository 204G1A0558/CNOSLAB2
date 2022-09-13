/* Name Of the Candidate: S. Faraz
   Roll No: 204G1A0558
   Title of the Experiment: sheduling program FCFS  using c
   Date of Creation: 06-09-2022
   Date of Execution: 06-09-2022
*/
#include<stdio.h>

int main()
{
  int bt[20],wt[20],tat[20],i,n;
  float wtavg,tatavg;
  clrscr();
  printf("\n Enter number of process...");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n enter burst time for process %d.."i);
    scanf("%d",&bt[i]);
  }
  wt[0]=wtavg=0;
  tat[0]=tatavg=bt[0];
  for(i=1;i<n;i++){
    wt[i]=wt[i-1]+bt[i-1];
    tat[i]=tat[i-1]+bt[i];
    wtavg =wtavg+wt[i];
    tatavg=tatavg+tat[i];
  }
  printf("\t PROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
  for(i=0;i<n;i++)
    printf("\n\tp%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
  printf("Average waiting time--%f",wtavg/n);
  printf("\n Average turn around time---%f",tatavg/n);
   return 0;
}
