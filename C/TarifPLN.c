/*Nama File 	: TarifPLN.c*/
/*Deskripsi 	: Menghitung dan menampilkan berapa tarif PLN yang dikenakan pada layar */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 12-03-2022 10:20 WIB*/


#include <stdio.h>

int main()
{

    //Kamus
    int g,d,tl,bl;

    //Algoritma
    printf("Program Hitung Tarif PLN\n");
    printf("Masukan golongan tarif (1 - 2) : ");
    scanf("%d", &g);
    printf("Masukan jumlah pemakaian daya listrik /kWH : ");
    scanf("%d", &d);

    if (g == 1){
        if (d <= 100){
            bl = 100000;
            printf("%d", bl);
        }
        else if (d < 1000){
            bl = d * 1000;
            printf("%d", bl);
        }
        else{
            bl = (d * 1000) + (0.1 * (d * 1000));
            printf("%d", bl);
        }
    }
    else{
        if (d <= 100){
            bl = 200000;
            printf("%d", bl);
        }
        else if (d < 1000){
            bl = d * 2000;
            printf("%d", bl);
        }
        else{
            bl = (d * 2000) + (0.1 * (d * 2000));
            printf("%d",bl);
    }
    return 0;
    }
}
