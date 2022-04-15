/*Nama File 	: Tetris3.c*/
/*Deskripsi 	: Menampilkan pada layar susunan karakter ‘*’
                  dari sebuah inputan integer N > 0 dengan deret Un = ½ *n*(n+1)*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 28-03-2022 23:00 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int N;
    int i;
    int j;
    int Un;

    //Algoritma
    printf("Program Tetris 3\n");
    printf("Masukan sebuah bilangan (N > 0) : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
        for (i = 1; i <= N; i++){
            Un = i * (i + 1)/2;
            for (j = ; j <= Un; j++){
                printf("*");
                }
            printf("\n");
        }
    }
    return 0;
}
