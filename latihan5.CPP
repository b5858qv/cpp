#include <stdio.h>
#include <conio.h>
main()
{

 
 int nilai,tugas,nama;

 printf("Masukan Nama:");scanf("%d",&nama);
 printf("Masukan Sebuah Nilai:");scanf("%d",&nilai);
 printf("Masukan Nilai Tugas:");scanf("%d",&tugas);

if(nilai>70)
 printf("lulus \n");
else
 printf("Tidak Lulus");

getch();
}