/*Nama File 	: Tetris.c*/
/*Deskripsi 	: Menampilkan pada layar susunan karakter ‘*’ dari
                  sebuah inputan integer N > 0 dimulai dari yang terkecil*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Jumat, 25-03-2022 22:43 WIB*/

#include <stdio.h>

int main(){

    /*Kamus*/
    int N;
    int i;
    int j;

    /*Algoritma*/
    printf("Program Tetris\n");
    printf("Masukan sebuah bilangan (N > 0) : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
         for(i = 1;i <= N;i++){
                for(j = 0; j < i; j++){
                    printf("*");
                }
                printf(" = %d\n", i);
        }
    }
    return 0;
}
