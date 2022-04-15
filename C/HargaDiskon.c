/*Nama File 	: HargaDiskon.c*/
/*Deskripsi 	: Menghitung dan Menampilkan total harga setelah di diskon*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Jumat, 11-03-2022 19:49 WIB*/

#include <stdio.h>

int main()
{

    //Kamus
    char c;
    int u,h;

    //Algoritma
    printf("Program Menghtiung Harga Diskon\n");
    printf("Masukan inputan 'A' atau 'B' atau 'C': ");
    scanf("%c", &c);
    printf("Masukan harga: ");
    scanf("%d", &u);

    switch(c){

    case 'A':
        h = u - (u * 0.10);
        printf("%d", h);
        break;
    case 'B':
        h = u - (u * 0.15);
        printf("%d", h);
        break;
    case 'C':
        h = u - (u * 0.2);
        printf("%d", h);
        break;
    }
    return 0;

}
