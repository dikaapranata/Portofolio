/*Nama File     : Kuadran.c*/
/*Deskripsi     : Melakukan pengecekan mengenai kuadran
                  sebuah titik p yang dimasukkan melalui keyboard*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04 2022 16:12 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int X, Y;

    //Algoritma
    printf("Masukan nilai X: ");
    scanf("%d", &X);

    printf("Masukan nilai Y: ");
    scanf("%d", &Y);

    if (X == 0 && Y==0){
        printf("Titik P berada pada titik pusat", X, Y);
    } else if (X>0 && Y>0){
        printf("P(%d,%d), maka kuadran I", X, Y);
    } else if (X<0 && Y>0){
        printf("P(%d,%d), maka kuadran II", X, Y);
    } else if (X<0 && Y<0){
        printf("P(%d,%d), maka kuadran III", X, Y);
    } else {
        printf("P(%d,%d), maka kuadran IV", X, Y);
    }
}
