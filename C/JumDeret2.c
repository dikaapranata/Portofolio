/*Nama File 	: JumDeret2.c*/
/*Deskripsi 	: Menghitung jumlah total deret bilangan yang dapat dibentuk dari
                  N integer sembarang yang berpola 1+3+5+..+(2n-1)*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Kamis, 30-03-2022 22:43 WIB*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    /*Kamus*/
    int N;
    int i;
    int j=0;

    /*Algoritma*/
    printf("Program Menghitung JumlahDeret2 : ");
    scanf("%d", &N);

    if(N <= 0){
        printf("Nilai N harus positif");
    }
    else{
        N = 2 * N - 1;
        for(i = 1; i <= N; i++){
                if(i % 2 != 0){
                j = j + i;
                }
        }
        printf("Jumlah deretnya adalah %d", j);
    }
    return 0;
}

