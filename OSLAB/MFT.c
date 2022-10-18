/* Name Of the Candidate: S.Faraz
   Roll No: 204G1A0558
   Title of the Experiment: MEMORY MANAGEMENT WITH FIXED PARTITIONING TECHNIQUE(MFT):
   Date of Creation: 18-10-2022
   Date of Execution: 18-10-2022
*/






#include<stdio.h>
//#include<conio.h>
 void main()
{
int ms, bs, nob, ef,n,
mp[10],tif=0; int i,p=0;
//clrscr();
printf("Enter the total memory available (in Bytes) -- ");
scanf("%d",&ms);
printf("Enter the block size (in Bytes) -- ");
scanf("%d", &bs);
nob=ms/bs;
ef=ms - nob*bs;
printf("\nEnter the number of processes -- ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter memory required for process %d (in Bytes)-- ",i+1);
scanf("%d",&mp[i]);
}
printf("\nNo. of Blocks available in memory--%d",nob);
printf("\nPROCESS\tMEMORYREQUIRED\tALLOCATED\tINTERNALFRAGME");
for(i=0;i<n && p<nob;i++)
{
printf("\n %d\t\t%d",i+1,mp[i]);
if(mp[i] > bs)
printf("\t\tNO\t\t---");
else
{
printf("\t\tYES\t%d",bs-mp[i]);
tif = tif + bs-mp[i];

p++;
}
}
if(i<n)
printf("\nMemory is Full, Remaining Processes cannotb be accom");
printf("\nTotal Internal Fragmentation is %d",tif);
printf("\nTotal External Fragmentation is %d",ef);

}
