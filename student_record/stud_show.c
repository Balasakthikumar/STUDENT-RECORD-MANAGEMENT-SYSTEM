#include"header.h"
void stud_show(ST*hptr)
{
	if(hptr==NULL)
	{
		puts("list is empty");
		return;
	}
	puts("|roll\tname\tmark  |");
	puts("--------------------");
	while(hptr!=NULL)
	{
		printf("|%d\t%s\t%.2f|\n",hptr->roll_no,hptr->name,hptr->mark);
		hptr=hptr->next;
	}
	puts("--------------------");

}
