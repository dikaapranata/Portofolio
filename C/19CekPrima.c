/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Menampilkan bilangan integer yang dimasukan
                  termasuk bilangan prima atau bukan pada layar*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 15-03-2022 08:16 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int c = 0;

    //Algoritma
    printf("Program Mennyelidiki Apakah Bilangan Prima\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
         for(i = 1;i <= N;i++){
            if(N % i == 0){
                c = c + 1;
            }
        }
        if(c == 2){
            printf("%d adalah Bilangan prima", N);
        }
        else{
            printf("%d adalah Bukan bilangan prima", N);
        }
    }
    return 0;
}
