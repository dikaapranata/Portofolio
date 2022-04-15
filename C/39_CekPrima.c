/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Menentukan dan menampilkan bilangan prima atau bukan dari suatu inputan*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04 2022 16:12 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int j = 0;

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
                j = j + 1;
            }
        }
        if(j == 2){
            printf("%d adalah bilangan prima", N);
        }
        else{
            printf("%d adalah bukan bilangan prima", N);
        }
    }
    return 0;
}
