#include <stdio.h>

int main(void){
    int dizi[5]={1,2,3,4,5};

    int *parray[10];
    parray[0]=&dizi[0];

    while(parray[0]<=&dizi[4]){
        printf("dizinin elemanlar─▒: %d\n", *parray[0]);

        parray[0]++;

    }


    return 0;
}