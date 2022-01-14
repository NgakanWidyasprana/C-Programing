#include <stdio.h>
#include <stdlib.h>

int hitungLuas(){
    int height, width;
    printf("\nMasukkan tinggi segitiga: ");
    scanf("%d", &height);
    getchar();

    printf("\nMasukkan lebar segitiga: ");
    scanf("%d", &width);
    getchar();
    int data;
    if (height<=0 && width<=0)
    {
        printf("Data tidak valid! Silahkan coba lagi\n");
        system("pause");
        return 0;
    } else {
        data = (height * width)/2;
        printf("Luas dari segitiga: %d", data);
    }
    getchar();
}

int hitungKeliling(){
    int sisi[3], data=0;

    for (int i = 0; i < 3; i++)
    {
        printf("Masukkan sisi [%d]: ", i+1);
        scanf("%d", &sisi[i]);    
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nSisi [%d]: %d", i+1, sisi[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        data = data+sisi[i];
    }
    printf("\nkeliling: %d", data);
}

int segitiga()
{   
    int pilihan;
    printf("=> Menu <=\n");
    printf("[1] Hitung Luas\n");
    printf("[2] Hitung Keliling\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        hitungLuas();
        break;
    case 2:
        hitungKeliling();
        break;
    default:
        break;
    }
}

