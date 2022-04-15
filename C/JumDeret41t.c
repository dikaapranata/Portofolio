/*Nama File 	: JumDeret41t.c*/
/*Deskripsi 	: Menampilkan sebuah deret bilangan 1, 3, 6, 10, 15, 21, …, 1/2 n (n + 1 ) dan Menampilkan hasil jumlah elemen deret yang
                  dapat terbentuk sebanyak N buah elemen tersebut*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04-2022 16:12 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;
    int i;
    int j = 0;

    //Algoritma
    printf("Membuat program yang menghitung jumlah deret \n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);

    int A[N];
    if(N <= 0){
        printf("Nilai N harus positif");
    }
    else{
        printf("Deret bilangan = ");
        for (i=1; i<=N; i++) {
            A[i] = i * (i + 1)/2;
            j = j + A[i];
            printf("%d ", A[i]);
        }
        printf("\njumlah deret adalah %d ", j);
    }
    return 0;
}
