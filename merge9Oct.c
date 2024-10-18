#include<stdio.h>

void sortArray(int arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[]) {
    int i;
    for (i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }
    for (i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }
}
int main(){
	int i,j,n,k,temp;
	int arr1[100];
	int arr2[100];
	printf("Enter the Size of First Array :");
	scanf("%d",&n);
	printf("Enter the Elements in  First Array :");
	for(i=0;i<n;i++){
	        scanf("%d", &arr1[i]);
	}
	printf("First Unsorted Array: ");
	for(i=0;i<n;i++){
	        printf("%d \t", arr1[i]);
	}
	
	for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++){
	                if(arr1[i] > arr1[j]){
	                        temp = arr1[i];
	                        arr1[i]=arr1[j];
	                        arr1[j]=temp;
	               }
	        }
        }
        printf("\nSorted Array:  ");
        for(i=0; i<n; i++){
	        printf("%d \t",arr1[i]);
	}


	
	printf("\nEnter the Size of Second Array :\n");
	scanf("%d",&k);
        printf("Enter the Elements in  Second Array :\n");
	for(i=0;i<k;i++){
	        scanf("%d", &arr2[i]);
	}
	printf("Second Unsorted Array: \n");
	for(i=0;i<k;i++){
	        printf("%d \t", arr2[i]);
	}
	
	for(i=0;i<k;i++){
	        for(j=i+1;j<k;j++){
	                if(arr2[i] > arr2[j]){
	                        temp = arr2[i];
	                        arr2[i]=arr2[j];
	                        arr2[j]=temp;
	               }
	        }
        }
        printf("\nSecond Sorted Array:  \n");
        for(i=0; i<k; i++){
	        printf("%d \t",arr2[i]);
	}
	
	// Merge the two sorted arrays into a new array
    int arr3[n + k];
    mergeArrays(arr1, n, arr2, k, arr3);

    // Display the merged unsorted array
    printf("\n The merged unsorted array is: \n");
    for (i = 0; i < n + k; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    // Sort the merged array and display it
    sortArray(arr3, n + k);
    printf("The merged sorted array is: \n");
    for (i = 0; i < n + k; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
