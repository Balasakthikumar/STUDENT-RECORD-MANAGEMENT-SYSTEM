#include"header.h"
void stud_add(ST**hptr)
{
	ST*new=(ST*)malloc(sizeof(ST));
	puts("enter the students record");
	puts("roll_no\tname\tmark");
	new->roll_no=++i;
	printf("%d",new->roll_no);
	scanf("%s%f",new->name,&new->mark);
	new->next=NULL;
	if((*hptr)==NULL)
	{
		(*hptr)=new;
	}
	else
	{
		ST*last=(*hptr);
		while(last->next!=NULL)
			last=last->next;
		last->next=new;
	}
	puts("new student record added successfully");
}
