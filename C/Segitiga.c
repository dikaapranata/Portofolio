/*Nama File 	: Segitiga.c*/
/*Deskripsi 	: Menampilkan pada layar susunan karakter ‘*’
                  sesuai inputan integer N >0*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Kamis, 30-03-2022 21:43 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int j;
    int p;

    //Algoritma
    printf("Program Segitiga\n");
    printf("Masukan sebuah bilangan (N > 0) : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
        for (i = N; i >= 1; i--){
            for (j = N; j > i; j--){
                printf(" ");
			}
			for (p = 0; p < i  ; p++){
                printf("* ");
			}
            printf("\n", i);

		}
    return 0;
    }
}

