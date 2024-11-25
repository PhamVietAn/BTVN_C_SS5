#include <stdio.h>;

int main(){
	int a,b=1;
	
	printf("nhap vao so nguyen duong tu 1 den 10: ");
	scanf("%d",&a);	
	while(a<1 || a>10){
		printf("so khong chinh xac\n\n");
		printf("nhap vao so nguyen duong tu 1 den 10: ");
		scanf("%d",&a);
	} 
	printf("ban cuu chuong cua %d la: \n",a);
	while(b<=10){
		printf("%d x %d = %d\n",a, b, a*b);
		b++;
	}

	return 0;
	
}
