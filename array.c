#include<stdio.h>
int main() {
	int arr3[1];

    /*int arr[]={1,2,3,45,6,8,6,7,7};
    printf("%d\n",arr[3]);

    int arr1[3][4]={12,3,4,56,33,56,78,65,43,78,89,3};
    printf("%d\n",arr1[2][3]);

	int arr3[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr3[i]);
	}
	printf("Array Elements: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr3[i]);
	}*/

	int arr[5]={10,20,30,40,50};

	/*arr3[1]=arr[0];
	arr[0]=arr[3];
	arr[3]=arr3[1];*/

	arr[0]=arr[0]+arr[3];
	arr[3]=arr[0]-arr[3];
	arr[0]=arr[0]-arr[3];

	for (int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}