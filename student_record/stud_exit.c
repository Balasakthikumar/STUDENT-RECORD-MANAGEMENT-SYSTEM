#include"header.h"
void stud_exit(void)
{
	char op;
	puts("SUBMENU:");
	puts("S/s : Save and Exit");
	puts("E/e : Exit Without Saving");
	printf("enter your choice:");
	scanf(" %c",&op);
	switch(op)
	{
		case 'S' :
		case 's' : stud_save(hptr);
			   puts("successfully saved into file and exited");
			   return;

		case 'E' : 
		case 'e' : return;
	}
}
