#include <stdio.h>
#include <conio.h>
#include <windows.h>

int start(){
        printf("                                                                        *\n");
        printf("                                                                                                                   *\n");
        printf("            *                          *                                                             *                         0000000000       *\n");
        printf("                                                                                                                             00000000000000                                       *\n");
        printf("                                                                                                                            0000000000000000\n");
        printf("                                *                           *                                                       *       0000000000000000                             *                         *\n");
        printf("                                                                                             *                              0000000000000000\n");
        printf("                                                                                                                             00000000000000\n");
        printf("                                         *                                    *                                                0000000000                                     *\n");
        printf("*                                                                                                                                                  *\n");
        printf("                                                                                                            *\n");
        printf("           *                   A\n");
        printf("                              AAA                                                  *                                                             *\n");
        printf("                             AAAAA\n");
        printf("                            AAAAAAA    *\n");
        printf("                             AAAAA\n");
        printf("      *                     AAAAAAA                                                                                                                                  *\n");
        printf("                           AAAAAAAAA\n");
        printf("                          AAAAAAAAAAA\n");
        printf("                           AAAAAAAAA\n");
        printf("                          AAAAAAAAAAA\n");
        printf("                         AAAAAAAAAAAAA\n");
        printf("                        AAAAAAAAAAAAAAA\n");
        printf("                         AAAAAAAAAAAAA\n");
        printf("                        AAAAAAAAAAAAAAA\n");
        printf("                       AAAAAAAAAAAAAAAAA\n");
        printf("                      AAAAAAAAAAAAAAAAAAA\n");
        printf("                       AAAAAAAAAAAAAAAAA\n");
        printf("                      AAAAAAAAAAAAAAAAAAA");
}
int air(int b){
    int a;

    for(a=1;a<=b;a++){
        printf(" ");
    }
}
int roadspace(int b){
    int a;

    for(a=1;a<b;a++){
        printf("_");
    }
}

int main(){
    int a, b=0, i=0;
    float distance=10, speed=0.1;
    
    while(i==0){
    for(a=1;a<distance;a++){
        system("cls");
        start();
        air(a);
        printf("           ____________________________    |\n");
        printf("                     AAAAAAAAAAAAAAAAAAAAA");air(a);
        printf(" ~     _ /   ___/~~~    /-------------\\   |\n");
        printf("                    AAAAAAAAAAAAAAAAAAAAAAA");air(a);
        printf("~~  _|_/_______________|______|____|__\\__|________,_\n");
        printf("                             HHHHH");air(a);
        printf("         ~~~ \\__________________|____-_|-______|_____________)\n");
        printf("                             HHHHH");air(a);
        printf("              <____//   \\|______|______|_______|_//   \\)_____>\n");
        printf("_____________________________HHHHH"); roadspace(a);
        printf("_____________________\\___/_________________________\\___/");
        for(int x=0; x<=(distance+10)-a;x++){
            printf("_");
        }
        Sleep(0.1);
        } 
        system("cls");
    }
        getch();
    return 0;
}