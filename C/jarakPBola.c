/*Nama File 	: jarakPBola.c*/
/*Deskripsi 	: Menghitung dan menampilkan jarak yang ditempuh suatu benda saat
                  mengalami gerak parabola, y = v0 * t - 1/2 * (g * t²) */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 05-03-2022 09:00 WIB*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Kamus
    float v0, t, y;
    const float g = 9.8;

    //Algoritma
    printf("masukkan nilai v0 = ");
    scanf("%f", &v0);

    printf("masukkan nilai t = ");
    scanf("%f", &t);

    y = v0 * t - (g*t*t)/2);

    printf("Jarak yang ditempuh benda adalah %.2f", y);

    return 0;
}
