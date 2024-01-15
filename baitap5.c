#include<stdio.h>
 int main(){
 	int soluong;
 	printf("So luong phan tu cua mang nay la: ");
 	scanf("%d",&soluong);
 	int array[soluong];
 	int i;
 	for(i=0; i<soluong ;i++){
 		printf("nhap vao phan tu array[%d]:",i);
 		scanf("%d",&array[i]);
	 };
	 for(i=0; i<soluong ;i++){
 		printf(" phan tu array[%d] la %d\n",i,array[i]);
 	
	 
 }}
