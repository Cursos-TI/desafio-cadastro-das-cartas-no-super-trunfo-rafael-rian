#include <stdio.h>




void moverTorre(int casas){
    if(casas>0){printf("Direita\n"); moverTorre(casas-1);}   //função recursiva para mover a torre
}
void moverBispo(int casas){ //função recursiva para mover o bispo e com loops aninhados
for(int i=0; i<casas; i++){
    printf("Cima\n");
    for(int x=0; x<1; x++){printf("Direita\n");}
}
}
void moverRainha(int casas){ //função recursiva para mover a rainha
    if(casas>0){printf("Direita\n"); moverRainha(casas-1);}
}


int main() {
printf("MOVIMENTO DA TORRE:\n");  //chamando as funções de movimento
moverTorre(5);
printf("\nMOVIMENTO DO BISPO\n");
moverBispo(5);
printf("\nMOVIMENTO DA RAINHA\n");
moverRainha(8);   


int movimento=0; //criei a variavel movimento para executar o while ao menos uma vez dentro do while há outro loop e um contador
printf("\nMOVIMENTO DO CAVALO\n");
while(movimento<1){
    int contador=0;
    for(int x=0;x<2;x++){printf("Cima\n"); contador++; if(contador==2){printf("Direita\n");}} //esse outro loop imprimi duas vezes a palavra "cima" e incrementa o contador duas vezes
    movimento++;    //quando o contador atinge o numero dois a condição if se torna verdadeira e imprime "direita"
}

return 0;
}
