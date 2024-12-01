#include <stdio.h>



// Function to perform selection sort
void selectionSort(int arr[], int size) {

	for(int i = 0 ; i<size-1 ; i++){

		int min_idx = i;
		for (int j = i+1 ; j<size ; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}

		int temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
}

int main(){
	int n;
	printf("No of elements in the array: ");
	scanf("%d", &n);
	int arr[n];

	printf("Enter %d elements of the array: ", n);
	for (int i = 0 ; i<n ; i++){
		scanf("%d", &arr[i]);
	}

	printf("Sorted array in ascending order: ");
	selectionSort(arr, n);
	for(int i = 0 ; i<n ; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
