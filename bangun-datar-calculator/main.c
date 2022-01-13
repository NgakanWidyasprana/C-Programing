#include <stdio.h>
#include <stdlib.h>

/* Header Liblary */
#include "resources/menu.c"

int main()
{
    int status=0;
    int pilihan;
    while(!status)
    {
        /* Calling procedure "menu.c" */
        menu();
        
        scanf("\n%d",&pilihan);
        getchar();

        switch(pilihan)
        {
            case 1:
                printf("\n Berhasil \n");
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