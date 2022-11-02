#include <stdio.h>
int main()
{
  double sayac;
  double carpim;
  int i;
   printf("sayi gir : ");
   scanf("%lf",&sayac);
   carpim=1;
   i=1;
   while(i<=sayac)
   {
    carpim=carpim*i;

    printf("%d! = %.0lf\n",i,carpim);
      i++;
   }

    return 0;
}
