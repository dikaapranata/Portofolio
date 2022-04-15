/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Menampilkan dan menentukan faktor bilangan dari bilangan
                  integer sembarang N (N>0) yang di-input dan ditampilkan pada layar*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 15-03-2022 20:45 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int i;
    int N;

    //Algoritma
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);
    printf("Faktor dari bilangan %d\n", N);

    for(i = 1;i <= N;i++){
        if(N % i == 0){
        printf(" %d", i);
        }
    }
    return 0;
}
