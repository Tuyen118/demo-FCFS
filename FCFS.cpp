#include"conio.h"
#include"stdio.h"
#define MAX 50
void main()
{
	int i,n,bt[MAX],at[MAX],tat[MAX],wt[MAX],temp[MAX];
	float awt,atat;
	printf(" ENTER THE NUMBER OF PROCESS : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("ENTER of BURST TIME: ");
			scanf("%d",&bt[i]); }
	for(i=0;i<n;i++)
		{
			printf("ENTER ARRIVAL TIME: ");
			scanf("%d",&at[i]); }
	printf(" \nprocess\t\tbursttime\t\tarrivaltime\t\twaitingtime\t\tturn around time\n");
	awt=0;
	atat=0;
	temp[0]=0;
	for(i=0;i<n;i++)
	{
		
		wt[i]=0;
		tat[i]=0;
		temp[i+1]=temp[i]+bt[i];
		wt[i]=temp[i]-at[i];
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("average waiting time : %2f\n",awt);
	printf("average turn around time : %2f",atat);
	getch();
}




