#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <string.h>
#define max 100
typedef struct
{
 int codigo;
 char cpf[50];
 char nome[50];
}dados_cliente;

typedef struct
{
 int codigo;
 int num_serie;
 int ano_fabricacao;
 char nome[20];
 char categoria[50];
 char fabricante[50];
 float preco;
}dados_peca;

typedef struct
{
 int codigo;
 char data[20];
 float valor;
}dados_vendas;

int main()
{
    dados_cliente cliente[max];
    dados_peca peca[max];
    dados_vendas vendas[max];
    int i,j;
    int cod;
    int op=1,op_cliente=1,op_peca=1,op_vendas=1,op_peca_venda=1;
    int quant_clientes,quant_pecas,quant_vendas;
    setlocale(LC_ALL, "Portuguese");

    while(op!=0)//menu principal
    {   printf("------LOJA DE INFORMÁTICA------\n\n");
        printf("\n-Menu do Cliente: 1");
        printf("\n-Menu do Peças: 2");
        printf("\n-Menu do Vendas: 3");
        printf("\n-Sair: 0\n");
        scanf("%d" , &op);
        fflush(stdin);
        system("cls");
        if(op == 1)
        {
            while(op_cliente!=0)//menu do cliente
            {
                printf("\n-Menu do Cliente");
                printf("\n-Cadastro de Cliente: 1");
                printf("\n-Listagem de Cliente: 2");
                printf("\n-Sair: 0\n");
                scanf("%d", &op_cliente);
                fflush(stdin);
                system("cls");
                if(op_cliente == 1)//Cadastro do cliente
                {
                    printf("------Cadastro de Cliente------\n\n");
                    printf("\n-Quantos clientes serão cadastrados ?\n");
                    scanf("%d",&quant_clientes);
                    fflush(stdin);
                    for(i=0;i<quant_clientes;i++)
                    {
                        printf("\n-Digite o nome do cliente:%d\n",i+1);
                        gets(cliente[i].nome);
                        fflush(stdin);

                        printf("\n-Digite o cpf do cliente: %d\n",i+1);
                        gets(cliente[i].cpf);
                        fflush(stdin);

                        cliente[i].codigo=i+1;

                        system("cls");
                    }
                }else{
                    if(op_cliente == 2)//Listagem de cliente
                    {
                        printf("------Listagem de Cliente------");
                        for(i=0;i<quant_clientes;i++)
                        {
                          printf("\n-Código:%d \n -Nome:%s \n -CPF:%s\n", cliente[i].codigo,cliente[i].nome,cliente[i].cpf);
                        }
                        system("pause");
                        system("cls");
                    }
                }
            }
        }else{
            if(op == 2)//Menu das Peças
            {
                while(op_peca!=0)
                {
                    printf("------Menu de Peças------\n\n");
                    printf("\n-Cadastro de Peças: 1");
                    printf("\n-Listagem de Peças: 2");
                    printf("\n-Sair: 0\n");
                    scanf("%d", &op_peca);
                    system("cls");
                    if(op_peca == 1)//Cadastro de peças
                    {
                        printf("------Cadastro de Peças------\n\n");
                        printf("\n-Quantas peças serão cadastrados?\n");
                        scanf("%d",&quant_pecas);
                        fflush(stdin);
                        system("cls");
                        for(i=0;i<quant_pecas;i++)
                        {
                            printf("\nDigite o nome da peça: %d\n",i+1);
                            gets(peca[i].nome);
                            fflush(stdin);

                            printf("\nDigite a categoria da peça: %d\n",i+1);
                            gets(peca[i].categoria);
                            fflush(stdin);

                            printf("\nDigite o fabricante da peça: %d\n",i+1);
                            gets(peca[i].fabricante);
                            fflush(stdin);

                            printf("\nDigite o ano de fabricação da peça: %d\n",i+1);
                            scanf("%d",&peca[i].ano_fabricacao);
                            fflush(stdin);

                            printf("\nDigite o valor da peça: %d\n",i+1);
                            scanf("%f",&peca[i].preco);
                            fflush(stdin);

                            peca[i].codigo=i+1;

                            srand(time(NULL));
                            peca[i].num_serie= rand();

                            system("cls");
                        }
                    }else{
                        if(op_peca == 2)//listagem das peças
                        {
                            printf("------Listagem de Peças------\n\n");
                            for(i=0;i<quant_pecas;i++)
                            {
                            printf("\n-Código:%d \n-Número de Série:%d \n-Nome: %s \n-Categoria: %s \n-Fabricante: %s \n-Ano de fabricação:%d \n-Valor:%f \n",peca[i].codigo,peca[i].num_serie,peca[i].nome,peca[i].categoria,peca[i].fabricante,peca[i].ano_fabricacao,peca[i].preco);
                            }
;                            system("pause");
                            system("cls");
                        }
                    }
                }
            }else{
                if(op == 3)
                {
                    while(op_vendas!=0)//Menu de vendas
                    {
                        printf("------Menu de Vendas------");
                        printf("\n\n-Cadastro de Vendas: 1\n");
                        printf("-Listagem de Vendas: 2\n");
                        printf("-Sair: 0\n");
                        scanf("%d", &op_vendas);
                        fflush(stdin);
                        system("cls");
                        if(op_vendas == 1)//Cadastro de vendas
                        {
                            printf("------Cadastro de Vendas------");
                            printf("\n\n-Quantas venda serão cadastradas?\n");
                            scanf("%d",&quant_vendas);
                            fflush(stdin);
                            system("cls");

                            for(i=0;i<quant_vendas;i++)
                            {

                                for(j=0;j<quant_pecas;j++)//Listagem de peça para venda
                                {
                                printf("\n-Código:%d \n-Número de Série:%d \n-Nome: %s \n-Categoria: %s \n-Fabricante: %s \n-Ano de fabricação:%d \n-Valor:%f \n",peca[i].codigo,peca[i].num_serie,peca[i].nome,peca[i].categoria,peca[i].fabricante,peca[i].ano_fabricacao,peca[i].preco);
                                }

                                while(op_peca_venda!=0)//cadastro das peças vendidas
                                {
                                printf("\n-Digite o codigo da peça desejada:\n");
                                scanf("%d",&cod);
                                vendas[i].valor+=peca[cod-1].preco;
                                printf("\n-Mais alguma peça?");
                                printf("\n-Sim(1)");
                                printf("\n-Não(0)\n");
                                scanf("%d",&op_peca_venda);
                                fflush(stdin);
                                }

                                printf("\nData da venda:\n");
                                gets(vendas[i].data);
                                fflush(stdin);
                                system("cls");
                                vendas[i].codigo=i+1;

                            }
                        }else{
                            if(op_vendas == 2)//Listagem de vendas
                            {
                                printf("------Listagem de Vendas------");
                                for(i=0;i<quant_vendas;i++)
                                {
                                printf("\n-Código:%d \n-Data da venda:%s \n-Valor:%2f",vendas[i].codigo,vendas[i].data,vendas[i].valor);                                }
                                system("pause");
                                system("cls");
                            }
                        }
                    }
                }
            }
        }
    }
return 0;
}
