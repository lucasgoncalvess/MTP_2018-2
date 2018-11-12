//Lucas Gonçalves e Silva 
//11811EAU016

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#define r 1
#define pi 3.14159265359

typedef struct {
  float x, y;
}Ponto;

int main(){
   int N, i; 
   Ponto *xy;
   scanf("%i", &N);getchar();
   xy= (Ponto *) malloc(N*sizeof(Ponto));
   printf("%i retorna \" ",N);

   for(i=0; i<N; i++){
     xy->x= r*cos(i*2*pi/(N));
     xy->y= r*sin(i*2*pi/N);
     printf("(%.3f, %.3f) ", xy->x, xy->y);
   }
   printf("\" ");
   free(xy);
   return 0;
}