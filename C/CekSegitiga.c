/*Nama File 	: CekSegitiga.c*/
/*Deskripsi 	: Mengklasifikasikan hasil berupa tulisan yang mengecek apakah sisi- sisi
                  segitiga termasuk ‘Segitiga sama sisi’ , ‘Segitiga sama Kaki’, dan ‘Segitiga sama Sembarang’*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Jumat, 11-03-2022 19:49 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int S1;
    int S2;
    int S3;

    //Algoritma
    printf("Program menentukan jenis segita\n");
    printf("Masukan sisi 1 : ");
    scanf("%d", &S1);
    printf("Masukan sisi 2 : ");
    scanf("%d", &S2);
    printf("Masukan sisi 3 : ");
    scanf("%d", &S3);

    if ((S1 || S2 || S3 ) <= 0){
		printf("Terdapat nilai yang bukan sisi segitiga");

	}
	else {
		if ((S1 == S2) && (S1 == S3)){
			printf("Segitiga sama Sisi");
		}
        else if ((S1 == S2) || (S1 == S3) || (S2 == S3)){
            printf("Segitiga sama Kaki");
        }
        else {
            printf("Segitiga Sembarang");
        }

	}
    return 0;
}
