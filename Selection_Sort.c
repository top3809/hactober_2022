// libraries included
#include <stdio.h>

// main function for sorting
void selection(int arr[], int n){
	int i, j, small;
	for (i = 0; i < n - 1; i++){
		small = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[small])
				small = j;
		int temp = arr[small];
		arr[small] = arr[i];
		arr[i] = temp;
	}
}

int findPos(int arr[], int n, int ele){
	for(int i = 0; i < n; i++) {
		if(arr[i] == ele)
			return i+1;
	}
	return -1;
}

// function to print the array
void printArr(int a[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}

// main function
int main(){
	int a[] = { 12, 31, 25, 8, 32, 17 };
	int n = sizeof(a) / sizeof(a[0]);

	printf("Before sorting array elements are - \n");
	printArr(a, n);

	selection(a, n);

	printf("\nAfter sorting array elements are - \n");
	printArr(a, n);

	return 0;
}
