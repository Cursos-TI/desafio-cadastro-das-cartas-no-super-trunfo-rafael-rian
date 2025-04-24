#include <stdio.h>



int main(){
    
    
    
int tabuleiro[10][10];

for(int i=0;i<10;i++){      // declarando e inicializando tabuleiro 
    for(int j=0;j<10;j++){
        tabuleiro[i][j]=0;
    }
}


int navio[3]={3, 3, 3}; //navio horizontal

for(int a=0;a<1;a++){ //navio horizontal 1
    for(int b=0;b<3;b++){
        tabuleiro[a][b]+=navio[b];
    }
}
for(int a=2;a<3;a++){ //navio horizontal 2
    for(int b=0;b<3;b++){
        tabuleiro[a][b]+=navio[b];
    }
}

int naviodiagonal[3]={3, 3, 3};  


for(int a=0;a<3;a++){ //navio diagonal 1
    for(int b=4;b<7;b++){
        if(b==a+4){tabuleiro[a][b]+=naviodiagonal[b-4];}
     
    }
}

for(int a=4;a<7;a++){ //navio diagonal 2
    for(int b=0;b<3;b++){
        if(a==b+4){tabuleiro[a][b]+=naviodiagonal[b];}
     
    }
}

















for(int i=0;i<10;i++){ //imprime o tabuleiro
    for(int j=0;j<10;j++){
        printf("%d ",tabuleiro[i][j]);
    }
printf("\n");
}     
    
return 0;


}