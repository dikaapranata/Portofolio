/*Nama File 	: CekHari*/
/*Deskripsi 	: Menampilkan nama hari dari nomor hari yang dimasukkan pada layar*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 08-03-2022 08:16 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int h;

    //Algoritma
    printf("Masukan nomor hari = ");
    scanf("%d", &h);

    if(h == 1){
        printf("Senin");
    } else if(h == 2){
        printf("Selasa");
    } else if(h == 3){
        printf("Rabu");
    } else if(h == 4){
        printf("Kamis");
    } else if(h == 5){
        printf("Jumat");
    } else if(h == 6){
        printf("Sabtu");
    } else if(h == 7){
        printf("Minggu");
    } else {
        printf("Masukan nomor hari tidak tepat");
    }
}

