#include <stdio.h>

int main(){
	int choice;
	double a,b, result;
	printf("nhap vao so thu nhat: ");
	scanf("%lf",&a);
	
	printf("nhap vao so thu hai: ");
	scanf("%lf",&b);
	
	do{
		printf("\nCALCULATOR\n");
		printf("1. tong 2 so\n");
		printf("2. hieu 2 so\n");
		printf("3. tich 2 so\n");
		printf("4. thuong 2 so\n");
		printf("5. thoat\n\n");
		printf("lua chon cua ban: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				result = a + b;
				printf("tong cua 2 so %.1lf va %.1lf la: %.1lf\n",a, b, result);
				break;
			case 2:
				result = a - b;
				printf("hieu cua 2 so %.1lf va %.1lf la: %1.lf\n",a, b, result);
				break;
			case 3:
				result = a * b;
				printf("tich cua 2 so %.1lf va %.1lf la: %.1lf\n",a, b, result);
				break;
			case 4:
				if(b!=0){
					result = a/b;
					printf("thuong cua 2 so %.1lf va %.1lf la: %.1lf\n",a, b, result);
				}else{
					printf("math error\n");
				}
				break;
			case 5:
				printf("thoat chuong trinh");
				break;
			default:
				printf("vui long chon lai\n");
		}
	}while(choice != 5);
	
	return 0;
}
