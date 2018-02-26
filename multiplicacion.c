#include<stdio.h>
#include<stdlib.h>


int multiplicar(int a, int b){
  
  int i, resultado = b;
  
  for(i = 1; i < a; i++){
      resultado += b;
  }
  
  return resultado;

}

int main() {
 int a, b, resultado;

 printf("digite el primer numero\n");
 scanf("%d",&a);
 
 printf("digite el segundo numero\n");
 scanf("%d",&b);

 resultado = multiplicar(a, b);
 printf("el resultado de multiplicar %d y %d es : %d \n", a, b, resultado);

 return 0;
}
