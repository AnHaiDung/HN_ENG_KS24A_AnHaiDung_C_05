#include <stdio.h>
 int main(){
 	int i,a,n;
 	printf("nhap so nguyen tu 1 den 10 : ");
 	scanf("%d",&a);
 	if(a<1 || a>10){
 			printf(" chi duoc nhap 1-10");
	 }else{
	 	for (i=1; i<=10;i++){
	 		n=a*i;
	 		printf("%d*%d=%d\n", a,i,n);
		 }
	 }
 	
    return 0;
 }
