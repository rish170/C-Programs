#include<stdio.h>

int main(){
    printf("Pattern 1:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (j==1){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 2:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i>=j){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 3:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i<=j){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 4:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i==j){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 5:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if ((i+j) == 6){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 6:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i==1 || j==1 || i==5 || j==5){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 7:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if ((i+j)%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 8:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i>=j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 9:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if ((i+j) >= 6){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 10:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i<=j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 11:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if ((i+j) >= 6){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 12:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\nPattern 13:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if ((i+j)<=6){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 14:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i==1 || j==1 || i==5 || j==5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 15:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (j==1 || i==5 || i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 16:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i==1 || j==1 || i==5 || j==5 || (i+j)==6 || i==j){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("\n\nPattern 17:\n\n");
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            if (i==1 || j==1 || i==5 || j==5 || (i+j)==6 || i==j){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

}