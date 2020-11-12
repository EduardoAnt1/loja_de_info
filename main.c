#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <string.h>
#define max 100

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cod_cliente[max], cod_peca_num_serie[5][2], cod_venda[max], cod;
    int j = 0, i, cont_pecas = 0, cont_clientes = 0, cont_vendas = 0;
    int ano_peca[max], data_venda[max][3];
    int op_cliente=1, op_peca=1, op_vendas = 1, op = 1;
    int quant_cliente, quant_vendas, quant_pecas, quant_peca_venda;
    char dados_cliente[max][max], dados_pecas[max][max], str[max];
    float preco_peca[max], valor_venda[max];
    char nome[max], cpf[max];
    for(i=0;i<5;i++){
    cod_peca_num_serie[i][0] = i+1; // codigo da peça
    cod_peca_num_serie[i][1] = rand(); // numero de serie
    }

    printf("\t\t Cadastro de informações da Loja de peças de computador\n\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------");
    while(op != 0){
        op_cliente=1;
        op_peca=1;
        op_vendas=1;
        printf("\t\t| Menu Principal                   |\n");
        printf("\t\t| Realizar cadastro de Cliente - 1 |\n");
        printf("\t\t| Realizar cadastro de Peças - 2   |\n");
        printf("\t\t| Realizar cadastro de Venda - 3   |\n");
        printf("\t\t| Sair - 0                         |\n");
        scanf("%d", &op);
        printf("------------------------------------------------------------------------------------------------------------------------");
        system("cls");
        if (op == 1){
            while(op_cliente != 0){
                printf("\t\t| Menu de cadastro de cliente |\n");
                printf("\t\t| Cadastro de cliente - 1     |\n");
                printf("\t\t| Listagem de cliente - 2     |\n");
                printf("\t\t| Sair - 0                    |\n");
                scanf("%d", &op_cliente);
                printf("------------------------------------------------------------------------------------------------------------------------");
                system("cls");
                if(op_cliente == 1){
                    printf("\t\t| Quantos clientes serão cadastrados?\n");
                    scanf("%d",&quant_cliente);
                    j = 0;
                    for(i = 0; i < quant_cliente; i++){
                        printf("\t\t| Digite o nome do cliente %d:\n", i);
                        fflush(stdin);
                        scanf("%s", &dados_cliente[j]);
                        printf("\t\t| Digite o CPF do cliente %d:\n", i);
                        fflush(stdin);
                        scanf("%s", &dados_cliente[j + 1]);
                        fflush(stdin);
                        cod_cliente[i] = i;
                        printf("------------------------------------------------------------------------------------------------------------------------");
                        system("cls");
                        j += 2; // Somamos 2 para que a posição do proximo cliente nao sobreponha o anterior
                    }
                }
                if(op_cliente == 2){
                    j = 0;
                    for(i = 0; i < quant_cliente; i++){
                        printf("\t\t Cliente %d: \n", cod_cliente[i]);
                        strcpy(nome, dados_cliente[j]);
                        printf("\t\t Nome: ");
                        puts(nome);
                        strcpy(cpf, dados_cliente[j + 1]);
                        printf("\t\t CPF: ");
                        puts(cpf);
                        j += 2;
                        printf("------------------------------------------------------------------------------------------------------------------------");
                    }
                    _sleep(5000);
                    system("cls");
                }
            }
        }else{
            if (op == 2){
                while(op_peca != 0){
                printf("\t\t| Menu de cadastro de peças |\n");
                printf("\t\t| Cadastro de peça - 1      |\n");
                printf("\t\t| Listagem de peça - 2      |\n");
                printf("\t\t| Sair - 0                  |\n");
                scanf("%d",&op_peca);
                printf("------------------------------------------------------------------------------------------------------------------------");
                system("cls");
                    if(op_peca==1){
                        printf("\t\t| Quantas peças serão cadastradas?\n");
                        scanf("%d",&quant_pecas);
                        for(i=0;i<quant_pecas;i++){
                        printf("\t\t Digite o nome da peça\n");
                        fflush(stdin);
                        scanf("%s", &dados_pecas[cont_pecas]);
                        fflush(stdin);
                        printf("\t\t Digite a categoria da peça\n");
                        scanf("%s", &dados_pecas[cont_pecas+1]);
                        fflush(stdin);
                        printf("\t\t Digite o fabricante da peça\n");
                        scanf("%s", &dados_pecas[cont_pecas+2]);
                        fflush(stdin);
                        printf("\t\t Digite o preço da peça\n");
                        scanf("%f", &preco_peca[i]);
                        fflush(stdin);
                        printf("\t\t Digite o ano de fabricação da peça\n");
                        scanf("%d", &ano_peca[i]);
                        fflush(stdin);
                        cont_pecas += 3;
                        printf("------------------------------------------------------------------------------------------------------------------------");
                        system("cls");}
                    }else{
                        if(op_peca==2){
                            j = 0;
                            if(op_peca == 2){
                            for(i=0;i<quant_pecas;i++){
                                printf("\t\t Nome da peça\n");
                                strcpy(str, dados_pecas[j]);
                                puts(dados_pecas[j]);
                                printf("\t\t Categoria da peça:\n");
                                strcpy(str, dados_pecas[j + 1]);
                                puts(dados_pecas[j + 1]);
                                printf("\t\t Fabricante da peça:\n");
                                strcpy(str, dados_pecas[j + 2]);
                                puts(dados_pecas[j + 2]);
                                printf("\t\t Preço da peça: %.2f\n", preco_peca[i]);
                                printf("\t\t Ano de fabricação da peça: %d\n", ano_peca[i]);
                                printf("\t\t Código da peça: %d\n", cod_peca_num_serie[i][0]);
                                printf("\t\t Número de série da peça: %d\n", cod_peca_num_serie[i][1]);
                                j += 3;
                                printf("------------------------------------------------------------------------------------------------------------------------");
                            }
                            }
                        }
                    }
                }
            }else{
                if(op==3){
                    while(op_vendas!=0){
                        printf("\t\t| Menu de cadastro de Vendas |\n\n");
                        printf("\t\t| Cadastro de vendas - 1     |\n");
                        printf("\t\t| Listagem de vendas - 2     |\n");
                        printf("\t\t| Sair - 0                   |\n");
                        scanf("%d",&op_vendas);
                        printf("------------------------------------------------------------------------------------------------------------------------");
                        system("cls");
                        if(op_vendas==1){
                            j = 0;
                            printf("\t\t Quantas vendas serão cadastradas?\n");
                            scanf("%d",&quant_vendas);
                            for(i=0;i<quant_pecas;i++){
                                printf("\t\t Nome da peça\n");
                                puts(dados_pecas[j]);
                                printf("\t\t Preço da peça: %.2f\n", preco_peca[i]);
                                printf("\t\t Código da peça: %d\n", cod_peca_num_serie[i][0]);
                                j += 3;
                                printf("------------------------------------------------------------------------------------------------------------------------");
                            }
                            for(i=0;i<quant_vendas;i++){
                                fflush(stdin);
                                printf("\t\t Digite o código da peça: \n");
                                scanf("%d", &cod);
                                fflush(stdin);
                                printf("\t\t Digite o quantidade dessa peça: \n");
                                scanf("%d", &quant_peca_venda);
                                valor_venda[i] = quant_peca_venda * preco_peca[cod-1];
                                fflush(stdin);
                                printf("\t\t Digite o dia da venda %d: \n",i+1);
                                scanf("%d", &data_venda[i][0]);
                                printf("\t\t Digite o mês da venda %d: \n",i+1);
                                scanf("%d", &data_venda[i][1]);
                                printf("\t\t Digite o ano da venda %d: \n",i+1);
                                scanf("%d", &data_venda[i][2]);
                                fflush(stdin);
                                cod_venda[i]=i;
                                printf("------------------------------------------------------------------------------------------------------------------------");

                                system("cls");
                            }

                        }else{
                            if(op_vendas==2){
                                for(i = 0; i < quant_vendas; i++){
                                    printf("\t\t Código da venda: %d\n", cod_venda[i]);
                                    printf("\t\t Valor da venda: %.2f\n", valor_venda[i]);
                                    printf("\t\t Data da venda %d/%d/%d\n", data_venda[i][0], data_venda[i][1], data_venda[i][2]);
                                    printf("------------------------------------------------------------------------------------------------------------------------");
                                    _sleep(5000);
                                    system("cls");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
