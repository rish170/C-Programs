#include <stdio.h>


int binarySearch(int arr[], int size, int key) {
	int st = 0, end = size - 1;

	while (st<=end){
        int mid = st + (end - st) / 2;

        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
	return -1;
}


void main()
{
	int n, key;

	printf ("No of  elements in the array: ");
	scanf ("%d",&n);
    
	int arr[n];

	printf ("Enter %d elements in sorted order: ",n);
	for (int i=0; i<n; i++){
		scanf ("%d",&arr[i]);
	}

	printf ("Enter the element to search: ");
	scanf ("%d",&key);

	int result = binarySearch(arr, n, key);

	if (result != -1){
		printf ("Element %d found at index %d\n",key,result);
	}
	else{
		printf ("Element %d not found in the array\n",key);
	}

    return 0;
}