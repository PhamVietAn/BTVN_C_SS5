#include <stdio.h>

int main(){
	int a, b, rmd;
	;
	do{
	printf("nhap so nguyen duong thu nhat: ");
	scanf("%d",&a);
	if(a<=0){
		printf("vui long nhap so nguyen duong!\n");
	}
	}while(a<=0);
	do{
	printf("nhap so nguyen duong thu hai: ");
	scanf("%d",&b);
	if(b<=0){
		printf("vui long nhap so nguyen duong!\n");
	}
	}while(b<=0);
	
	while(b!=0){
		rmd=a%b;
		a=b;
		b=rmd; 
	}	 
	printf("uoc chung lon nhat cua %d va %d la: %d\n",a, b, rmd);
	
	return 0;
}
