#include <stdio.h>

int main() {


    int login;
    int password;


    int login_user;
    int password_user;

    printf("Crea login (in numeri): ");
    scanf("%d", &login);
    printf("Crea password (in numeri): ");
    scanf("%d", &password);

    printf("login e password e' stato creato! \n");

    printf("Inserire login per entrare nel sistema: ");
    scanf("%d", &login_user);
    printf("inserire password: ");
    scanf("%d", &password_user);

    if (login == login_user && password == password_user) {

        printf("Benvenuto utente %d!", login_user);
        printf("MENU CALCOLATORE: \n");

        int menu_number;

        printf("Inserire 1 per + \n");
        printf("Inserire 2 per - \n");
        printf("Inserire 3 per * \n");
        printf("Inserire 4 per / \n");


        switch (menu_number) {
            //case 1:
        }



    }

    else {
        printf("ERROR USER WAS NOT FOUNDED! \n");
    }



}
