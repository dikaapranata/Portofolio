/*Nama File 	: UpahKerja.c*/
/*Deskripsi 	: Menghitung dan menampilkan berapa upah kerja yang
                  didapatkan berdasarkan beberapa klasifikasi*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Jumat, 11-03-2022 19:49 WIB*/

#include <stdio.h>

int main()
{

    //Kamus
    int g,jam,uk,total;

    //Algoritma
    printf("Program untuk menghitung upah total yang diterima\n");
    printf("Masukan golongan 1 s/d 4 : ");
    scanf("%d", &g);
    printf("Masukan jam kerja : ");
    scanf("%d", &jam);

    switch(g)
    {
    case 1:
        uk = 1000;
        break;
    case 2:
        uk = 1500;
        break;
    case 3:
        uk = 2000;
        break;
    case 4:
        uk = 2500;
        break;
    }
    if (jam <= 40){
        total = uk * 40;
    }
    else{
        total = uk * 40 + ((jam - 40) * (1.5 * uk));
    }
    printf("Upah yang diterima adalah %d", total);
    return 0;

}
