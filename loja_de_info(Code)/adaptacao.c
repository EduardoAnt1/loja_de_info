#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <string.h>
#define max 100
typedef struct
{
 int codigo;
 char cpf[14];
 char nome[50];
}dados_cliente;

typedef struct
{
 int codigo;
 int num_serie;
 int ano_fabricacao;
 char nome[20];
 char categoria[50];
 char fabricante;
 float preco;
}dados_peca;

typedef struct
{
 int codigo;
 int dia_venda;
 int mes_venda;
 int ano_venda;
 float valor;
}dados_vendas;

int adaptacao()
{
    dados_cliente cliente[max];
    dados_peca peca[max];
    dados_vendas vendas[max];
    int i;
    int op=1,op_cliente,op_peca,op_vendas;
    int quant_clientes,quant_pecas,quant_vendas;
    setlocale(LC_ALL, "Portuguese");
    //===================================================
    while(op!=0)
    {   printf("------LOJA DE INFORMÁTICA------\n\n");
        printf("\n-Menu do Cliente: 1");
        printf("\n-Menu do Peças: 2");
        printf("\n-Menu do Vendas: 3");
        printf("\n-Sair: 0");
        scanf("%d" , &op);
        fflush(stdin);
        system("cls");
        if(op == 1)
        {
            while(op_cliente!=0)
            {
                printf("\n-Menu do Cliente");
                printf("\n-Cadastro de Cliente: 1");
                printf("\n-Listagem de Cliente: 2");
                printf("\n-Sair: 0");
                scanf("%d", &op_cliente);
                fflush(stdin);
                system("cls");
                if(op_cliente == 1)
                {
                    printf("------Cadastro de Cliente------\n\n");
                    printf("\n-Quantos clientes serão cadastrados ?");
                    scanf("%d",&quant_clientes);
                    fflush(stdin);
                    for(i=0;i<quant_clientes;i++)
                    {
                        printf("-Digite o nome do cliente: %d",i+1);
                        gets(cliente[i].nome);
                        fflush(stdin);

                        printf("-Digite o cpf do cliente: %d",i+1);
                        gets(cliente[i].cpf);
                        fflush(stdin);

                        cliente[i].codigo=i+1;

                        system("cls");
                    }
                }else{
                    if(op_cliente == 2)
                    {
                        printf("------Listagem de Cliente------");
                        for(i=0;i<quant_clientes;i++)
                        {
                          printf("-Código:%d \n -Nome:%s \n -CPF:%s");
                        }
                    }
                }
            }
        }else{
            if(op == 2)
            {
                while(op_peca!=0)
                {
                    printf("-Menu de Peças");
                    printf("-Cadastro de Peças: 1");
                    printf("-Listagem de Peças: 2");
                    printf("-Sair: 0");
                    scanf("%d", &op_peca);
                    if(op_peca == 1)
                    {

                    }else{
                        if(op_peca == 2)
                        {

                        }
                    }
                }
            }else{
                if(op == 3)
                {
                    while(op_vendas!=0)
                    {
                        printf("-Menu de Vendas");
                        printf("-Cadastro de Vendas: 1");
                        printf("-Listagem de Vendas: 2");
                        printf("-Sair: 0");
                        scanf("%d", &op_vendas);
                        if(op_vendas == 1)
                        {

                        }else{
                            if(op_vendas == 2)
                            {

                            }
                        }
                    }
                }
            }
        }
    }
return 0;
}
