#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// #include<string.h>
#include <windows.h>

int option(int opt, int a, int b){
    if(opt>=a && opt<=b){
            printf("\nChoose any option : \n");
    }
    else{
        printf("\nChoose correct option : \n");
    }
}

void end_code(){
    printf("\n\nPRESS ANY KEY TO CONTINUE.....\n");
    getch();
}

int main(){
    int opt=0,  price[5],page[5], exits=0, i=2, j=2, a,  error=0;
    char bookname[10][20], author[10][20], pname[10][20], pbook[10][15], due_date[5][1], issue_date[5][1]; 
    // system("cls");
    clrscr();
    textcolor(RED);
    printf("#####################################################################\n");
    printf("####################         WELCOME TO          ####################\n");
    printf("####################           LIBRARY           ####################\n");
    printf("####################         MANAGEMNNT          ####################\n");
    printf("####################           SYSTEM            ####################\n");
    printf("#####################################################################\n");

    printf("\n\nPRESS ANY KEY TO CONTINUE.....\n");
    getch();

    do{

        system("cls");
        printf("********************************************************************\n");
        printf("\t1. Books information\n");
        Sleep(100);
        printf("\t2. Add books information\n");
        Sleep(100);
        printf("\t3. Number of books available in library\n");
        Sleep(100);
        printf("\t4. Library patron\n");
        Sleep(100);
        printf("\t5. Rules\n");
        Sleep(100);
        printf("\t6. About System\n");
        Sleep(100);
        printf("\t0. Exit\n");
        printf("\n____________________________________________________________________\n");
        printf(" Note : Inputs should be without space...\n");
        printf("********************************************************************\n");
        option(opt, 0, 6);
        scanf("%d",&opt);
        system("cls");
        
        if(opt==1){
            printf("\n********************************************************************\n");
            printf("\nNo. 1");
            printf("\nBook name : The_Alchemist");
            printf("\nAuthor : Paulo_Coelho");
            printf("\nPrice : Rs 350/-");
            printf("\nNumber of pages : 181");
            printf("\n********************************************************************\n");
            printf("\nNo. 2");
            printf("\nBook name : Applied_Physics_for_Engineering");
            printf("\nAuthor : Bhavana_P._Butey");
            printf("\nPrice : Rs 550");
            printf("\nNumber of pages : 224/-");
            printf("\n********************************************************************\n");
            for(a=2;a<i;a++){
                printf("\nNo. %d", a+1);
                printf("\nBook name : %s", bookname[a]);
                printf("\nAuthor : %s", author[a]);
                printf("\nPrice : Rs %d/-", price[a]);
                printf("\nNumber of pages : %d",page[a]);
                printf("\n********************************************************************\n");
            }
            end_code(error);
        }

        else if(opt==2){
            printf("\nEnter book name : ");
            scanf("%s", &bookname[i]);
            printf("\nName of the author : ");
            scanf("%s", &author[i]);
            printf("\nEnter book price : Rs ");
            scanf("%d", &price[i]);
            printf("\nNumber of pages : ");
            scanf("%d", &page[i]);
                
            i++;
            end_code(error);
        }

        else if(opt==3){
            if(i==2){
                printf("Only two book is available\n");
            }

            else{
                printf("\nThere are total %d available\n", i);
            }
            end_code(error);
        }

        else if(opt==4){
            printf("\n********************************************************************\n");
            printf("\t1. Add Patron\n");
            printf("\t2. Added Patron\n");
            printf("\n********************************************************************\n");
            printf("\nChoose any option : \n");
            scanf("%d",&opt);
            system("cls");
            if(opt==1){
                printf("\nName : ");
                scanf("%s",&pname[j]);
                printf("\nIssued book : ");
                scanf("%s",&pbook[j]);
                printf("\nIssue date : ");
                scanf("%s",&issue_date[j]);
                printf("\nDue date : ");
                scanf("%s",&due_date[j]);
                j++;
            }

            else if(opt==2){
                printf("\n********************************************************************\n");
                printf("\nNo. 1");
                printf("\nName : Mayur_Sanodiya");
                printf("\nIssued book : The_Alchemist");
                printf("\nIssue date : 14/02/2022");
                printf("\nDue date : 29/02/2022");
                printf("\n********************************************************************\n");
                printf("\nNo. 2");
                printf("\nName : Nitesh_Sharma");
                printf("\nIssued book : Applied_Physics_for_Engineering");
                printf("\nIssue date : 02/02/2022");
                printf("\nDue date : 02/03/2022");
                printf("\n********************************************************************\n");
          
                for(a=2;a<j;a++){
                    printf("\nNo. %d", a+1);
                    printf("\nName : %s", pname[a]);
                    printf("\nIssued book : %s", pbook[a]);
                    printf("\nIssue date : %s", issue_date[a]);
                    printf("\nDue date : %s", due_date[a]);
                    printf("\n********************************************************************\n");
                }
            }
            else{printf("\n*** Invalid input *** \n");}
            end_code(error);
        }

        else if(opt==5){
            printf("\n\n____________________________________________*****************************____________________________________________\n\n");
            printf("1. I Card should be compulsory for entering into the library.\n");
            printf("2. Books Borrowed should be protected from RAIN, DUST, INSECT, etc.\n");
            printf("3. Do not lend your Library Books to your friends.\n");
            printf("4. Return books on time.\n");
            printf("5. Report any damage to the Librarian.\n");
            printf("6. Books removed from the shelves, if not required futher, should be kept on the book trolley/ table nearest to them.\n");
            printf("7.  Please do not try to shelve them yourself.");
            printf("\n\n____________________________________________*****************************____________________________________________");
            end_code(error);
        }
        
        else if(opt==6){
            
            printf("===================================================================================\n");
            printf("\t\t*** This system will help to manage the library ***\n\n");
            printf("\tCreted by : leader\t  => Mayank Sanodiya\n");
            printf("\t\t    main members  => Pranav Wankhede, Sarang Masurkar,\n\t\t\t\t     Yash Borikar\n");
            printf("\t\t    other members => Aditya Lichade, Tejas Ugemuge, Vishnu Devhare,\n\t\t\t\t      Harsh Jagtap, Tanmay Devdhari\n");
            printf("\n===================================================================================\n");
            end_code(error);
        }

        else if(opt==0){
            printf("#####################################################################\n");
            printf("####################         THANKS  FOR         ####################\n");
            printf("####################           VISITING          ####################\n");
            printf("####################  LIBRARY MANAGEMENT SYSTEM  ####################\n");
            printf("#####################################################################\n\n");
            printf("                                                                     -by M. H. Sanodiya\n\n");
            Sleep(1000);
            system("cls");
            exit (0); 
        }

    }while(exits==0);
    return 0;
}