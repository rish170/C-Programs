#include <stdio.h>
int main(){

	char ch;
	scanf("%c", &ch);
	((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) ? printf("Character is an alphabet") : printf("Character is not an alphabet");

    return 0;
}
