#include <stdio.h>
int LongitudCadena01 (char cad[]){
   int i = 0;
   while(cad[i]) i++;
   return i;
}
int LongitudCadena02 (char cad[]){
  int i;
  for (i=0; cad[i] !=0 ; i++);
  return i;
}
int LongitudCadena03 (char cad[]){
  int i = 0;
  do{
    i++;
  }while(cad[i] != 0);
  return i;
}
int main(void) {
  
  char Palabra[] = "Tommy";

  int Longitud_01 = LongitudCadena01(Palabra);
  printf("Función 01 La longitud es de %s es de: %d\n", Palabra, Longitud_01);
  int Longitud_02 = LongitudCadena02(Palabra);
  printf("Función 02 La longitud es de %s es de: %d\n", Palabra, Longitud_02);
  int Longitud_03 = LongitudCadena03(Palabra);
  printf("Función 03 La longitud es de %s es de: %d\n", Palabra, Longitud_03);
  
  return 0;
}
