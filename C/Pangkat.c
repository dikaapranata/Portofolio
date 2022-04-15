/*Nama File 	: Pangkat.c*/
/*Deskripsi 	: Menghitung hasil pangkat dengan memanggil fungsi pangkat*/
/*Pembuat   	: Handhika Pranata Kusuma Wardana - 24060121140112*/
/*Tgl Pembuatan	: Sabtu, 03-04-2022 16:12 WIB*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Pangkat(int a,int b){

    //Kamus Lokal
    int i;
    int j;
    float sum = 1;

    //Algoritma
    if(b == 0){
        sum = 1;
        printf("%f", sum);
    }
    else{
        if(b > 0){
            for(i = b;i >= 1;i--){
                sum = sum * a;
            }
        }
        else{
            for(j = b;j <= -1;j++){
                sum = sum / a;
            }
        }
        printf("%.3f", sum);
    }
}


int main(){

    //Kamus
    int j;
    int t;

    // Algoritma
    printf("Membuat Program Pangkat\n");
    printf("Masukkan bilangan yang akan di-pangkatkan : ");
    scanf("%d",&j);
    printf("Masukkan bilangan yang dijadikan pangkatnya : ");
    scanf("%d",&t);

    printf("%d pangkat %d = ", j,t);
    Pangkat(j,t);

    return 0;
}
