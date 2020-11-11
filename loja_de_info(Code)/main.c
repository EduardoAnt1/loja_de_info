#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
    int cod_cliente[max], cod_ano_peca[max][2], cod_venda[max],op=1,op_cliente=1,op_peca=1,op_vendas=1,quant_cliente,quant_vendas,quant_pecas,i;
    char dados_cliente[max][2], dados_pecas[max][3],data_venda[max];
    float preco_peca[max],valor_venda[max][max];

    printf("\t\t\t\t\t Cadastro de informações da Loja de peças de computador\n\n");
    while(op!=0){
    printf("\n\nMenu");
    printf("\n Realizar cadastro de Cliente-1");
    printf("\n Realizar cadastro de Peça-2");
    printf("\n Realizar cadastro de venda-3");
    printf("\n Sair-0\n");
    scanf("%d",&op);
    if (op==1){
        while(op_cliente!=0){
        printf("\t\t\t\t\t Menu de cadastro de cliente\n\n");
        printf("\n Cadastro de cliente-1");
        printf("\n Listagem de cliente-2");
        printf("\n Sair-0\n");
        scanf("%d",&op_cliente);
        if(op_cliente==1){
        printf("\n\nQuantos clientes serão cadastrados?\n");
        scanf("%d",&quant_cliente);
        for(i=0;i<quant_cliente;i++){
                printf("\nDigite o nome do cliente %d:\n",i+1);
                scanf("%s",&dados_cliente[i][0]);
                printf("\nDigite o cpf do cliente %d:\n",i+1);
                scanf("%s",&dados_cliente[i][1]);
                cod_cliente[i]=i;
        }
        }
        if(op_cliente==2){
            //fazer a listagem
        }
        }
    }else{
        if (op==2){
            while(op_peca!=0){
            printf("\t\t\t\t\t Menu de cadastro de cliente\n\n");
            printf("\n Cadastro de peça-1");
            printf("\n Listagem de peça-2");
            printf("\n Sair-0\n");
            scanf("%d",&op_peca);
            if(op_peca==1){
            printf("\n\nQuantas peças serão cadastradas?");
            scanf("%d",&quant_pecas);
            for(i=0;i<quant_pecas;i++){
                printf("\nDigite o nome da peça %d:\n",i+1);
                scanf("%s",&dados_pecas[i][0]);
                printf("\nDigite a categoria da peça %d:\n",i+1);
                scanf("%s",&dados_pecas[i][1]);
                printf("\nDigite o fabricante da peça %d:\n",i+1);
                scanf("%s",&dados_pecas[i][2]);
                printf("\nDigite o preço da peça %d:\n",i+2);
                scanf("%s",&preco_peca[i]);
                printf("\nDigite o ano de fabricação da peça %d:\n",i+1);
                scanf("%s",&cod_ano_peca[i][1]);
                cod_ano_peca[i][0]=i;
                }
                }else{
                    if(op_peca==2){
                        //listagem de peças
                    }
                }
            }
        }else{
            if(op==3){
                while(op_vendas!=0){
                    printf("\t\t\t\t\t Menu de cadastro de cliente\n\n");
                    printf("\n Cadastro de vendas-1");
                    printf("\n Listagem de vendas-2");
                    printf("\n Sair-0\n");
                    scanf("%d",&op_vendas);
                    if(op_vendas==1){
                        printf("\n\nQuantas vendas serão cadastradas?");
                        scanf("%d",&quant_vendas);
                        for(i=0;i<quant_pecas;i++){
                            printf("\nDigite o valor da venda %d:\n",i+1);
                            scanf("%s",&valor_venda[i]);
                            printf("\nDigite a data da venda %d:\n",i+1);
                            scanf("%s",&data_venda[i]);
                            cod_venda[i]=i;
                        }
                    }else{
                        if(op_vendas==2){
                            //listagem de vendas
                        }
                    }
            }
        }
        }
    }
    }
    return 0;
}
