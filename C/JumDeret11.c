/*Nama File 	: JumDeret11.c*/
/*Deskripsi 	: Menghitung jumlah deret 1+2+3+4+5..+N yang
                  dapat dibentuk dari N integer sembarang N > 0, dengan array*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 02-04-2022 15:00 WIB*/

#include<stdio.h>
#include<stdlib.h>

int main() {

    /*Kamus*/
    int N;
    int i;
    int j = 0;

    /*Algoritma*/
    printf("Program menghitung jumlah deret \n");
    printf("Masukkan banyaknya element: ");
    scanf("%d", &N);
    int A[N];
    if(N <= 0){
        printf("Nilai N harus positif");
    }
    else{
        for (i = 1; i <= N; i++)
        {

            scanf("%d", & A[i]);
            j = j + A[i];
        }
        printf("Jumlah deretnya adalah %d", j);
    }
    return 0;
}
