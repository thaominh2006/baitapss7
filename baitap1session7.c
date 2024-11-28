#include<stdio.h>

int main(){
	int arr[]={3,5,2,4};
	int size = sizeof(arr[0]);
	printf("Cac phan tu trong mang la: \n");
	for(int i=0; i < size; i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	printf("Do dai cua mang la: %d\n",size);
	
	return 0;
}
