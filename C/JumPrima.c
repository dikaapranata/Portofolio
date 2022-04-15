/*Nama File 	: JumPrima.c*/
/*Deskripsi 	: Menentukan dan menghasilkan jumlah bilangan prima yang
                  dapat dibentuk dari bilangan integer N sembarang > 0
                  beserta hasil penjumlahan element deret tersebut*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04-2022 16:12 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int N;
    int i;
    int j;
    int bp;
    int sum = 0;

    //Algoritma
    printf("Program Menjumlahkan Bilangan Prima\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
        printf("Deret prima-nya = ");
        for (i=1;i<=N;i++){
            bp = 0;
            for (j=1;j<=i;j++){
                if (i % j == 0){
                    bp = bp + 1;
                }
            }
            if (bp == 2){
                sum = sum + i;
                printf("%d ", i);
            }
        }
        printf("\nhasil penjumlahan bilangan prima = %d", sum);
    }
    return 0;
}
