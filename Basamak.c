#include <stdio.h>
int main()
{
 int sayi,toplam,bas1,bas2,bas3,bas4;
  printf("4 basamakli ve rakamlari farkli bir sayi gir : ");
  scanf("%d",&sayi);

  
 if(999<sayi&&sayi<10000)
{
  bas1=sayi%10;
  bas2=sayi%100-bas1;
  bas3=sayi%1000-bas1-bas2;
  bas4=sayi%10000-bas1-bas2-bas3;
  bas2=bas2/10;
  bas3=bas3/100;
  bas4=bas4/1000;
  if(bas1==bas2||bas1==bas3||bas1==bas4||bas2==bas3||bas2==bas4||bas3==bas4)
  {
  printf("Girdiginiz sayinin rakamlari farkli olmali !");
  }
  else
  {toplam=bas1+bas2+bas3+bas4;

  printf("Birler basamagi : %d\nOnlar basamagi : %d\nYuzler basamagi : %d\nBinler basamagi : %d",bas1,bas2,bas3,bas4);
  printf("\nBasamaklar toplami : %d",toplam);
  }
 }

  else 
   printf("Girdiginiz sayi 4 basamakli olmali !");
  
return 0;
}