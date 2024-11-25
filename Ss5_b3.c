#include <stdio.h>

int main(){
	int i,a,total=0;
	printf("nhap so nguyen duong bat ki : ");
	scanf("%d", &a);
	if(a<0){
		printf("hay nhap so nguyen duong");
	}else{
		for(i=1; i<= a; i++){
				total+=i;
		}
	printf("tong chu so tu 1 den so duoc chon la %d", total);
	}
	
	return 0;
}
