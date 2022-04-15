// Nama Program : IsiMatrik.c
/* Deskripsi    : Mengisi nilai pada elemen - elemen matrik yang memiliki ordo sama (M x N)*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04 2022 16:12 WIB*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Kamus
    int M;
	int N;
	int i;
	int j;

    // Algoritma
    printf("Program Isi Matriks \n");
    printf("Masukkan baris M: ");
    scanf("%d",&M);
    printf("Masukkan baris N: ");
    scanf("%d",&N);

    if(M == N && M > 0 && N > 0){
        for(i = 1;i <= M;i++){
            for(j = 1;j <= N;j++){
                if(i == j){
                    printf("1 ");
                }
                else if (j > i){
                    printf("0 ");
                }
                else{
                    printf("2 ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Nilai M dan N harus sama");
    }
    return 0;
}
