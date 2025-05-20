#include <stdio.h>

 /**
  * torre:
  *   Move a Torre para a direita.
  * @param passos: número de casas restantes para mover.
  */
 void torreRecursiva(int passos) {
     if (passos <= 0) {
         // Base da recursão: sem mais passos
         return;
     }
     printf("Direita\n");        // Imprime o movimento atual
     torreRecursiva(passos - 1);  // Chamada para próximo passo
 }
 
 /**
  * rainhaRecursiva:
  *   Move a Rainha para a esquerda de forma.
  * @param passos: número de casas restantes para mover.
  */
 void rainhaRecursiva(int passos) {
     if (passos <= 0) return;     // Base da recursão
     printf("Esquerda\n");      // Movimento para a esquerda
     rainhaRecursiva(passos - 1); // Próximos passos
 }
 
 /**
  * bispoLoops:
  *   Move o Bispo na diagonal cima-direita usando recursão
  *   e loops aninhados para separar vertical e horizontal.
  * @param passos: número de passos diagonais.
  */
 void bispoRecursivoLoops(int passos) {
     if (passos <= 0) return;     // Base da recursão
     // Movimento diagonal: 1 casa para cima e 1 para a direita
     // Loop externo: passo vertical (Cima)
     for (int v = 0; v < 1; v++) {
         printf("Cima\n");      // Passo vertical
         // Loop interno: passo horizontal (Direita)
         for (int h = 0; h < 1; h++) {
             printf("Direita\n");
         }
     }
     // Recursão para continuar o movimento diagonal
     bispoRecursivoLoops(passos - 1);
 }
 
 /**
  * movimentoCavaloComplexo:
  *   Simula o movimento em L do Cavalo: 2 casas para cima,
  *   e em seguida 1 casa para a direita, usando loops complexos.
  */
 void movimentoCavaloComplexo() {
     printf("\nMovimento do Cavalo (2 casas para Cima, 1 para Direita):\n");
     
     // Loop "for" externo executa três tentativas de movimento
     for (int t = 0; t < 3; t++) {
         if (t < 2) {
             // Nas duas primeiras iterações, movemos o Cavalo para cima
             printf("Cima\n");
             continue; // Volta ao início para o próximo "Cima"
         }
         // Na terceira iteração, movemos o Cavalo para a direita
         printf("Direita\n");
         break; // Encerramos o loop após concluir o movimento em L
     }
 }
 
 int main() {
     int casasTorre = 5;  // Define quantas casas a Torre deve andar
     printf("Movimento da Torre (%d casas para a Direita):\n", casasTorre);
     torreRecursiva(casasTorre);  // Chama a função recursiva
 
     printf("\n"); // Separador entre seções
 
     int casasBispo = 5;  // Define quantos passos diagonais o Bispo dará
     printf("Movimento do Bispo (%d casas na Diagonal Cima Direita):\n", casasBispo);
     bispoRecursivoLoops(casasBispo);  // Função recursiva com loops aninhados
 
     printf("\n"); // Separador
 
     int casasRainha = 8; // Define quantas casas a Rainha deve andar
     printf("Movimento da Rainha (%d casas para a Esquerda):\n", casasRainha);
     rainhaRecursiva(casasRainha);  // Executa recursão para movimento linear
 
     printf("\n"); // Separador
 
     movimentoCavaloComplexo();  // Simula o movimento em L com loops complexos
 
     return 0; // Finaliza o programa
 }
 