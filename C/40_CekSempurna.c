/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: Menyelidiki apakah bilangan i tersebut termasuk bilangan sempurna atau bukan*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04-2022 16:12 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int j = 0;

    //Algoritma
    printf("Program Menyelidiki Apakah Bilangan Sempurna\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
        for(i = 1;i < N;i++){
            if(N % i == 0){
                j = j + i;
            }
        }
        if(N == j){
            printf("%d Bilangan sempurna", N);
        }
        else{
            printf("%d Bukan bilangan sempurna", N);
        }
    }
    return 0;
}
