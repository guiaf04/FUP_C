#include <stdio.h>

void inverte_palavra(char texto[201], char inverso[201], int inicio, int final) {
    for(int i = inicio, j = final; i <= final; i++, j--)
        inverso[i] = texto[j];
}

int pega_final_palavra(char texto[201], int inicio, int final) {
    while(texto[final] != ' ' && texto[final] != '\0'){
        final++;
    }

    final--;
    return final;
}

int pega_tamanho(char texto[201]) {
    int tam = 0;
    while(texto[tam] != '\0')
        tam++;

    return tam;
}

void inverte_palavras(char texto[201], char inverso[201]) {
	int tam = pega_tamanho(texto);

    int inicio = 0;
    int final = 0;
    
    while(inicio < tam){
    	final = pega_final_palavra(texto, inicio, final);
        inverte_palavra(texto, inverso, inicio, final);
        
        inverso[final + 1] = ' ';
        inicio = final + 2;
        final = inicio;
    }
    
    inverso[final - 1] = '\0';
}

int main(){
    char texto[201];
    char inverso[201];
    scanf("%[^\n]",texto);

    inverte_palavras(texto, inverso);
    
    printf("%s", inverso);
}    
