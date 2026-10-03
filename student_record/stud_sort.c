#include"header.h"
void stud_sort(ST*hptr)
{
	ST**p=(ST**)malloc(count*sizeof(ST*));
	for(int j=0;j<count;j++)
	{
		p[j]=hptr;
		hptr=hptr->next;
	}
	int flag=0;
	ST*temp;
	puts("SUBMENU:");
	puts("N/n : Sort by Name");
	puts("P/p : Sort by Percentage");
	char op;
	printf("enter your choice:");
	scanf(" %c",&op);
	switch(op)
	{
		case 'N' :
		case 'n' : for(int j=0;j<count-1;j++)
			   {
				   for(int k=j+1;k<count;k++)
				   {
					   if(strcmp(p[j]->name,p[k]->name)>0)
					   {
						temp=p[j];
						p[j]=p[k];
						p[k]=temp;
					   }
				   }
			   }
			   flag=1;
			   break;

		case 'P' :
		case 'p' : for(int j=0;j<count-1;j++)
			   {
				   for(int k=j+1;k<count;k++)
				   {
					   if(p[j]->mark<p[k]->mark)
					   {
						temp=p[j];
						p[j]=p[k];
						p[k]=temp;
					   }
				   }
			   }
			   flag=0;
			   break;
	}
	puts("-----------------------");
	puts("|roll\tname\tmark     |");
	puts("-----------------------");
	for(int j=0;j<count;j++)
	{
		printf("|%d\t%s\t%.2f|\n",p[j]->roll_no,p[j]->name,p[j]->mark);
	}
	puts("------------------------");
	if(flag==1)
		puts("name sorted successfully");
	else
		puts("mark sorted successfully");

}
