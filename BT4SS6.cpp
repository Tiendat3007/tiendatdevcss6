#include <stdio.h>
int main() {
	int a=0;
    printf(" hay nhap so luong phan tu cua mang: ");
    scanf("%d",&a);
    int MyArray[a];
    printf("Nhap 5 phan tu cua mang:\n");
    for (int i = 0; i < a; i++) {
        printf("kytu vua nhap %d:",i+1 );
        scanf("%d", &MyArray[i]);
    }
    printf("\n mang ban vua nhap vao la:\n");
    for (int i = 0; i < a;i++) {
        printf("Phan tu %d: %d\n", i + 1, MyArray[i]);
    }
return 0;
}
