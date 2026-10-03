#include"header.h"
void stud_mod(ST**hptr)
{
	char op,ch,name1[20];
	int roll,nroll,flag=0;
	float per,per1;
	ST*temp=(*hptr);
	ST*temp1=(*hptr);
	puts("SEARCH RECORD:");
	puts("R/r : Roll Number");
	puts("N/n : Name");
	puts("P/p : Percentage");
	printf("Enter your choice:");
	scanf(" %c",&op);
	switch(op)
	{
		case 'R' :
		case 'r' : printf("enter the roll num to be modify:");
			   scanf("%d",&roll);
			   while(temp!=NULL)
			   {
				   if(temp->roll_no==roll)
				   {
					   printf("enter new roll num:");
					   scanf("%d",&nroll);
					   temp->roll_no=nroll;
				   }
				   temp=temp->next;
			   }
			   puts("old roll num modified as new one");
			   break;

		case 'N' :
		case 'n' : printf("enter the name to be modify:");
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
				        puts("MODIFY FIELD:");
			   	        puts("N/n : Name");
			 	        puts("P/p : Percentage");
			             	printf("enter your choice:");
			             	scanf(" %c",&ch);
			                switch(ch)
			   	        {
				  	  case 'P' :
				   	  case 'p' : printf("enter the new mark :");
					 	     scanf("%f",&per1);
					             temp1->mark=per1;
						     puts("old mark modified as new one");
					             break;

				          case 'N' :
					  case 'n' : printf("enter the new name:");
						     scanf("%s",name1);
						     strcpy(temp1->name,name1);
						     puts("old name modified as new one");
						     break;  
			                }
			            }
			   	    temp1=temp1->next;
			        }
			   }
			   else
				   puts("name not in the list:");
			   break;

		case 'P' :
		case 'p' : printf("enter the mark to be modify:");
			   scanf("%f",&per);
			   puts("roll\tname\tmark");
			   while(temp!=NULL)
			   {
				   if(temp->mark==per)
				   {
					   printf("%d\t%s\t%.2f\n",temp->roll_no,temp->name,temp->mark);
					   flag=1;
				   }
				   temp=temp->next;
			   }
			   if(flag==1)
			   {
			      printf("enter the roll num of the respective mark:");
			      scanf("%d",&roll);
			      while(temp1!=NULL)
			      {
			   	 if(temp1->roll_no==roll)
				 {
				     puts("MODIFY FIELD:");
			   	     puts("N/n : Name");
			 	     puts("P/p : Percentage");
			             printf("enter your choice:");
			             scanf(" %c",&ch);
			             switch(ch)
			   	     {
				  	 case 'P' :
				   	 case 'p' : printf("enter the new mark:");
					 	    scanf("%f",&per1);
					            temp1->mark=per1;
						    puts("old mark modified as new one");
					            break;

				         case 'N' :
					 case 'n' : printf("enter the new name:");
						    scanf("%s",name1);
						    strcpy(temp1->name,name1);
						    puts("old name modified as new one");
						    break;  
			             }
			         }
				 temp1=temp1->next;
			      }
			   }
			   else
				   puts("mark not in the list");
			   break;
	}

}
