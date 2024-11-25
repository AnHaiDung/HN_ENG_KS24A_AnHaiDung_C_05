#include <stdio.h>

int main(){
	int i=7,a;
	while(i=7){
		printf("nhap so nguyen bat ki : ");
		scanf("%d",&a);
		if(i==a){
			printf("ban doan dung roi");
			break;
		}else{
			printf("ban doan sai roi\n");
		}
	}
	return 0;
}
