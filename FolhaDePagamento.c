#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
//Tharso Mateus Ferreira felix
//Folha de pagamento
//16/05/2020
//-----------------------------------------fontes consultadas-------------------------------------------------------------
//IRRF: https://impostoderenda2020.net/tabela-irrf-2020/
//FGTS: https://br.advfn.com/indicadores/fgts
//INSS: https://www.inss.gov.br/servicos-do-inss/calculo-da-guia-da-previdencia-social-gps/tabela-de-contribuicao-mensal/
//------------------------------------------------------------------------------------------------------------------------


int cID, dia, mes, ano;
float inss, fgts, saL, irrf, saLi, inP;

 


int main() 
{  
setlocale(LC_ALL, "Portuguese");

   char nome[50];
   printf("\nDigite o seu nome ..:");
     gets(nome);
   
   printf("\n----digite a data----\n");
    printf("Dia:\n"); 
    scanf("%d", &dia);
    
    printf("Mês:\n"); 
    scanf("%d", &mes);
    
    printf("Ano:\n"); 
    scanf("%d", &ano);
     
         system("cls");
  
   printf("Bem Vindo %s\n",nome);

   printf("*IMPORTANTE: Para que validar o ID digite um numero entre 506 e 540*");
   printf("\nDigite o seu Codigo de Identificação ..:");
     scanf("%d", &cID);
printf("\n---------------------------------------");


  if(cID>=506 && cID<= 540)
  
   {
   	saL=3300;
   	 printf("\n%d ANALISTA FINANCEIRO PLENO  %d/%d/%d", cID, dia, mes, ano);
   	
     printf("\nSalário bruto R$3300\n");
     
     inss=saL*0.11;
     printf("\nINSS: R$%.2f\n", inss);
     
     fgts=saL*0.08;
     printf("\nFGTS: R$%.2f\n", fgts);
     
     irrf=saL*0.15;
     printf("\nIRRF: R$%.2f\n", irrf);
     
	 inP=irrf+inss+fgts;
     printf("\nTotal de Desconto: R$%.2f\n", inP);
     
     saLi=saL-irrf-inss-fgts;
     printf("\nSalário Liquido: R$%.2f\n", saLi);
     
   } 
  else
     {
        
   printf("\nCodigo invalido, Favor consultar o suporte para mais informações");
   
     }
     system("pause");  
  return 0;
}


