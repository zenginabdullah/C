#include <stdio.h>
int main()
{
  int not,ogrenciSayisi,sayac;
  float ortalama,toplam;
   
   toplam=0;
   sayac=0;
   printf ("Ogrenci sayisi giriniz : ");
   scanf ("%d",&ogrenciSayisi);
   
  while (sayac<ogrenciSayisi)
  {
  printf ("Not giriniz : ");
   scanf("%d",&not);
   sayac = sayac + 1;
   toplam=toplam+not;
  } 
  
   
   ortalama=toplam/ogrenciSayisi;
  
   printf("Not ortalamasi : %.2f",ortalama);
    return 0;
}