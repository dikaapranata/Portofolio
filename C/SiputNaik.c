/*Nama File 	: SiputNaik.c*/
/*Deskripsi 	: mengetahui berapa hari waktu yang dibutuhkan oleh siput
                  tersebut untuk mencapai ketinggin N meter*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Jumat, 25-03-2022 22:43 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    float N;
    float i=0;
    int  h=0;

    //Algoritma
    printf("Program menghitung hari siput naik\n");
    printf("Masukan kedalaman lubang: ");
    scanf("%f", &N);

    if(N <= 0){
        printf("Kedalaman lubang harus positif");
    }
    else{
        while (i >= 0 && i < N ){
            i = i + 0.3;
            if (i < N){
                i = i - 0.1;
            }
            h = h + 1;
        }
        printf("Waktu yang dibutuhkan siput untuk mencapai ketinggian N meter adalah %d hari", h);

    return 0;
    }
}
