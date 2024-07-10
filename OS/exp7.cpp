#include<stdio.h>
int main()
{
	int memsize=15,choice=0;
	int psize,nopage,p[100],frameno,offset,logadd,phyadd,i;
	printf("\nYour memsize is %d",memsize);
	printf("\nEnter psize:");
	scanf("%d",&psize);
	nopage=memsize/psize;
	for(i=0;i<nopage;i++)
	{
		printf("\nEnter the frame of page %d:",i+1);
		scanf("%d",&p[i]);
	}
	do
	{
		printf("Enter the logical address=");
		scanf("%d",&logadd);
		frameno=logadd/psize;
		offset=logadd%psize;
		phyadd=(p[frameno]*psize)+offset;
		printf("\nPhisical address is:%d",phyadd);
		printf("\nDo you want to continue(0/1)?:");
		scanf("%d",&choice);
	}while(choice==1);
}
