/*Nama File 	: Tetris2.c*/
/*Deskripsi 	: Menampilkan pada layar susunan karakter ‘*’
                  dari sebuah inputan integer N > 0*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Senin, 28-03-2022 17:51 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int j;

    //Algoritma
    printf("Program Tetris 2\n");
    printf("Masukan sebuah bilangan (N > 0) : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
        for (i=1; i <= N; i++){
            for (j=0; j < i; j++){
                printf("*");
                }
            printf("\n", i);
        }
        for (i=2; N >= i; i++){
            for (j=i; j <= N; j++){
                    printf("*");
                }
            printf("\n");
        }
    }
    return 0;
}
