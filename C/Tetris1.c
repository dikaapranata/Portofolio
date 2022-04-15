/*Nama File 	: Tetris1.c*/
/*Deskripsi 	: Menampilkan pada layar susunan karakter ‘*’
                  dari sebuah inputan integer N > 0 dimulai dari yang terbesar*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Senin, 28-03-2022 18:00 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int j;

    //Algoritma
    printf("Program Tetris 1\n");
    printf("Masukan sebuah bilangan (N > 0) : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
        for (i = 1; N >= i; i++){
            for (j = i; j <= N; j++){
                    printf("*");
                }
            printf("\n");
        }
    }
    return 0;
}
