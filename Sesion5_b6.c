#include <stdio.h>

int main(){
	float num1, num2;
	int number;
	do{
		printf("CALCULATOR\n");
		printf("1.Tong 2 so\n");
        printf("2.Hieu 2 so\n");
	    printf("3.Tich 2 so\n");
        printf("4.Thuong 2 so\n");
        printf("5.Thoat\n");
	    scanf("%d",&number);
	    switch (number){
	    	case 1:
    		printf("nhap so thu 1 : ");
    		scanf("%f",&num1);
    		printf("nhap so thu 2 : ");
    		scanf("%f",&num2);
    		printf("tong 2 so la : %.2f\n", num1+num2);
    		break;
    	case 2:
    		printf("nhap so thu 1 : ");
    		scanf("%f",&num1);
    		printf("nhap so thu 2 : ");
    		scanf("%f",&num2);
    		printf("hieu 2 so la : %.2f\n", num1-num2);
    		break;
    	case 3:
    	    printf("nhap so thu 1 : ");
    		scanf("%f",&num1);
    		printf("nhap so thu 2 : ");
    		scanf("%f",&num2);
    		printf("tich 2 so la : %.2f\n", num1*num2);
    		break;
    	case 4:
    		printf("nhap so thu 1 : ");
    		scanf("%f",&num1);
    		printf("nhap so thu 2 : ");
    		scanf("%f",&num2);
    		printf("thuong 2 so la : %.2f\n", num1/num2);
    		break;
    	case 5:
    		printf("ket thuc chuong trinh");
    		break;
    	default:
    		printf("khong thuoc yeu cau");
		}
	}while(number!=5);
	return 0;
}
