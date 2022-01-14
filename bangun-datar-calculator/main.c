#include <stdio.h>
#include <stdlib.h>

/* Header Liblary */
#include "resources/menu-utama.c"
#include "persegi.c"
#include "segitiga.c"

int main()
{
    int status=0;
    int pilihan;
    
    while(!status)
    {
        /* Calling procedure "menu.c" */
        menu();
        
        scanf("%d",&pilihan);
        getchar();

        switch(pilihan)
        {
            case 1:
                persegi();
                getchar();
                break;
            case 2:
                segitiga();
                getchar();
                break;
            case 3:
                return 0;
                break;
            default:
                printf("\n Tidak Berhasil \n");
                getchar();
                break;
        }
    }
}