// char letra1 = 'M'; // para a variável ser um char é necessário ser aspas simples, aspas duplas cria uma str
// em C não existe strings, para criar uma string é necessário criar um array
// string é um array de caracteres!
// os  arrays são declarados iguais as variáveis, porém é necessário passar o tamanho do array
// array de char pode ser visto como uma str
// loop do while, faça quando..., primeiro executa dps ve a condição
    // palavra_secreta[0] ='M';
    // palavra_secreta[1] ='E';
    // palavra_secreta[2] ='L';
    // palavra_secreta[3] ='A';
    // palavra_secreta[4] ='N';
    // palavra_secreta[5] ='C';
    // palavra_secreta[6] ='I';
    // palavra_secreta[7] ='A';
    // palavra_secreta[8] = '\0'; // caractere especial que marca o final da string, permite printar certo

    //printf("%s", palavra_secreta); // facilita mostrar uma string, impede que faça diversas mascarars para mostrar uma string, com diversos %c


#include <stdio.h> // pega algumas funções(printf, scanf, etc...)
#include <string.h> // pega funções relacionadas as strings
#include <ctype.h> // tem a função touuper()


int main() {
    char palavra_secreta[20] = "MELANCIA";
    palavra_secreta[8] = '\0'; // sinaliza o fim da str
    char forca[strlen(palavra_secreta) + 1];
    forca[strlen(palavra_secreta)] = '\0'; // sinaliza o fim da str

    
    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;



    while(!acertou && !enforcou){

        for ( int i = 0; i < strlen(palavra_secreta); i ++) { //strlen pega o tamanho da str
            
            int achou = 0; // ótima saida, é bom ter isso em mente, criar variáveis para sair de situações difíceis

            for(int j = 0; j < tentativas; j++) { // é declarado como j, pois já existe o i
                if(toupper(chutes[j]) == palavra_secreta[i]) {
                    achou = 1;
                    break;
                }
            }

            if (achou) {
                printf("%c ", palavra_secreta[i]);
            } else {
                printf("_ ");
            }
            if (tentativas == 0) {
                continue;
            }
        }
        printf("\n");

        char chute;
        printf("Digite uma letra\n");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas ++;
    }
}