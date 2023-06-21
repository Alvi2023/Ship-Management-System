
#include<stdio.h>

struct Ship {
    int cap;
    char name[100];
    float speed;
};


void menu (void)
{
    printf("==> 1. Add Ship\n");
    printf("==> 2. Show All Ship\n");
    printf("==> 3. Delet All Ship\n");
    printf("==> 4. Exit\n");
}



void exit_program(void)
 {
     system("cls");
    printf("                ...Thank You For Using Our System...\n");
    sleep(1);
    exit(0); // Terminate the program with a status code of 0
 }
