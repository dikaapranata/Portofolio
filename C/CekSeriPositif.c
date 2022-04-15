/*Nama File 	: CekSeriPositif*/
/*Deskripsi 	: Menampilkan nilai kebenaran
                  apakah masukkan bernilai negatif atau tidak pada layar */
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Selasa, 08-03-2022 08:16 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	//Kamus lokal
	float k;
	float r;
	float s;
	float Total;

	//Algoritma
	printf("Masukan nomor tahanan 1 : ");
	scanf("%f", &k);
	printf("Masukan nomor tahanan 2 : ");
	scanf("%f", &r);
	printf("Masukan nomor tahanan 3 : ");
	scanf("%f", &s);

	if (k >= 0 && r >= 0 && s >= 0 ){
		Total = k + r + s;
		printf("Maka total tahanan adalah: %.2f", Total);

	}
	else {
		printf("Masukan tahanan tidak boleh negatif");
	}


	return 0;
}
