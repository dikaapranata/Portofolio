/*Nama File 	: gayaSentr.c*/
/*Deskripsi 	: Menghitung dan menampilkan gaya sentripetal yang dialami 
                  suatu benda F = m * (v² / r) */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 05-03-2022 09:10 WIB*/

#include<stdio.h>

int main()
{
    //kamus
    float m,v,r,F;
    //algo
    printf("Program Gaya Sentripetal \n");
    printf("masukkan nilai m=");
    scanf("%f", &m);
    printf("masukkan nilai v=");
    scanf("%f", &v);
    printf("masukkan nilai r=");
    scanf("%f", &r);

    F = m *(v*v/r);
    printf("maka gaya sentripetal adalah %.2f", F);
return 0;
}
