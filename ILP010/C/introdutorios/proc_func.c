#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
  float capt_val(char v){
      float x;
  printf("Informe o valor do parametro %c:\n", v);
  scanf("%f",&x);
  return (x);
  }
  system("cls");

  a=capt_val('a');
  b=capt_val('b');

  printf("Soma de %.2f e %.2f: %.2f\n", a,b,(a+b));

    return (0);
}
