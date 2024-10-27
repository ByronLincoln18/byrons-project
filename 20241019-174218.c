#include<stdio.h>
#include<string.h>
struct students{
char name[20];
char email[20];
char reg_no[15];
int phone_no;
float height;
}student1 , student2 , student3;
int main(){
printf ("Enter name\n");
scanf ("%s",&student1.name);
printf("Enter height \n");
scanf ("%f",&student1.height);
printf ("Enter  reg_no\n");
scanf ("%s",&student1.reg_no);
printf ( "Enter email\n");
scanf ("%s",&student1.email);
printf( "Enter phone_no\n");
scanf ("%i",&student1.phone_no);
printf ("Enter name=%s",student1.name);
printf ("Enter height=%f",student1.height);
printf ("Enter reg_no=%s",student1.reg_no);
printf ("Enrer email=%s",student1.email);
printf ("Enter phone_no=%i", student1.phone_no);

return 0;
}