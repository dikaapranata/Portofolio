/*Nama File 	: Faktorial.c*/
/*Deskripsi 	: Menghitung faktorial dari bilangan bulat N
                  dengan memanggil fungsi faktorial*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04-2022 16:12 WIB*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Faktorial(int j){

    //Kamus Lokal
    int i;
    int sum = 1;

    //Algoritma
    for(i=j;i>=1;i--){
        if(i==1){
            sum = sum * 1;
            printf("%d = %d",i,sum);
        }
        else{
            sum = sum * i;
            printf("%d x ",i);
        }
    }


}

int main(){

    //Kamus
    int N;

    // Algoritma
    printf("Membuat Program Faktorial\n ");
    printf("Masukkan bilangan yang akan di-faktorialkan :  ");
    scanf("%d",&N);
    if (N <= 0){
        printf("N harus bilangan positif");
    }
    else{
        printf("Hasil dari %d! adalah\n", N);
        Faktorial(N);
    }

    return 0;
}
