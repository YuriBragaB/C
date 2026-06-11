// C n tem identação obrigatória, é tipada, é necessário executar no terminal o compilador(gcc)
// compilador transforma a linguagem para binário, assim fazendo que o computador entenda a linguagem C
// para compilar é necessário ir para o terminal e digitar gcc + nome_do_arquivo.linguagem -o(para onde vai escrever o arquivo = -o) nome_do_arquivo.exe, se não retornar nada significa que a compilação deu certo
// quando altera o código é necessário compilar de novo
// main é a função principal
// toda linha termina com ;
// para encrever a baixo é necessário o \n, \n em C é um enter 
// se não colocar \n concatena
// em C tem diferença entre aspas simples e aspas duplas
// se tiver algo errado o compilador fala
// o compilador fala em qual linha e caractere está o erro(linha:caractere)
// ao definir uma variável em C é necessário tipar, para tipar é necessário colocar o tipo antes do nome da variável
// %d faz o mesmo que una templente string ou um print formatado, é necessário passar como parâmetro o nome da variável
// é possível fazer a atribuição da variável só dps, pode ser criada e não definida
// ao ser definida é possível alterar o valor da variável no decorer do código
// scanf é tipo o input, porém recebe dois parâmetros, quando for passar a variável é necessário um & antes do nome dela
// %d é uma máscara para o inteiro
// & (e comercial) é o operador de endereço, usado para obter a posição de memória de uma variável
// a main() é o ponto de partida, todo código começa por ela
// % é chamada de máscara
// é possível passar mais de uma mascara
// if(condição){bloco de código} | else{bloco de código} | else if(condição) {}. lembra MUITO o do JS
// 1 é true, 0 é false
// valores booleanos são guardados em int pois são 0 ou 1
// escopo é igual ao bloco de código
// for parece MUITO com o do JS
// sintaxe de C parece com a de JS
// tudo que começa com # é chamado de diretiva
// #define TENTATIVAS, define uma contante, tipo o const do JS
// continue é tipo um break , porém ele ainda continua executando o resto do loop

#include <stdio.h> // pega da biblioteca stdio.h(le o código)
#define NUMERO_DE_TENTATIVAS 5

int main(void) {
    int numero_secreto = 42; // numero_secreto foi tipada como int
    int tentativa;

    printf("---------------------------------------\n"); // \n é necessário para n concatenar
    printf("Bem vindo ao nosso jogo de advinhação!\n"); // printf() é o print de C
    printf("---------------------------------------\n");
    
    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i ++){ // fazer um while dps e um contador
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("\nQual é o seu chute? \n");
        scanf("%d", &tentativa);

        if (tentativa < 0){
            printf("Você n pode chutar números negativos");
            i --; // desconsidera a tentativa com número negativo

            continue;
        }
        if(tentativa == numero_secreto) {
            printf("\nParabéns, você acertou(o número era %d)\n", numero_secreto);

            break;
        } 
        else {
            printf("\nVocê errou, o número %d não é o número secreto\n", tentativa);

            if (tentativa < numero_secreto) {
                printf("\nO número secreto é maior\nTente novamente!\n");
            } 
            else {
                printf("\nO número secreto é menor\nTente novamente!\n");
                }    
            }
        }
    printf("Fim do jogo!");
    return 0;
    }
