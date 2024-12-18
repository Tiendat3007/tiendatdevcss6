#include <stdio.h>
int main() {
    int MyArray[] = {1, 2,3,4,5};
    int length = sizeof(MyArray) / sizeof(MyArray[0]);
    for (int i = 0; i < length; i++) {
        printf("Phan tu %d: %d\n", i+1, MyArray[i]);
    }
    printf("Do dai cua mang la: %d\n", length);

    return 0;
}

