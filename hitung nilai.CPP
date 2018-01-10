#include <stdio.h>
#include <conio.h>
#include <iostream.h>

	main()
   {
   float a,b,c,d,e;
   cout <<"  Masukan Absen	:";cin>>a;
   cout <<"  Masukan Tugas	:";cin>>b;
   cout <<"  Masukan UTS	:";cin>>c;
   cout <<"  Masukan UAS	:";cin>>d;
   a=a*0.2;
   b=b*0.25;
   c=c*0.25;
   d=d*0.3;
   e=a+b+c+d;

	clrscr();

   cout <<"=======================\n";
   cout  <<"      NILAI AKHIR     \n";
   cout <<"=======================\n";
   cout <<"\n    HASIL AKHIR     :"<<e<<ends;

   IF e>75 "LULUS";
   else "TIDAK LULUS";
   getch();
   }