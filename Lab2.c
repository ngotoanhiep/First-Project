//Lab2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char ** argv) {
    int i = 1;
    int S = 0;
    int n = atoi(argv[S]);
    //n = atoi(argv);
    if (argc <= 2){
        printf("\n./main.out ");
        scanf("%d", &n);
        for(i = 0; i <= n; i++) {
            S = S + i;
        }
        printf("S = %d\n", S);
    }else{
        printf("There are so many arguments!\n");
    }
        /*printf("\n./main.out ");
        for(i = 1; i <= n; i++){
            S = S + i;
        }
        printf("S = \n" + S);
    }else{
        printf("There are so many arguments!\n");
    }
    return 0;*/
    /*do {
        printf("\n./main.out ");
        scanf("%d", &n);
    } while(n <= 0);
    for(i = 0; i <= n; i++) {
        s = s + i;
    }*/
    //printf("S = %d\n", s);
}

