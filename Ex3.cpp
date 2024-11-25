#include <stdio.h>

int main(){
	int i, n, sum=0;
	while(n<=0){
	printf("nhap so nguyen duong: ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("so khong dung\n\n");
		}
	}
	
	for(i=0; i<=n; i++){
		sum += i;
	}
	printf("tong tu 1 den %d la: %d",n, sum);
	return 0;
}
