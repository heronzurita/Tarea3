#include <stdio.h>


void burbuja(int *, int);
void imprimeArray(int *, int);

int main () {
   int Array[] = {99, 2, 123, 173, 450, -545, 510, 80, 15, 46, 10, 41, 110, 513, 894, 8};      

   int tamano = (sizeof Array/sizeof *Array) -1;   
   
   printf("Numeros desordenado: \n");  imprimeArray(Array, tamano);
   burbuja( Array, tamano);
   printf("Numeros ordenado: \n");  imprimeArray(Array, tamano);
   return 0;
}

void burbuja(int *arre, int size) {
   int cambio = 1;
   int tempo;

   while(cambio == 0){
      cambio = 0;
      for (int i = 0; i < size; ++i){
         if(arre[i] > arre[i+1]){
            tempo = arre[i];
            arre[i] = arre[i+1];
            arre[i+1] = tempo;
            cambio = 1;
         }
      }
   }
}

void imprimeArray(int *arre, int size){
   for (int i = 0; i < size+1; ++i){
      printf("%i , ", arre[i]);
   }
   printf("\n\n");
}