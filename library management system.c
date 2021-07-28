
#include<stdio.h>
#include<windows.h>

void admin(){
   printf("welcome admin \n");
   printf(" \t\t\t\t1. add a  staff member \n");
   printf(" \t\t\t\t2. edit a staff member  \n");
   printf(" \t\t\t\t3. delete a staff member  \n");
}
void staff(){
    int selecting;

                printf("welcome staff \n");
                printf(" 1.add a book \n");
                printf(" 2.edit a book \n");
                printf(" 3.delete a book \n");
                printf(" 4.add a user \n");
                printf(" 5.edit a user  \n");
                printf(" 6.delete a user  \n");
                printf(" 7.allow a user to borrow a book  \n");
                printf(" 8.mark a returned book  \n");
                printf(" 9. give a fine to a user when the book is returned late  \n");
                printf(" 10.allow a book to be reserved  \n");

    printf("choose one of the above \n");
    scanf("%d",&selecting);
}
void user()
{
    char fname[10];
    char sname[10];
    char lname[10];
    int id;
    
    printf(" welcome user \n");
                    printf("enter your firstname \n ");
                    scanf("%s",&fname);
                    printf("enter your secondname \n ");
                    scanf("%s",&sname);
                    printf("enter your lastname \n ");
                    scanf("%s",&lname);
                    printf("your name is %s%s%s \n",&fname,sname,lname);
                    printf(" enter your member id  \n ");
                    scanf("%d",&id);

}
void close(){
    printf(" sorry ,  try again \n");
    Sleep(30000);
    exit(0);
}


int main(void)
{
  int choose,password;
  system ("color 2");
  do{
 printf("\t\t\t\t\t WELCOME TO COUNTY LIBRARY MANAGEMENT SYSTEM  \n");
         printf("  *-*-*-* 1.choose 1 for admin*-*-*-*-* \n");
         printf("  *-*-*-* 2.choose 2 for staff*-*-*-*-* \n");
         printf("  *-*-*-* 3.choose 3 for user *-*-*-*-* \n");
         printf("  *-*-*-* 4.choose 4 to  exit *-*-*-*-* \n");

         scanf("%d",&choose);
  }while(choose <1 || choose >4);
   /* printf("welcome \n");
    printf(" enter the  password for your specific position  \n");
    scanf("%d", &password);
    if (password == 1234)
    {
        printf("YOU HAVE SUCCEFULLY LOGGED IN AS AN ADMIN  \n");
    }
    else if (password == 2345)
    {
        printf("WELCOME YOU HAVE LOGGED IN AS A USER \n");
    }
    
    else if (password == 7896)
    {
        printf("WELCOME YOU HAVE LOGGED IN AS A STAFF \n");
    } 
    */
    if(choose==1)
    {
        admin();
    }
    else if(choose==2)
    {
        staff();
    }
    else if(choose==3)
    {
        user();
    }
    else (choose=4);
    {
        close();
    }
    
}  
         




