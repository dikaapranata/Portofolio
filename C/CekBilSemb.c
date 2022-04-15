/*Nama File 	: CekBilSemb.c*/
/*Deskripsi 	: Menampilkan hasil cek bilangan integer sembarang pada layar */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 08-03-2022 08:16 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("Masukan bilangan integer =  ");
    scanf("%d", &i);

    if (i > 0){
        printf("Bilangan %d merupakan bilangan bulat positif", i);
    } else if (i == 0){
        printf("Bilangan %d merupakan nol", i);
    } else if (i < 0){
        printf("Bilangan %d merupakan bilangan bulat negatif", i);
    } else {
        printf("Bukan termasuk sebuah bilangan");
    }
}
