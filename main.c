#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define j 3


typedef struct{
    int conta;
    char nome[100];
    float saldo;
             }cliente;

void cadastrar(cliente cliente[],int posicao){
    fflush(stdin);
    printf("\n\nINFORME O NOME DO CLIENTE DESEJADO: ");
    gets(cliente[posicao].nome);
    fflush(stdin);
    printf("\nINFORME O NÚMERO DA CONTA CORRENTE DESEJADA: ");
    scanf("%d",&cliente[posicao].conta);
    printf("\nINFORME O SALDO ATUAL: ");
    scanf("%f",&cliente[posicao].saldo);
    system("pause");
    system("cls");
}
void consulta(cliente cliente[]){
 int posicao,indice=-1;
    char nome[100];
    fflush(stdin);
    printf("\nINFORME O NOME DO CLIENTE PARA A CONSULTA: ");
    gets(nome);
    system("pause");
    system("cls");
    for(posicao=0;posicao<j;posicao++){
     if(strcmp(nome,cliente[posicao].nome)==0){
        indice=posicao;
        break;
      }
  }
  if(indice != -1){
    printf("------------------INFORMAÇÕES PRECEDENTES------------------\n\nNOME: %s",cliente[posicao].nome);
    printf("\n ESTAMOS EXIBINDO O NÚMERO DA CONTA CORRENTE DESEJADA: %d\n\n",cliente[posicao].conta);
    printf("\n ESTAMOS EXIBINDO O SALDO ATUAL: %.2f\n\n",cliente[posicao].saldo);
    system("pause");
    system("cls");
}
  else{
    printf("\nINFELIZMENTE, NÃO PUDEMOS ENCONTRAR O CLIENTE.\n\n");
     system("pause");
   system("cls");
   }


int main()
{
    float saldo_menor, saldo_menor_n1, saldo_menor_n2, saldo_menor_n3, cliente[j];

 int loop=1,opc,aux=0;

setlocale(LC_ALL,"");
system("color 5b");
    while(loop){
        system("cls");
        printf("\n\----------------------------OLÁ, TE DAMOS AS BOAS VINDAS AO BANCO DO CEFET----------------------------");
        printf("\n\n\t\t\t\tMENU DE CADASTRO");
        printf("\nDIGITE 1 PARA O CADASTRO DE UM NOVO CLIENTE");
        printf("\nDIGITE 2 PARA A CONSULTA DE UM CLIENTE");
        printf("\nDIGITE 3 PARA MOSTRAR OS DADOS DO CLIENTE COM MENOR SALDO");
        printf("\nDIGITE 4 PARA SAIR DO PROGRAMA\n");
        printf("OPÇÃO SELECIONADA: ");
        scanf("%d",&opc);
        switch(opc){
         case 1: cadastrar(cliente,aux);
            aux++;
            break;
         case 2: consulta(cliente);
            break;
         case 3: saldo_menor_n1, saldo_menor_n2, saldo_menor_n3;

float saldo_menor_n1;
  if ((saldo_menor_n1<saldo_menor_n2)&&(saldo_menor_n1<saldo_menor_n3))
{
saldo_menor=saldo_menor_n1;
}
  else if((saldo_menor_n2<saldo_menor_n1)&&(saldo_menor_n2<saldo_menor_n3))
{
saldo_menor=saldo_menor_n2;
}
  else
{
saldo_menor=saldo_menor_n3;
}

printf("\n\n O MENOR SALDO EH: %.2f",saldo_menor);
return saldo_menor;
            break;

         case 4: loop=0;
            break;
         default:
            printf("\nOPÇÃO INVÁLIDA");



    }



 printf("\n-----------------------OBRIGADA POR UTILIZAR O PROGRAMA-----------------------\n\n");

    return 0;
}
}
}
