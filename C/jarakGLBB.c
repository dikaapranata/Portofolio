/*Nama File 	: jarakGLBB.c*/
/*Deskripsi 	: Menghitung dan menampilkan jarak yang ditempuh 
                  suatu benda yang mengalami Gerak Lurus Berubah Beraturan, 
				  S = v0 * t + 1/2 * (a * t²)*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 5 maret 2022*/

#include <stdio.h>

int main()
{
    //kamus
    float v0,t,a,S;

    //algoritma
    printf("program jarak GLBB \n");
    printf("masukkan nilai Vo = \n");
    scanf("%f", &v0);
    printf("masukkan nilai t = \n");
    scanf("%f", &t);
    printf("masukkan nilai a = \n");
    scanf("%f", &a);

    S = v0 * t + (a*t*t/2);

    printf("Jarak yang ditempuh benda adalah %.2f", S);

    return 0;
}
