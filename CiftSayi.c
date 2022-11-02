#include <stdio.h>
int main()
{  
   int sayi,toplam; 
   toplam=0;

     printf("Sayiyi giriniz : ");
     scanf ("%d",&sayi);
    for(int i=0; i <=sayi ; i++)
     {
        if(i%2==0)
       {
       printf("%d\n",i); 
       toplam=toplam+i;
       }
     }
     printf("\n0 sayisindan %d sayisina kadar olan cift sayilarin toplami : %d",sayi,toplam);
 
    return 0;
}
