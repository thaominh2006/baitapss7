#include<stdio.h>

int main(){
	int array[5]={1,2,3,4,5};
	int soChan =0;
	printf("Cac so chan co trong mang la: \n"); 
	for(int i=0; i < sizeof(array)/sizeof(int); i++){
		if(array[i] % 2==0){
			printf("%d \n", array[i]);
			soChan+=1;
		}
			
	}
	if(soChan==0){
		printf("Mang nay khong co so chan.\n");
	}	
	   
	return 0;
}
