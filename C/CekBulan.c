/*Nama File 	: CekBulan*/
/*Deskripsi 	: Menampilkan nama bulan dari nomor bulan yang dimasukkan pada layar */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 08-03-2022 08:16 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int bulan;

    //Algoritma
    printf("Masukan nomor bulan = ");
    scanf("%d", &bulan);

    if(bulan == 1){
        printf("Januari");
    } else if(bulan == 2){
        printf("Februari");
    } else if(bulan== 3){
        printf("Maret");
    } else if(bulan == 4){
        printf("April");
    } else if(bulan == 5){
        printf("Mei");
    } else if(bulan == 6){
        printf("Juni");
    } else if(bulan == 7){
        printf("Juli");
    } else if(bulan== 8){
        printf("Agustus");
    } else if(bulan == 9){
        printf("September");
    } else if(bulan == 10){
        printf("Oktober");
    } else if(bulan == 11){
        printf("November");
    } else if(bulan == 12){
        printf("Desember");
    } else {
        printf("Masukan nomor bulan tidak tepat");
    }
}
