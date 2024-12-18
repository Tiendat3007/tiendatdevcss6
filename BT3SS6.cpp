#include <stdio.h>
int main() {
    int MyArray[] = {1, 2, 3, 4, 5};
    int check;
    int length = sizeof(MyArray) / sizeof(MyArray[0]);
    for (int i = 0; i < length; i++) {
    	if(MyArray[i]%2==0){
        printf("so chan trong mang la: %d\n", i+1, MyArray[i]);
        check = 1;
    }
}
       if(!check){
       printf("khong co so chan nao ca");
}

    return 0;
}

