/*Nama File 	: JumDeret31.c*/
/*Deskripsi 	: Menghitung jumlah deret 1-2+3-4+5...+N yang
                  dibentuk dari N integer sembarang (N > 0) dengan menggunakan array*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 02-04 2022 13:17 WIB*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

	//Kamus
	int N;
	int i;
	int j = 0;

	//Algoritma
	printf("Program Menghitung Jumlah Deret 3 (dengan array) \n " );
	printf("Masukan nilai N : ");
	scanf("%d", &N);
	int A[N];

	for(i = 1; i <= N; i++){
        A[i] =(pow(-1, i)*(i*-1));
		j = j + A[i];
	}
	printf("Jumlah deretnya adalah %d", j);

	return 0;
}
