/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: Menampilkan bilangan integer sembarang N (N>0)
                  yang dimasukan termasuk bilangan sempurna atau bukan*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 15-03-2022 08:16 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int c = 0;

    //Algoritma
    printf("Program Menyelidiki Apakah Bilangan Sempurna\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
        for(i = 1;i < N;i++){
            if(N % i == 0){
                c = c + i;
            }
        }
        if(N == c){
            printf("%d Bilangan sempurna", N);
        }
        else{
            printf("%d Bukan bilangan sempurna", N);
        }
    }
    return 0;
}
