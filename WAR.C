//===============================================================
//
//           PRÁTICA: JOGO WAR - NÍVEL NOVATO
// 
//   OBJETIVO: CONSTRUIR UM PROGRAMA QUE CADASTRE 
//            OS TERRITÓRIOS DO NOSSO MUNDO, CORES REPRESENTANTES E QUANTIDADE DE TROPAS DE CADA
//

#include <stdio.h>
#include <string.h>

 //Declarando as variáveis
    #define TAM 5 

        struct territorio{

         char nome [30];
         char cor [10];
         int tropas;
    };

    void limparBufferentrada ( ) {
        int c;
        while (( c= getchar()) != '\n' && c != EOF);
    }
    void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);}

    int main () {

      struct territorio war [TAM];    

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

         return 0;
}

