/*Nama File 	: JumDeret21.c*/
/*Deskripsi 	: Menghitung jumlah deret 1+3+5+..+(2N-1) yang dapat
                  dibentuk dari N integer sembarang N > 0,
                  dengan menggunakan array*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 02-04 2022 13:17 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N;
    int i;
    int j = 0;

    // Algoritma
    printf("Membuat menghitung jumlah deret\n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);

    N = 2 * N - 1;
    int A[N];
    if(N <= 0){
        printf("Nilai N harus positif");
    }
    else{
        for (i=1; i<=N; i++) {
            A[i] = i;
            if(A[i] % 2 != 0){
                j = j + A[i];
            }
        }
        printf("Jumlah deretnya = %d \n", j);
    }
    return 0;
}

