#include"header.h"
void stud_del(ST**hptr)
{
        char op1,name1[20];
        int roll,flag=0;
        ST*temp=(*hptr);
	ST*temp1=(*hptr),*prv;
        puts("SUBMENU:");
        puts("R/r : Delete using Roll Number");
        puts("N/n : Delete using Name");
        printf("enter your choice:");
        scanf(" %c",&op1);
        switch(op1)
        {
                case 'R' :
                case 'r' : printf("enter the roll num to be delete:");
                           scanf("%d",&roll);
                           while(temp!=NULL)
                           {
                                   if(temp->roll_no==roll)
                                   {
                                           if(temp==(*hptr))
                                                   (*hptr)=temp->next;
                                           else
                                                   prv->next=temp->next;

                                           free(temp);
                                           temp=NULL;
					   flag=1;
			  		   puts("entered roll num deleted successfully");
                            	           return;
                                   }
                                   prv=temp;
                                   temp=temp->next;
			   }
			   if(flag==0)
			  	puts("entered roll num not in the list");
			   break;

                case 'N' :
                case 'n' : printf("enter the name:");
                           scanf("%s",name1);
			   puts("roll\tname\tmark");
                           while(temp!=NULL)
                           {
                                   if(strcmp(temp->name,name1)==0)
                                   {
                                           printf("%d\t%s\t%.2f\n",temp->roll_no,temp->name,temp->mark);
					   flag=1;
                                   }
                                   temp=temp->next;
                           }
			   if(flag==1)
			   {
                              printf("enter the roll num of the respective name:");
                              scanf("%d",&roll);
                              while(temp1!=NULL)
                              {
                                   if(temp1->roll_no==roll)
                                   {
                                           if(temp1==(*hptr))
                                                   (*hptr)=temp1->next;
                                           else
                                                   prv->next=temp1->next;

                                           free(temp1);
                                           temp1=NULL;
			   		   puts("entered name deleted successfully");
                                           return;
                                   }
                                   prv=temp1;
                                   temp1=temp1->next;
                              }
			   }
			   else{
				puts("Given name not in the list");
			   }
                           break;


        }
}

