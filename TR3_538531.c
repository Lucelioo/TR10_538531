#include <stdio.h>
#include <stdlib.h>

int main(){
   
     //Variáveis que serão utilizadas
     unsigned int x[157];
     int y;
     int z;
     int k;
     int w;
     int j;
     int i;
     
     y = 0;
     i = 0;
     j = 0;
     
     while(i<157){//criação do vetor
         x[i] = 0;
         i++;
     }
   
     printf("Digite numeros entre 0 e 5000: \n");
     
     while(y != -1){//laço utilizado para armazenar os numeros digitados
       scanf("%d", &y);
       w = y / 32;
       if((y!=-1)&&(y>=0 && y<= 5000)){
           x[w] = x[w] | (1 << (y-(32*w)));
           if(y>i){
           i = y;
        }
       }
     }
     
     printf("Numeros Digitados: \n");
     
     while(y<=i){//função para andar no vetor após o número ser digitado
       if((x[j] >> (y-(32*j))) & 1){
         printf("%d\n", y);
       }
       y++;
       j = y / 32;
     }
  return 0;  
}
