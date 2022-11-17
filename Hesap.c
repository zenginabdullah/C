#include <stdio.h>
int main()
{
 int islem,islem1;
 double sayi1,sayi2,toplam,temp,carpim;
 toplam=0;
 temp=0;
 carpim=1;

 girdi:;
 printf("Yapmak istediginiz islemi seciniz : \n");
 printf("1.Toplama\n");
 printf("2.Cikartma\n");
 printf("3.Carpma\n");
 printf("4.Bolme\n");
 printf("5.Faktoriyel\n");
 printf("6.iki sayi arasi toplam\n");
 printf("-------------------------------------------------\n");
 printf(">");
 
 scanf("%d",&islem);
 
  if(islem!=1&&islem!=2&&islem!=3&&islem!=4&&islem!=5&&islem!=6)
     {
      printf("Bu islem tanimli degildir! Lutfen tanimli bir islem seciniz.\n\n");
      goto girdi;
     }
  else if(islem==6)
  {
   girdi2:;
   printf("-------------------------------------------------\n");
   printf("1. n sayisina kadar olan tum tam sayilarin toplami : \n");
   printf("2. n sayisina kadar olan cift tam sayilarin toplami : \n");
   printf("3. n sayisina kadar olan tek tam sayilarin toplami : \n");
   printf("Yapmak istediginiz islemi seciniz : \n");
   printf(">");
   scanf("%d",&islem1);
   if(islem1!=1&&islem1!=2&&islem1!=3)
   { 
   printf("Bu islem gecersizdir! Lutfen gecerli bir islem seciniz.\n");
   goto girdi2;
   }
   else
   { 
   switch(islem1)
    {
     case 1:
     {
      printf("Arasindaki tum tam sayilari toplamak istediginiz sayilari giriniz : \n");
      printf(">");
      scanf("%lf",&sayi1);
      printf(">");
      scanf("%lf",&sayi2);
      if(sayi1>sayi2)
      {
       temp=sayi1;
       sayi1=sayi2;
       sayi2=temp;
      }
      for(int i=sayi1;i<=sayi2;i++)
      {
       toplam=toplam+i;
      }
      printf("Sonuc : %.0lf",toplam);
     }
     break;
     case 2:
     {
      printf("Arasindaki tum cift sayilari toplamak istediginiz sayilari giriniz : \n");
      printf(">");
      scanf("%lf",&sayi1);
      printf(">");
      scanf("%lf",&sayi2);
      if(sayi1>sayi2)
      {
       temp=sayi1;
       sayi1=sayi2;
       sayi2=temp;
      }
      for(int i=sayi1;i<=sayi2;i++)
      {
       if(i%2==0)
       {
        toplam=toplam+i;
       }
      }
     printf("Sonuc : %0.lf",toplam);
     }
     break;
    case 3:
    {
      printf("Arasindaki tum tek sayilari toplamak istediginiz sayilari giriniz : \n");
      printf(">");
      scanf("%lf",&sayi1);
      printf(">");
      scanf("%lf",&sayi2);
      if(sayi1>sayi2)
      {
       temp=sayi1;
       sayi1=sayi2;
       sayi2=temp;
      }
      for(int i=sayi1;i<=sayi2;i++)
      {
       if(i%2!=0)
       {
        toplam=toplam+i;
       }
      }
     printf("Sonuc : %0.lf",toplam);
     }
    }
  }   
 }
  else
     {
      switch(islem)
     {
      case 1:
      { 
       printf("Toplamak istediginiz sayilari giriniz : \n");
   
       for(int i=1;i<=1000;i++)
       {
        printf(">");
        scanf("%lf",&sayi1);
        toplam+=sayi1;
        printf("Sonuc %0.1lf\n",toplam);
       }
      }
      case 2:
      {
       printf("Cikartmak istediginiz sayilari giriniz : \n");
       
       for(int i=1;i<=1000;i++)
       {
        printf(">");
       scanf("%lf",&sayi1);
        toplam-=sayi1;
        printf("\nSonuc : %.0lf",toplam);
       }  
      }
      case 3:
      {
       printf("Carpmak istediginiz sayilari giriniz : \n");
       
       for(int i=1;i<=1000;i++)
       {
        printf(">");
        scanf("%lf",&sayi1);
        carpim*=sayi1;
        printf("\n Sonuc : %0.lf",carpim);
       }
       
      }
      case 4:
      {
       printf("Bolmek istediginiz sayilari giriniz : \n");
       printf(">");
       scanf("%lf",&sayi1);
      for(int i=1;i<=1000;i++)
       {
        printf("\n>");
        scanf("%lf",&sayi2);
        sayi1/=sayi2;
        printf("\n Sonuc : %0.3lf",sayi1);
       }
      }
      case 5:
      {
       printf("Faktoriyelini bulmak istediginiz sayiyi giriniz : \n");
       printf(">");
       scanf("%lf",&sayi1);
       for(int i=1;i<=sayi1;i++)
       {
        carpim*=i;
        printf("\n%d! = %0.lf",i,carpim);
       }
      
      
      }
     }
    }
return 0;
}