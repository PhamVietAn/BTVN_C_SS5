#include <stdio.h>

int main() {
    int choice;
    double a = 0, b = 0, c = 0;

    do {
         printf("\nMENU\n");
        printf("1. nhap 3 so\n");
        printf("2. tong 3 so\n");
        printf("3. trung binh cong 3 so\n");
        printf("4. so nho nhat\n");
        printf("5. so lon nhat\n");
        printf("6. thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("nhap 3 so: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                break;
            case 2:
                printf("tong: %.1f\n", a + b + c);
                break;
            case 3:
                printf("trung binh cong: %.1f\n", (a + b + c) / 3);
                break;
            case 4:
                if (a<b && a<c)
                    printf("so nho nhat: %.1f\n", a);
                else if (b<a && b<c)
                    printf("so nho nhat: %.1f\n", b);
                else
                    printf("so nho nhat: %.1f\n", c);
                break;
            case 5:
                if (a>=b && a>=c)
                    printf("so lon nhat: %.1f\n", a);
                else if (b >= a && b >= c)
                    printf("so lon nhat: %.1f\n", b);
                else
                    printf("so lon nhat: %.1f\n", c);
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("laa chon khong hop le.\n");
        }
    } while (choice != 6);

    return 0;
}

