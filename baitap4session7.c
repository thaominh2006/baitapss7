#include<stdio.h>

int main(){
	int soMang;
    printf("Nhap chieu dai cua mang: ");
    scanf("%d",&soMang);
    int array[soMang];
    int phanTu;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&phanTu);
        array[i]=phanTu;
    }
    for (int i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("Phan tu thu %d trong mang là: %d \n",i+1,array[i]);
    }
	return 0;
}
