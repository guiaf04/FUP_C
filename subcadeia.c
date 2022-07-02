#include <stdio.h>

int main(){
    
    char texto[101];
    scanf("%[^\n]", texto);
    
    char chave[101];
    scanf(" %[^\n]", chave);
    
    int tam1 = 0;
    while(texto[tam1] != '\0')
        tam1++;
        
    int tam2 = 0;
    while(chave[tam2] != '\0')
        tam2++;
        
    int j = 0, cont = 0, posicao = 0;
    
    for(int i = 0; i < tam1, j < tam2; i++){
        
        if(texto[i] == chave[j]){
            posicao = i;
            cont++;
            j++;
        }
        else{             // é necessário reiniciar pois caso o seguinte não seja igual, então ainda não achamos a chave
            posicao = 0;
            cont = 0;
            j = 0;
        }
        
    }
    
    if(cont == tam2){
        int aux = posicao - tam2 + 1;
        if(aux > tam1){
            printf("-1"); // evitar que ele imprima posições maiores que o tamanho do vetor
        }
        else
        printf("%d", aux);
    }
    else
        printf("-1");
} 
