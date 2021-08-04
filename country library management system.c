/*
 author:bilal ahmed mohamed 
 compiler :mingW
 date 29-07-2021
project:library management system
   */



#include<stdio.h>
#include<windows.h>
int choice;

// functions prototypes
void admin();
void add_staff();
void edit_staff();
void delete_staff();
void staff();
void add_book();
void user();
void close();
void edit_book();
void delete_book();
void add_new_user();
void edit_user();
void delete_user();
void borrow_book();
void returned_book();
void book_reserve();

void admin(){  // admin function
    int option;
    int password;

    printf("enter your passcode \n");
    scanf("%d",&password);
    if(password==1234)
    {
        printf("welcome \n");
    }  
   printf("********************************************************************************************** \n");
          printf("******************************************************************************\n");
                  printf("*****************************************************************\n");

          printf(" \t\t\t\t********|||||||||    1. ADD A STAFF MEMBER   ||||||******** \n");
          printf(" \t\t\t\t********|||||||||    2. EDIT A STAFF MEMBER  ||||||********  \n");
         printf(" \t\t\t\t********|||||||||    3. DELETE A STAFF MEMBER  |||||*******  \n");

    printf("********************************************************************************************** \n");
           printf("******************************************************************************\n");
                 printf("*****************************************************************\n");
    printf(" enter the number you need \n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
          add_staff();  
        break;
         case 2:
         edit_staff(); 
        break;
         case 3:
         delete_staff();
        break;
        default:
        printf(" sorry try again \n");

    }
         printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");

}
 void add_staff()  // function for adding staff
 {
     
  char staff1fname;
  char staff1sname;
  char staff1lname;
   int x,y;
  int staff1id;
  int staff1;

   FILE *pfile = fopen("staff.txt" ,  "w") ;
      printf("How many users are u adding  : \n") ;
            scanf("%d", &x) ;
             for (y = 0 ; y < x ; y++)
        {         
        printf(" enter your firstname  \n");
        scanf("%s",&staff1fname);
        printf(" enter your second   \n");
        scanf("%s",&staff1sname);
        printf("enter your third name \n");
        scanf("%s",&staff1lname);
        printf(" your library id  \n");
        scanf("%d",&staff1id);
        printf(" you have added the new staff \n");
        }

    fprintf(pfile,"%s", staff1fname);
    fprintf(pfile,"%s", staff1sname);
    fprintf(pfile,"%s", staff1lname);
    fprintf(pfile,"%s", staff1id);
        
        fclose(pfile) ;

    
          printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
 }
 void edit_staff()  // function for editing staff
 {
     printf(" i really dont see the need of this line \n");

     printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
 }
 void delete_staff()   // function for deleting staff
 {
     int staffname;
     printf("enter the staff name you want to delete  \n");
     scanf("%d",&staffname);

          printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
     
 }
void staff(){   // function for staff
    int choice;
    int password;

    printf("enter your passcode \n");
    scanf("%d",&password);
    if(password==5678)
    {
        printf("WELCOME STAFF \n");
    }
   
                printf("********************************* \n");
                printf("welcome staff \n");
                printf(" 1.add a new  book \n");
                printf(" 2.edit a book \n");
                printf(" 3.delete a book \n");
                printf(" 4.add a  new user \n");
                printf(" 5.edit a user  \n");
                printf(" 6.delete a user  \n");
                printf(" 7.allow a user to borrow a book  \n");
                printf(" 8.mark a returned book  \n");
                printf(" 9. give a fine to a user when the book is returned late  \n");
                printf(" 10.allow a book to be reserved  \n");
                printf(" *****************************************\n");

    printf("choose one of the above \n");
    scanf("%d",&choice);
     switch(choice)
    {
       case 1:
       add_book();
       break;
        case 2:
       edit_book();
       break;
        case 3:
       delete_book();
       break;
        case 4:
       add_new_user();
       break;
        case 5:
       edit_user();
       break;
        case 6:
       delete_user();
       break;
        case 7:
       borrow_book();
       break;
        case 8:
       returned_book();
       break;
        case 9:
       printf(" you chose finiing a user  \n");
       break;
        case 10:
       book_reserve();
       break;
       default:
       printf(" try again \n");

     }
       
        printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
   
}
void add_book()   // function for adding a book
{   
    char bookname[20];
   int publisher,bookid;
   printf(" enter the book name \n");
   scanf("%s",&bookname);
   printf(" type the book id  \n");
   scanf("%d",&bookid);
   printf(" key the publisher \n");
   scanf("%d",&publisher);
   printf("congarts on adding the book \n");
   
      printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");

}
void edit_book()    // function for editing a book
{
    char editname[20];
    int id;
    printf("enter in the name of the book \n");
    scanf("%s",&editname);
    printf("you can edit the book now \n");
    printf(" key the new id to edit the book: \n");
    scanf("%d",&id);
    printf("you have edited the book thank you  \n");


    printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
}
void delete_book()  // function to delete the book
{
    char deletebook[20];
    int publisher,id;
    
   printf(" enter the book name \n");
   scanf("%s",&deletebook);
   printf(" place the id  \n");
   scanf("%d",&id);
   printf("type  the publisher \n");
   scanf("%d",&publisher);
   printf(" your book is deleted \n");

       printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
   
}
void add_new_user() //function to add a new user
{     char user1fname;
      char user1sname;
      char user1lname;
      char user1id;
      int id,x,y;
     int user1;
  
     FILE *pfile = fopen("users.txt" ,  "w") ;
      printf("How many users are u adding  : \n") ;
            scanf("%d", &x) ;
             for (y = 0 ; y < x ; y++)
        {         
        printf(" enter your firstname  \n");
        scanf("%s",&user1fname);
        printf(" enter your second   \n");
        scanf("%s",&user1sname);
        printf("enter your third name \n");
        scanf("%s",&user1lname);
        printf(" your library id  \n");
        scanf("%d",&user1id);
        printf(" yoh have added the new user \n");
        }

    fprintf(pfile,"%s", user1fname);
    fprintf(pfile,"%s", user1sname);
    fprintf(pfile,"%s", user1lname);
    fprintf(pfile,"%s", user1id);
        
        fclose(pfile) ;


        printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
       
   
}
void edit_user() // function to edit the user
 {
    printf(" edit a user \n");
 }
void  delete_user()  // function to delete a user
 {
     char ffname[20];
     int number;
    printf(" enter your name \n");
    scanf("%s",&ffname);
    printf("  typo  your id: \n");
    scanf("%d",&number);
    printf("yoo have deleted the user \n");

    printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
   
 }
void borrow_book()  //function to borrow a book
 {
     char fname[10];
    char sname[10];
    char lname[10];
    int id,daysborrowed;
   
    printf(" enter your firstname  \n");
   scanf("%s",&fname);
   printf(" enter your second   \n");
   scanf("%s",&sname);
   printf("enter your third name \n");
   scanf("%s",&lname);
   printf(" your library id:  \n");
   scanf("%d",&id);
   printf(" how many days do want to borrow for? \n");
   scanf("%d",&daysborrowed);

   if( daysborrowed>=15)
   {
       printf("you have extended your time and you are being fined \n");
       printf(" say how you will pay the fine in the shortest period time  \n");

   }
   else
   {
       printf("you have returned the book before your deadline \n");
   }


      printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
   
  }

void user()  // user function
{
    char fname[10];
    char sname[10];
    char lname[10];
    int id;
    int menu;
    int password;  
    printf(" WELCOME USER  \n");
                    printf("enter your firstname \n ");
                    scanf("%s",&fname);
                    printf("enter your secondname \n ");
                    scanf("%s",&sname);
                    printf("enter your lastname \n ");
                    scanf("%s",&lname);
                    printf("your name is %s%s%s \n",&fname,&sname,&lname);
                    printf(" enter your member id  \n ");
                    scanf("%d",&id);
                    printf("  welcome  to your account  %s %s %s n   \n",&fname,sname,lname);


                    printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");

}
void returned_book()   // function to retun a book
{
    char fname[10];
    char sname[10];
    char lname[10];
    int id,bookid;
    
                   printf("enter your firstname \n ");
                    scanf("%s",&fname);
                    printf("enter your secondname \n ");
                    scanf("%s",&sname);
                    printf("enter your lastname \n ");
                    scanf("%s",&lname);
                    printf("your name is %s%s%s \n",&fname,sname,lname);
                    printf(" enter your member id  \n ");
                    scanf("%d",&id);
                    printf(" welcome %s",fname,sname,lname);
                    printf(" enter the book id \n");
                    scanf("%d",&bookid);
                    printf(" you have returned the book thanks for cooperating \n");

}
void  book_reserve()  // function to reserve a book
{
     char fname[10];
    char sname[10];
    char lname[10];
    int id,bookid,reserved;
    
                   printf("enter your firstname \n ");
                    scanf("%s",&fname);
                    printf("enter your secondname \n ");
                    scanf("%s",&sname);
                    printf("enter your lastname \n ");
                    scanf("%s",&lname);
                    printf("your name is %s%s%s \n",&fname,sname,lname);
                    printf(" enter your member id  \n ");
                    scanf("%d",&id);
                    printf(" welcome %s",fname,sname,lname);
                    printf(" enter the book id \n");
                    scanf("%d",&bookid);
                    printf(" which book do you want it to be reserved  \n");
                    scanf("%d",&reserved);   
                    printf("your book has been reserved will notify you when its read to be picked \n");


                    printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");

}
void close(){
   //printf(" sorry ,  try again \n");
    Sleep(30000);
    exit(0);

    printf(" THANK YOU FOR USING MY PROGRAM, BILAL \n");
}
int main(void)  // main function
{
  int choose;
   int selecting;
   
  system ("color 3");
  
  do{
      printf("************************************************************************************\n");
      printf("************************************************************************************\n");
      printf("************************************************************************************\n");
                    printf("\t\t\t\t\t WELCOME TO COUNTY LIBRARY MANAGEMENT SYSTEM  \n");
                    printf("  *|*|*|*   1.choose 1 for admin*-*-*-*-* \n");
                    printf("  *|*|*|*   2.choose 2 for staff*-*-*-*-* \n");
                    printf("  *|*|*|*   3.choose 3 for user *-*-*-*-* \n");
                    printf("  *|*|*| *  4.choose 4 to  exit *-*-*-*-* \n");
      printf("************************************************************************************\n");
      printf("************************************************************************************\n");
      printf("************************************************************************************\n");

         scanf("%d",&choose);
  }while(choose <1 || choose >4);
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
         



