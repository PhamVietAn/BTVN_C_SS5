#include <stdio.h>

int main(){
	int n, reverse = 0;
	printf("nhap so nguyen: ");
	scanf("%d",&n);
	
	if(n<0){
		printf("-");
		n=-n;
	}
	if(n==0){
		printf("0");
	}
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    while (reverse > 0) {
		printf("%d ", reverse % 10);
        reverse /= 10;
    }

    printf("\n");
	
	return 0; 
}
