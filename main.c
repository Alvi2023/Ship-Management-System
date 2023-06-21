#include <stdio.h>
#include <stdlib.h>
#include"splash.h"
#include"login.h"
#include"menu.h"


struct orde
{
    char name [50];
    int cp;
    double sp;
};



int main()
{


         FILE *bill;
          recursive(0); //use of recursion
    splash();
    system("cls");
    login();
    system("D:\\ship1.jpg");


    struct orde ord[100];
    char user[100];
    char card[20];
    char pas[15];
    char srch[1000];
    int ch,payment;
    int i=1;
    char n;
    char inv="";
    double sum =0;
    struct Ship ships[100];
    int count = 0;




    while (1){  //loop for keep stay menubar till type 3

        system("cls");
        menu();

        printf("Enter Your Choise>>\n");
        fflush(stdin);
        scanf("%d",&ch);

        if(ch==1){
        // Display the burger list

              system("cls");

        fflush(stdin);
        printf("Enter Ship name\n");
        fgets(user,100,stdin);
        user[strlen(user)-1]='\0';

       printf("Enter Capacity\n");
       scanf("%d",&ord[1].cp);

       printf("Enter Ship Speed\n");
       scanf("%lf",&ord[1].sp);
       system("cls");

       system("D:\\ship2.jpg");
       printf("Enter any key to continue\n");
       getch();

            system("cls");

          bill=fopen("bill.txt","a+");
          fprintf(bill,"%51s\n","   Ship Information");
          fprintf(bill,"%51s\n","=======================");
          fprintf(bill,"\n\n");
          fprintf(bill," Ship Name: %s\n",user);
          fprintf(bill,"\n");
          fprintf(bill," %-10s %-20s %-10s  \n","Capacity","Name","Speed");
          fprintf(bill,"-------------------------------------------------------------\n");


          fprintf(bill," %-10d %-20s %-10f \n",ord[1].cp,user,ord[1].sp);



          fprintf(bill,"--------------------------------------------------------------\n");
          fprintf(bill,"\n\n");
          printf("\t\t\t..........Successfully Saved Information..............\n");
          sleep(1);
          fclose(bill);
          system("cls");
                printf(">>... Main Menu Loading\n");
        sleep(1);


        }






    else if(ch==2) //Showing bill
    {

         system("cls");
         bill=fopen("bill.txt","r");

         if(bill==NULL){
            printf("==>!!Ship Details Deleted\n");
            fclose(bill);
            sleep(2);
         }


       else {

          printf("==>Loading Information...\n");
          sleep(2);
          system("cls");


          while(!feof(bill)){ //printing bill from file

            fgets(srch,sizeof(srch),bill);
            printf("%s",srch);

          }

          fclose(bill);
          printf("\n\n\n\n>>>>>>Enter any key to Return Main Menu>>>>>>>>\n");
          fflush(stdin);
          getchar();

         }
    }


     else if(ch==3){ //delet all bill or file

            system("cls");
            remove("bill.txt");
                printf("==> All Invoice Deleted Successfully!!\n");
            sleep(2);

         }




      else if (ch==4){
        exit_program();
         }



        else if(ch!=1||ch!=2||ch!=3||ch!=4){

        system("cls");
        printf("\n");
        printf("Invalid keyword\n\n");
        sleep(1);
       }
    }

    return 0;
}
