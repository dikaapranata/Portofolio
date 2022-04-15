/*Nama File 	: DeretPrima.c*/
/*Deskripsi 	: Menampilkan dan mencetak deret bilangan prima yang dapat dibentuk dari
                  bilangan integer sembarang N (N>0) yang dimasukan melalui keyboard, pada layar*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Minggu, 20-03-2022 08:16 WIB*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

	int N,i;
	int j,p;
	p = 0;

	printf("Membuat Program Menampilkan Deret Prima \n");
	printf("Masukan Bilangan Integer : ");
	scanf("%d", &N);

	if (N <= 0 ){
		printf("N harus bernilai Positif");
	}
	else{

		for( j = 2; j <= N ; j++){
			p = 0;
			for ( i =  2; i <=(sqrt(j)) ; i++){
				if ( j % i == 0){
					p = 1;
					break;
				}
			}
			if ( p == 0 ){
				printf("%d ", j);
			}

		}
	}

	return 0;
}
