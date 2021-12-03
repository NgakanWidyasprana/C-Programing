#include <stdio.h>
#include <stdlib.h>

/*
    Ngakan Putu Widyasprana
    2008561033
    Informatika-B
                            */

//Fungsi yang digunakan
void tambah();
void display();
void urutkan();
void cari();

//Deklarasi Struct
typedef struct Data
{
  char nama[30];
  int nim;
  char kelas;

}mahasiswa;

mahasiswa *ilkom[10];

int main ()
{
    int status,pilih,n,search;
    char ulang;

    //Menu
    while(status=1)
    {
        system ("cls");
        printf ("          Menu Program:\n\n");
        printf ("       [1] Tambah data\n");
        printf ("       [2] Urutkan Data\n");
        printf ("       [3] Cari Data\n");
        printf ("       [4] Lihat Data\n");
        printf ("       [5] Keluar program\n\n");
        printf ("          #Pilih: ");
        scanf  ("%d",&pilih);

        switch (pilih)
        {
            case 1:
                printf ("\nJumlah data yang ingin dimasukkan: ");
                scanf  ("%d",&n);
                printf ("\n");
                getchar();
                tambah(n);
                break;
            case 2:
                urutkan(n);
                display(n);
                break;
            case 3:
                printf ("\nMasukan NIM yang dicari: ");
                scanf  ("%d",&search);
                cari(n,search);
                break;
            case 4:
                display(n);
                break;
            case 5:
                return 0;
                break;
            default:
                printf ("\nPilihan Salah,Silahkan Ulangi\n");
        }

        printf ("\nApakah anda ingin mengulang ?[y/t]\n");
        printf ("Pilihan: ");
        scanf  ("%c",&ulang);
        getchar();

        if (ulang=='y' || ulang=='Y'){
            status=1;
        }else if (ulang=='t' ||ulang=='T'){
            status=0;
        }
    }
}

//Fungsi Menambahkan Data
void tambah(int s)
{
    int i=0;
    while (i<s)
    {
        printf ("Masukan Nama  : ");
        scanf  ("%[^\n]",ilkom->nama);
        getchar();

        printf ("Masukan Nim   : ");
        scanf  ("%d",ilkom->nim);
        getchar();

        printf ("Masukan Kelas : ");
        scanf  ("%c",ilkom->kelas);
        getchar();

        i++;
        printf ("\n");
    }
}

/*
    Pengurutan Menggunakan Metode
          BUBBLE SORT

  #temp disini akan berfungsi sebagai
   tempat pertukaran data yang ingin
   ditukar.
                                       */
void urutkan (int s)
{
    int i,j;
    mahasiswa temp;

    for (i=0;i<s-1;i++){
        for (j=0;j<(s-1-i);j++){
            if (ilkom[j]->nim > ilkom[j+1]->nim){
                temp = ilkom[j];
                ilkom[j]=ilkom[j+1];
                ilkom[j+1]=temp;
            }
        }
    }
}

/*
    Pencarian Menggunakan Metode
        SEQUENSIAL SEARCH

    #Metode ini mulai mencari nilai
     dari larik atau indeks yang
     terkecil terlebih dahulu sampai
     indkes terakhir.                 */

/*

void cari(int s,int number)
{
    int i,j=1;
    printf ("\nData :\n\n");
    for (i=0;i<s;i++){
        if (ilkom[i].nim==number){  //membandingkan dimilai dari i[0]
            printf ("%d.[%s]-[%d]-[%c]\n",j,ilkom[i].nama,ilkom[i].nim,ilkom[i].kelas);
            j++;
            return;
        }
    }
    printf ("\nData tidak ditemukan!\n");
}

*/

// Fungsi menampilkan
void display(int s)
{
    int i=1;
    printf ("\nData Mahasiswa\n\n");

    for (int j=0;j<s;j++){
        printf ("%d. Nama : %s\n",i,ilkom->nama);
        printf ("   NIM  : %d\n",ilkom->nim);
        printf ("   Kelas: %c\n\n",ilkom->kelas);
        i++;
    }

}

