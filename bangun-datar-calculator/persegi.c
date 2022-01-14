#include <stdio.h>
#include <stdlib.h>

//  Variabel
    float sisi;

void luasPersegi()
{   
    system("cls");
    printf("Masukan Sisi : ");
    scanf("%f",&sisi);
    getchar();

    printf("\nLuas Persegi : %f",sisi*sisi);
    getchar();
}

void kelilingPersegi()
{
    system("cls");
    printf("Masukan Sisi : ");
    scanf("%f",&sisi);
    getchar();

    printf("\nKeliling Persegi : %f",4*sisi);
    getchar();
}

void persegi()
{   
    //  Variabel
        int status = 0;
        int pilihan;

    while(!status)
    {   
        system("cls");
        printf("\n[1] Menghitung Luas ");
        printf("\n[2] Mengihitung Keliling");
        printf("\n[3] Keluar ");
        printf("\n\nPilihan : ");
        scanf("%d",&pilihan);
        getchar();

        switch(pilihan)
        {
            case 1:
                luasPersegi();
                break;
            case 2:
                kelilingPersegi();
                break;
            case 3:
                return;
                break;
            default:
                break;
        }
    }
}

