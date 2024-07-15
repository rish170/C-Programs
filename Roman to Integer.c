#include<stdio.h>
#include<string.h>

int romanToInt(char *s);

int main(){
    printf("%d", romanToInt("MCMXCIV"));
    return 0;
}

int romanToInt(char *s) {
    char *romanArr = "IVXLCDM";
    int intArr[] = {1, 5, 10, 50, 100, 500, 1000};
    int IntNum = 0;

    for (int i = (strlen(s)-1); i >= 0; i--){
        for (int j = 0; j < strlen(romanArr); j++){
            if (s[i] == romanArr[j]){
                if (intArr[j] > IntNum){
                    IntNum += intArr[j];
                }
                else if((s[i] == s[i+1]) == 1 || (s[i] == s[i-1]) == 1){
                    IntNum += 1;
                }
                else if(intArr[j] < IntNum){
                    IntNum -= intArr[j];
                }
            }
        }
    }
    return IntNum;
}