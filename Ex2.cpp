#include <stdio.h>

int main(){
	printf("hay doan so bi mat\n");
	int secretNum = 24, usedNum;
	
	do{
		printf("nhap so bi mat: ");
		scanf("%d",&usedNum);
		
		if(secretNum != usedNum){
			printf("so khong dung/n");
		}
	}while(secretNum != usedNum);
	
	printf("chuc mung ban da doan dung");
	
	return 0;
}
