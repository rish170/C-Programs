#include<stdio.h>

int add(int m, int n, int a[m][n], int b[m][n]){
	printf("Matrix Addition:\n");
	for (int i = 0 ; i<m ; i++){
		for (int j = 0 ; j<n ; j++){
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int subtract(int m, int n, int a[m][n], int b[m][n]){
	printf("Matrix Subtraction:\n");
	for (int i=0 ; i<m ; i++){
		for (int j = 0 ; j<n ; j++){
			printf("%d ", a[i][j] - b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int transverse(int m , int n, int a[m][n]){
	printf("Transpose of the first matrix:\n");
	for (int i = 0 ; i<m ; i++){
		for (int j = 0 ; j<n ; j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}


int main(){
	int m, n, i, j;
	printf("No of rows &  columns of matrices:");
	scanf("%d %d", &m, &n);
	int a[m][n], b[m][n], c[m][n];
	
	printf("Enter the elements of the first matrix:\n");
	for (int i = 0 ; i<m ; i++){
		for (int j = 0 ; j<n ; j++){
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter the elements of the second matrix:\n");
	for (int i = 0 ; i<m ; i++){
		for (int j = 0 ; j<n ; j++){
			scanf("%d", &b[i][j]);
		}
	}

	add(m, n, a, b);
	subtract(m, n, a, b);
	transverse(m, n, a);
	
}