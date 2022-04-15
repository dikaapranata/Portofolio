/*Nama File 	: KalkSS.c*/
/*Deskripsi 	: Menampilkan dan menghitung keluaran berupa
                  operasi aritmatika pada layar sesuai dengan pilihan*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Jumat, 11-03-2022 19:49 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Kamus
    int i1,i2,i;
    float iA;
    char j;

    //Algoritma
    printf("Masukan pilihan (a - f) : ");
    scanf("%c", &j);
    printf("Masukan nilai i1 : \n ");
    scanf("%d", &i1);
    printf("Masukan nilai i2 : \n");
    scanf("%d", &i2);

    switch(j)
    {
    case 'a':
        i = i1 + i2;
        printf("%d",i);
        break;
    case 'b':
        i = i1 - i2;
        printf("%d",i);
        break;
        case 'c':
            i = i1 * i2;
        printf("%d",i);
        break;
    case 'd':
        iA = ((float)i1 /(float)i2);
        printf("%.2lf",iA);
        break;
    case 'e':
        i = i1 / i2;
        printf("%d",i);
        break;
    case 'f':
        i = i1 % i2;
        printf("%d",i);
        break;
    default:
        printf("Bukan pilihan menu yang benar");
    }
    return 0;

}
