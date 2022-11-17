#include <stdio.h>
int main()
{
 int sayi,basamak;
 printf(">");
 scanf("%d",&sayi);

 for(int i=0;i<=sayi;i++)
 {
  basamak=sayi%10;
  sayi=sayi-basamak;
  sayi=sayi/10;
  printf("Basamak : %d\n",basamak);
 }

return 0;
}
