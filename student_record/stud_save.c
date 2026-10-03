#include"header.h"
void stud_save(ST*hptr)
{
	FILE*fs = fopen("student.dat","w");
	fprintf(fs,"------------------------\n");
	fprintf(fs,"roll_no\tname\tmark   \n");
	fprintf(fs,"------------------------\n");
	while(hptr!=NULL)
	{
		fprintf(fs,"%d\t%s\t%.2f\n",hptr->roll_no,hptr->name,hptr->mark);
		hptr=hptr->next;
	}
	fprintf(fs,"------------------------\n");
	fclose(fs);
	puts("file saved successfully");
}
