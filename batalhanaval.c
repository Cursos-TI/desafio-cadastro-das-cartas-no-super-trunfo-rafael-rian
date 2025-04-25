#include <stdio.h>



int main(){
    
    
    

//---------------------------------------------------------------
int cruz[5][5];            // criando a cruz e as condições para imprimir o numero no lugar certo 
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i==2){cruz[i][j]=4;}else if(j==2){cruz[i][j]=4;}else{cruz[i][j]=0;}
    }
}
                                                                            

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",cruz[i][j]);
    }
printf("\n");
}
printf("\n");

//---------------------------------------------------------------

int cone[3][5];                   // criando o cone e as condições para imprimir o numero no lugar certo 
for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        if(i==2){cone[i][j]=1;}else if(j==2){cone[i][j]=1;}else if(i==1 && j<4 && j>0){cone[i][j]=1;}else{cone[i][j]=0;}

    }
}


for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        printf("%d ",cone[i][j]);
    }
printf("\n");
}
printf("\n");

//---------------------------------------------------------------

int octaedro[5][5];  // criando o octraedo e as condições para imprimir o numero no lugar certo 

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i==2){octaedro[i][j]=2;}else if(j==2){octaedro[i][j]=2;}else if(i==1 && j<4 && j>0){octaedro[i][j]=2;}else if(i==3 && j<4 && j>0){octaedro[i][j]=2;}else{octaedro[i][j]=0;}

    }
}

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",octaedro[i][j]);
    }
printf("\n");
}
printf("\n");

//---------------------------------------------------------------




int tabuleiro[10][10];

for(int i=0;i<10;i++){      // declarando e inicializando tabuleiro 
    for(int j=0;j<10;j++){
        tabuleiro[i][j]=0;
    }
}


for(int i=0;i<5;i++){      // imprimindo a cruz no tabuleiro
    for(int j=0;j<5;j++){
        tabuleiro[i][j]+=cruz[i][j];
    }
}
 
for(int i=6;i<9;i++){      // imprimindo o cone no tabuleiro          // como a matriz 10x10 possui numero de linhas e colunas diferente da dos ataques eu precisei ajustar subtraindo numeros para que desse certo
    for(int j=0;j<5;j++){
        tabuleiro[i][j]+=cone[i-6][j];
    }
}

for(int i=3;i<8;i++){      // imprimindo o octraedo no tabuleiro  
    for(int j=5;j<10;j++){
        tabuleiro[i][j]+=octaedro[i-3][j-5];
    }
}

int navio[3]={3,3,3};               // imprimindo o navio no tabuleiro 
for(int i=0;i<1;i++){
    for(int j=6;j<9;j++){
        tabuleiro[i][j]+=navio[j-6];
    }
}

char letras[10]={'A','B','C','D','E','F','G','H','I','J'}; // para marcas as colunas
for(int i=0;i<10;i++){printf("%c ",letras[i]);}
printf("\n");

int numeros[11]={1,2,3,4,5,6,7,8,9,10}; //para marcar as linhas


for(int i=0;i<10;i++){ //imprime o tabuleiro
    for(int j=0;j<10;j++){
        printf("%d ",tabuleiro[i][j]);
    }
printf("%d",numeros[i]);
printf("\n");
}     
    
return 0;


}