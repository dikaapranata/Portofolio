/*Nama File 	: JumDeret3.c*/
/*Deskripsi 	: Menghitung jumlah total deret bilangan yang dapat dibentuk dari
                  N integer sembarang yang berpola 1-2+3-4+5-..+N*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Kamis, 30-03-2022 22:43 WIB*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    /*Kamus*/
    int i;
    int N;
    int j=0;

    /*Algoritma*/
    printf("Program menghitung JumlahDeret3 \n");
    printf("Masukan nilai N deret yang ingin dihitung: ");
    scanf("%d", &N);
    if(N <= 0){
        printf("Masukan N harus positif");
    }
    else{
        for(i = 1; i <= N; i++){
        j = j += pow(-1,i+1)*i;
        }
        printf("Jumlah deretnya adalah %d", j);
    }
    return 0;
}
