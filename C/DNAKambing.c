/*Nama File 	: DNAKambing.c*/
/*Deskripsi 	: Menentukan berapa banyak saudara dan tidak saudara
                  dari kumpulan DNA kambing*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 02-04 2022 13:17 WIB*/

#include<stdio.h>
#include<stdlib.h>

int main() {

    //Kamus*
    int N;
    int i;
    int j;
    int x;
    int ns = 0;
    int b = 0;

    //Algoritma
    printf("Program DNA Kambing \n");
    printf("Masukkan Nilai N: ");
    scanf("%d", &N);

    int DNA[N];
    for (i = 1; i <= N; i++){
        printf("Masukan DNA Kambing ke-%d: ",i);
        scanf("%d", & DNA[i]);
    }
    x= DNA[1];
    for (i = 2; i <= N; i++){
        for(j = i; j <= N; j++){
            if(DNA[j] - x < 3){
                b = b + 1;
            }
            else{
                ns = ns + 1;
            }
        }
        x = DNA[i];
    }
    printf("Jumlah saudara adalah %d\n", b);
    printf("Jumlah tidak saudara adalah %d", ns);

    return 0;
}

