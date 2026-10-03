#include"header.h"
int i=0,count=0,count1=0;
ST*hptr=NULL;
int main()
{
        char op,ch,ch1,line[100];

	FILE*fs = fopen("student.dat","r");
	if(fs!=NULL)
	{
		while(fgets(line,sizeof(line),fs)!=NULL)
		{
			ST*new = (ST*)malloc(sizeof(ST));
			if(fscanf(fs,"%d%s%f",&new->roll_no,new->name,&new->mark)==3)
			{
				new->next=NULL;
				if(hptr==NULL)
					hptr=new;
				else
				{
					ST*last=hptr;
					while(last->next!=NULL)
						last=last->next;
					last->next=new;
				}
				count1++;
			}
			else
			{
				free(new);
			}
		}
	}
	count=count1;
	i=count1;
	fclose(fs);

	while(1)
	{
        	puts("***student record menu***");
        	puts("-------------------------");
        	puts("  A/a : Add New Record   ");
        	puts("  D/d : Delete a Record  ");
   	    	puts("  S/s : Show the List    ");
       		puts("  M/m : Modify a Record  ");
        	puts("  V/v : Save             ");
       		puts("  T/t : Sort the List    ");
       		puts("  E/e : Exit             ");
        	puts("-------------------------");

                puts("enter your choice:");
                scanf(" %c",&ch);
                switch(ch)
                {
                        case 'A' :
                        case 'a' : do{
                                        stud_add(&hptr);
                                        count++;
                                        puts("do u want more data to add (y/n)");
                                        scanf(" %c",&op);
                                   }
                                   while(op=='y');
        			   puts("-------------------------");
                                   break;
                        case 'D' :
                        case 'd' : do{
                                         stud_del(&hptr);
					 if(count>0)
					 	--count;
                                         puts("do u want to delete more students record (y/n)");
                                         scanf(" %c",&op);
                                   }
                                   while(op=='y');
        			   puts("-------------------------");
                                   break;
                        case 'S' : 
                        case 's' : stud_show(hptr);
        			   puts("-------------------------");
                                   break;
                        case 'M' :
                        case 'm' : stud_mod(&hptr);
        			   puts("-------------------------");
                                   break;
                        case 'V' : 
                        case 'v' : stud_save(hptr);
        			   puts("-------------------------");
                                   break;
                        case 'T' : 
                        case 't' : stud_sort(hptr);  
        			   puts("-------------------------");
                                   break;
                        case 'E' : 
                        case 'e' : stud_exit();
        			   puts("-------------------------");
                                   return 0;
                }
        }
}

