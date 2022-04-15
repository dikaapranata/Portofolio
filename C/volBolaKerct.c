/*Nama File 	: volBolaKerct.c*/
/*Deskripsi 	: Menghitung dan menampilkan volume bola dan 
                  volume kerucut, Vb =   4/3 * (PHI * r³ ), dan Vk = ½ * Vb */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 05-03-2022 09:10 WIB*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //kamus
    float r, Vb, Vk;
    const float PHI = 3.1415;
    
    //algoritma
    printf("program volume bola kerucut \n");
    printf("masukkan nilai r:");
    scanf("%f", &r);

    Vb = (4/3) * (PHI *r *r * r);
    printf("volume bola adalah : %.2f\n", Vb);
    
    Vk = (Vb/2);
    printf("volume kerucut adalah : %.2f", Vk);
return 0;
}
