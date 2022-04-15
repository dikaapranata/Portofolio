/*Nama File 	: BilPrimaN.c*/
/*Deskripsi 	: Menghasilkan bilangan prima dari deret 1 hingga N*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04-2022 16:12 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int N;
    int i;
    int j;
    int sum;

    //Algoritma
    printf("Program Mencetak Bilangan Prima\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
        printf("Deret prima-nya = ");
         for(i = 1;i <= N;i++){
                sum = 0;
                for(j = 1; j <= i; j++){
                     if(i % j == 0){
                        sum = sum + 1;
                    }
                if(sum == 2){
                    printf("%d ", i);
                }
            }
        }
    }
    return 0;
}
