/*Nama File 	: CekProsesBil.c*/
/*Deskripsi 	: Menampilkan hasil klasifikasi akhir dari bilangan N pada layar */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 08-03-2022 08:16 WIB*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Kamus
    int N;

    //Algoritma
    printf ("Masukan bilangan integer = ");
    scanf("%d", &N);

    if(N % 2 == 0){
        N = N + 3;
            if (N % 5 == 0){
                N = N + 5;
                printf ("Nilai N adalah %d", N);
            }
            else{
                N = N + 2;
                printf ("Nilai N adalah %d", N);
        }
    }
    else if (N % 2 == 1){
		N = N + 2;
			if ( N % 3 == 0){
				N = N + 4;
				printf("Nilai N adalah %d", N);
			}
			else{
				N = N + 1;
				printf("Nilai N adalah %d", N);
			}
	}

}
