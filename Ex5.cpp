#include <stdio.h>;

int main(){
	
	for(int a=1; a<10; a++){
	printf("ban cuu chuong cua %d la: \n",a);
		for(int b=1; b<11; b++){
			printf("%d x %d = %d\n",a, b, a*b);
		}
	}
	
	return 0;
	
}	
