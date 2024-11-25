#include <stdio.h>

int main(){
	int a, b, varA, varB, rmd;
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
	
	varA=a;
	varB=b;
	
	while(varB!=0){
		rmd=varA%varB;
		varA=varB;
		varB=rmd; 
	}	 
	printf("uoc chung lon nhat cua %d va %d la: %d\n",a, b, varA);
	
	return 0;
}
