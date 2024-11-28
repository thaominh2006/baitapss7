#include<stdio.h>

int main(){
	int array[5];
	printf("Moi nguoi dung nhap vao 5 so nguyen: \n");
	for(int i=0; i < 5; i++){
		printf("Phan tu thu %d: ",i + 1);
		scanf("%d", &array[i]);
	}
	printf("\nCac phan tu trong mang la:\n");
	for(int i=0; i < 5; i++){
		printf("array[%d] = %d\n",i,array[i]);
	}
	
	return 0;
}
