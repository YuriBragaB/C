#include <stdio.h>

// tem como passar a msm variável para uma função, por meio do &(pega o endereço de memória)
// & pode ser utilizado para conferir o endereço , se for passado como argumento em um printf
// ponteiros sãio utilizados para passar uma variável de uma function para outra, mantendo o msm endereço, assim podendo alterar a variável original
// C lida diretamente com a memória, por meio dos ponteiros
// c++ e java utilizam muito os ponteiros


// variável c da função calcula n é um inteiro, é um PONTEIRO para um inteiro
void calcula (int* c) { // utiliza o * para sinalizar que vai vir um endereço de memória
    printf("calcula %d %d\n", (*c), c); // pega o conteúdo(*) e o endereço de memória
    (*c) ++;// entra no endereço de memória, para pegar o conteúdo é necessário pegar o endereço pelo * , entre parênteses
    printf("calcula %d %d\n", (*c), c);
}

int main() {
    int c = 10;

    printf("main: %d %d\n", c);
    calcula(&c); // assim passa o endereço de memória da variável c do main()
    printf("main: %d %d\n", c); 
    
}