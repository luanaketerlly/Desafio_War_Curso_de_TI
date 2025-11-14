//===============================================================
//
//           PRÁTICA: JOGO WAR 
// 
//   OBJETIVO: CONSTRUIR UM PROGRAMA QUE CADASTRE 
//            OS TERRITÓRIOS DO NOSSO MUNDO, CORES REPRESENTANTES E QUANTIDADE DE TROPAS DE CADA
//          E SIMULAR ATAQUES ENTRE OS TERRITÓRIOS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

 //DEFININDO TAMANHO DA STRUCT
 #define TAM 5 

 //CRIANDO A STRUCT PARA ARMAZENAR OS DADOS DOS TERRITORIOS
    struct territorio{
     char nome [30];
      char cor [10];
      int tropas; 
    };
     
 //FUNÇÃO PARA LIMPAR BUFFER DE ENTRADA (SCANF)
    void limparBufferentrada ( ) {
        int c;
        while (( c= getchar()) != '\n' && c != EOF);
    }
 int main () {

      srand(time(NULL));

      territorio *p = (territorio*) calloc (sizeof(5*territorio));  

        for (size_t i = 0; i < TAM; i++)
        {
            
            printf("=========================================================\n");
            printf("JOGO WAR - NÍVEL NOVATO \n");
        
            

            printf("Digite o nome do território:\n");
            scanf("%s", &war [i].nome);

            printf("Digite a cor que representa esse território:\n");
            scanf("%s", &war [i].cor);

            printf("Digite a quantidade de tropas que o território tem:\n");
            scanf("%d", &war [i].tropas);

            
            limparBufferentrada();
        }
    

        printf("===============TERRITÓRIOS CADASTRADOS==============\n");
        for (int  i = 0; i < TAM; i++)
        {
            printf("Território %d -> Nome: %s | Cor: %s | Tropas: %d\n", i + 1, war[i].nome, war[i].cor, war[i].tropas);
        }
    // FUNÇÃO DE ATAQUE 
       void atacar(Territorio* atacante, Territorio* defensor) {
         if (atacante->tropas <= 1) {
          printf("%s não tem tropas suficientes para atacar!\n", atacante->nome);
         return;
        }

    // ROLAGEM DOS DADOS
      int dadoAtacante = (rand() % 6) + 1; // 1 a 6
      int dadoDefensor = (rand() % 6) + 1; // 1 a 6

    printf("\nAtaque de %s (%d tropas) contra %s (%d tropas)\n",
           atacante->nome, atacante->tropas, defensor->nome, defensor->tropas);

    printf("Dado do atacante: %d\n", dadoAtacante);
    printf("Dado do defensor: %d\n", dadoDefensor);

    // comparação
    if (dadoAtacante > dadoDefensor) {
        defensor->tropas--;
        printf("O atacante venceu! %s perdeu 1 tropa.\n", defensor->nome);
    } else {
        atacante->tropas--;
        printf("O defensor venceu! %s perdeu 1 tropa.\n", atacante->nome);
      }

    printf("Tropas pós-batalha -> %s: %d | %s: %d\n",
           atacante->nome, atacante->tropas, defensor->nome, defensor->tropas);
}
         return 0;
}

