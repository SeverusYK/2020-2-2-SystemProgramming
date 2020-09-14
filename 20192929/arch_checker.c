#include <stdio.h>
typedef unsigned char *pointer;

void show_bytes(pointer start, size_t len){
    size_t i;
    for (int i=0; i<len ; i++)
        printf("%p\t0x%.2x\n", start+i, start[i]);
    printf("\n");
}

int main(){
    long a[10];
    
    printf("20192929 정영교 HW 1\n");
    printf("---------- Bit Check -----------\n");
    for (int i=0; i< 10; i++)
        printf("%p\n", a+i);
    printf("임의의 Long 타입의 array를 만들고 주소값을 한칸씩 증가 시킬때\n 8씩 증가하므로 64bit인것을 알 수 있습니다.\n");

    printf("---------- Byte Ordering Check -----------\n");
    int b = 15213;
    printf("int a = 15213;\n");
    show_bytes((pointer) &b, sizeof(int));
    printf(" LSB 부터 기록한 것으로 보아 Little Endian 으로 \nByte Ordering을 하는 것을 알 수 있습니다.\n");

    return 0;
}
