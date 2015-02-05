#include <stdio.h>
int dime(float *b)
{
  *b/=2;  
  return *b;  
    }

int main(){
  float a;
  
  printf("Inserisci un numero (a): ");
  scanf("%f",&a);
  
  dime(&a);
  
  printf("Il numero diemzzato e': %5.2f", a);
  system("pause");
  
}

//5.2 serve ad approssimare un numero e si mette sempre tra la % e l'identificatore.
