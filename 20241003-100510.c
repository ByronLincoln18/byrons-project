// program to solve calculation involving books
#include <stdio.h>
int main ()
{
int bookID, dueDate, returnDate, daysOverdue, fineRate;
int fineAmount ;
printf ("Enter Book ID\n");
scanf ("%d", bookID);
printf ("Enter Due Date\n");
scanf("%d", dueDate);
printf (" Enter Return Date\n");
scanf("%d",returnDate);
daysOverdue=returnDate - dueDate;
if(daysOverdue<=7||daysOverdue>=0){
fineRate=20;}
else if ( daysOverdue>=8||daysOverdue <=14){
fineRate=50;
}
else if ( daysOverdue>=15){
fineRate=100;}
fineAmount= daysOverdue *fineRate ;
printf ("Book ID=%d",bookID);
printf ("Due Date=%d",dueDate);
printf ("Return Date=%d",returnDate);
printf("Fine Rate=%d",daysOverdue);
printf ("Fine Rate=%d",fineRate);
printf ("Total fine Amount =%d",fineAmount);
return 0;
}