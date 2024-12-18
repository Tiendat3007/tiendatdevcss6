#include <stdio.h>
int main() {
    int MyArray[5];
    printf("Nhap 5 phan tu cua mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("kytu vua nhap %d:",i+1 );
        scanf("%d", &MyArray[i]);
    }
    printf("\n mang ban vua nhap vao la:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu %d: %d\n", i + 1, MyArray[i]);
    }



return 0;
}

    
