
#include<stdio.h>
#include<string.h>

float add(int a, int b);
float prod(int a, int b);
float div(int a, int b);
float subt(int a, int b);

int main(){
    char ans[] = "y";
    int ch;
    float a,b;
    printf("Calculator:\n 1. Add\n 2. Multiply\n 3. Divide\n 4. Subtract\n\n");
    
    while(strcmp(ans, "y") == 0 || strcmp(ans, "Y") == 0){
        printf("Enter Number 1: "); scanf("%f", &a);
        printf("Enter Number 2: "); scanf("%f", &b);
        printf("Enter Choice: "); scanf("%d", &ch);

        if(ch==1){
            printf("Sum = %f", add(a,b));
        }
        else if(ch==2){
            printf("Product = %f", prod(a,b));
        }
        else if(ch==3){
            printf("Quotient (a/b) = %f", div(a,b));
        }
        else if(ch==4){
            printf("Substraction = %f", subt(a,b));
        }
        else{
            printf("Invalid Option");
        }
    
        printf("\n\nContinue? (y/n): ");
        scanf("%s", ans);
    }
    printf("\nCalculator closed.");
    return 0;
}

float add(int a, int b){
    int sum = a+b;
    return sum;
}

float prod(int a, int b){
    int pro = a*b;
    return pro;
}

float div(int a, int b){
    int quo = a/b;
    return quo;
}

float subt(int a, int b){
    int sub = a-b;
    return sub;
}