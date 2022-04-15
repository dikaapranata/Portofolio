/*Nama File 	: JumDeret1.c*/
/*Deskripsi 	: Menghitung jumlah total deret bilangan yang dapat dibentuk
                  dari N integer sembarang yang berpola 1+2+3+4+5+...+N*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Kamis, 30-03-2022 22:43 WIB*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	//Kamus
	int N;
	int i;
	int j=0;

	//Algoritma
	printf("Program Menghitung JumlahDeret1 \n " );
	printf("Masukan nilai N : ");
	scanf("%d", &N);
    if(N <= 0){
        printf("Nilai N harus positif");
    }
    else{
        for(i = 1; i <= N; i++){
            j = j + i;
        }
        printf("Jumlah deretnya adalah %d", j);
	}
	return 0;
}

