#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c;
    double D, root1, root2;

    printf("Enter the value of a, b & c >>> ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0){
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);

        printf("root1 = %.2lf\n", root1);
        printf("root2 = %.2lf\n", root2);
    }

    else if(D < 0){
        double real = -b/(2*a);
        double img = sqrt(-D)/(2*a);

        printf("root1 = %.2lf + %.2lfi\n", real, img);
        printf("root2 = %.2lf - %.2lfi\n", real, img);
    }

    return 0;
}