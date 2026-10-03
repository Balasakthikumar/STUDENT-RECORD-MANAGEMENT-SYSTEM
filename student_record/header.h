#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern int i,count,count1;
typedef struct student
{
        int roll_no;
        char name[20];
        float mark;
        struct student*next;
}ST;
extern ST*hptr;
void stud_add(ST**);
void stud_del(ST**);
void stud_show(ST*);
void stud_mod(ST**);
void stud_sort(ST*);
void stud_save(ST*);
void stud_exit(void);

