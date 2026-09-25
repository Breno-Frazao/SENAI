#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

struct Produto{
    char nome[50];
    float preco;
    int quantidade;
    double total;
};
void main(){
    struct Produto p[6];
   
    strcpy(p[0].nome, "Caneta"); p[0].preco = 28.9; p[0].quantidade = 100;
    strcpy(p[1].nome, " Caderno"); p[1].preco = 28.9; p[1].quantidade = 100;
    strcpy(p[2].nome, "Lapis"); p[2].preco = 28.9; p[2].quantidade = 100;
    strcpy(p[3].nome, "Borracha"); p[3].preco = 28.9; p[3].quantidade = 100;
    strcpy(p[4].nome, " Regua"); p[4].preco = 28.9; p[4].quantidade = 100;
    strcpy(p[5].nome, "Apontador"); p[5].preco = 28.9; p[5].quantidade = 100;
 
 double total = 0;
 for(int i=0; i < 6; i++){
      p[i].total = p[i].preco * p[i].quantidade;
      total += p[i].total;
      printf("%s\t%.2f\%d\t%.2f\n", p[i].nome,p[i].preco, p[i].quantidade, p[i].total );
      
      
 }
          printf("Total geral R$ %2.f", total);
    getch();
}