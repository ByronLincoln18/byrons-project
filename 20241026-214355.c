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
strcpy(student1.name,"Byron");
student1.height=5.7;
strcpy(student1.reg_no ,"CT101/G/22150/24");
strcpy(student1.email ,"byronlincoln826@gmail.com");
student1.phone_no = 000150;

printf ("Enter name=%s",student1.name);
printf ("Enter height=%f",student1.height);
printf ("Enter reg_no=%s",student1.reg_no);
printf ("Enrer email=%s",student1.email);
printf ("Enter phone_no=%i", student1.phone_no);

return 0;
}