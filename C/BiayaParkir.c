/*Nama File 	: BiayaParkir.c*/
/*Deskripsi 	: menghitung berapa biaya parkir yang harus dibayar oleh
                  seseorang berdasarkan waktu lamanya parkir*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Jumat, 11-03-2022 19:49 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Kamus
    int lp, bp;

    //Algoritma
    printf("Program Hitung Biaya Parkir\n");
    printf("Masukan jam lama parkir : ");
    scanf("%d", &lp);

    if (lp == 0){
        printf("Parkir gratis");
    }
    else if (lp > 0 && lp <= 2){
        printf ("%d", 2000);
    }
    else{
        bp = 2000 + (lp - 2) * 500;
        printf ("%d",bp);
    }
    return 0;
}
