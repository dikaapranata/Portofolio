/*Nama File 	: KelBil.c*/
/*Deskripsi 	: Menentukan kelipatan bilangan terkecil,jika diberikan sebuah array integer A sebarang*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 02-04-2022 16:00 WIB*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //Kamus
    int N;
    int i;
    int j;
    int hk;

    // Algoritma
    printf("Program menentukan kelipatan bilangan terkecil\n");
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);

    hk = 1;

    if(N>0){
        int A[N];
        for(i=1; i<=N; i++){
            printf("Masukkan angka ke-%d: ", i);
            scanf("%d", &A[i]);
        }
        for(j=1;j<=N;j++){
            if(A[j] % hk == 0){
                hk = A[j];
            }
            else{
                hk = hk * A[j];
            }
        }
        printf("Kelipatan terkecilnya adalah %d",hk);
    }else{
        printf("Input yang dimasukan tidak tepat");
    }
    return 0;
}
