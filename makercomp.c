#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main()
{
    int i, codProd[3], qtdProd[3], adicionar, posicao=-1, qtdCompra, pc=0, sc=0, tc=0, rep, rec, menu, cpf, telefone, cadastro, curso, ret, cep;
	float precoProd[3], carrinho[5];
    char nome[50], data[20], email[50], senha[20], endereco[50]; 
    setlocale(LC_ALL, "Portuguese");
	
	// Cadastrando  carrinho

 	for (i=0; i< 3; i++)
 	{	
    printf("----------------- Cadastrando produtos -----------------\n\n*PREÇOS*");
 	printf("\nCOD:1 - Curso + equipamentos..:R$300");
    printf("\nCOD:2 - Curso..:R$250");
    printf("\nCOD:3 - Equipamentos..:R$70\n");
   
 	printf("\nCódigo do Produto..: ");
 	scanf("%d", &codProd[i]);
 	printf("Quantidade..: ");
 	scanf("%d", &qtdProd[i]); 
 	printf("Preço do Produto..: ");
 	scanf("%f", &precoProd[i]);
 	printf("\n----------------------------------------------------");
 	}
 	printf("\n----------------------------------------------------");
 	system("cls");
 	printf("\n - Digite '1'se já tem cadastro");
	printf("\n - Digite qualquer outra tecla para fazer Cadastro\n .....:");
	scanf("%d", &cadastro);
	if(cadastro!=1)
		{
		    printf("\n--------------------------------------------------- CADASTRO -----------------------------------------------------------");
		    
		    printf("\nNome completo:   "); 
			gets(nome);
			getchar();
			
			printf("\nData de Nascimento:   "); 
			gets(data); 
		    getchar();
		     
		    fflush(stdin);
		    printf("\nCPF:     "); 
			scanf("%d", &cpf); 
			
		    fflush(stdin);
		    printf("\nNumero de telefone:    "); 
			scanf("%d", &telefone); 
			
			printf("\nE-mail:      "); 
		 	gets(email); 
			getchar();
			
			printf("\nCrie uma senha:     ");
			gets(senha); 
			getchar();
			
			fflush(stdin);
			printf("\nInforme seu CEP:    "); 
			scanf("%d", &cep);
			
			//printf("\nInforme seu endereço:    "); 
			//gets(endereco);
			//getchar(); 
			
			
		}
		do {
		system("cls");
		printf("\n                                         ____________________________ ");
		printf("\n                                        |   BEM VINDO ao DigiClass!  |"); 
		printf("\n                                        |           MENU             |");
		printf("\n                                        |   DIGITE A OPÇÃO DESEJADA  |"); 
		printf("\n                                        |____________________________|\n");
	    printf("\n                                                 ---PREÇOS---         ");
 		printf("\n - Cursos com equipamentos..:R$300");
    	printf("\n - Cursos..:R$250");
    	printf("\n - Equipamentos..:R$70\n");
	   	printf("\n [1] - Ver cursos com equipamentos \n [2] - Ver cursos \n [3] - Ver equipamentos \n [4] - Ver carrinho \n [5] - Finalizar Compra \n");
	   	printf("\nInforme a opção desejada: ");
	    scanf("%d", &menu); 
		switch (menu)
				{
					case 1:
						printf("\n1 - Curso de Design Grafico (Fone de ouvido e Oculos de realidade virtual inclusos)");
						printf("\n2 - Curso de Design de Jogos (Fone de ouvido e Oculos de realidade virtual inclusos)");
						printf("\n3 - Curso Basico de Progamação (Fone de ouvido e Oculos de realidade virtual inclusos)");
						printf("\n4 - Remover curso do carrinho");
						printf("\nEscolha o pacote: ");
						scanf("%d", &curso);
						if (curso == 1)
						{
							printf("\nO pacote escolhido foi: Curso de Design Gráfico (Fone de ouvido e Oculos de realidade virtual inclusos)");
 							for (i=0; i<3; i++)
 							{
 							if (codProd[i] == 1)
 								{
 								posicao = i;
 								qtdCompra = 1;
 								}
							}
 							carrinho[sc]= carrinho[pc] + precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[sc]);
 							
 							printf("\n---------------------------------------------------------------\n");
 							printf("\nDigite qualquer tecla para voltar ao menu");
 							scanf("%d", &ret);
 							
 							     if(ret)
									 {
 							    	rep=1;
							        }
							    
 							      
						}
						
						if (curso == 2)
						{
							printf("\n\nO pacote escolhido foi: Curso de Design de Jogos (Fone de ouvido e Oculos de realidade virtual inclusos)");
 							for (i=0; i<3; i++)
 							{
 							if (codProd[i] == 1)
 								{
 								posicao = i;
 								qtdCompra = 1;
 								}
							}
 							carrinho[sc]= carrinho[pc] + precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[sc]);
 							
 							printf("\n---------------------------------------------------------------\n");
 							printf("\nDigite qualquer tecla para voltar ao menu");
 							scanf("%d", &ret);
 							
 							     if(ret)
									 {
 							    	rep=1;
							        }
 							    
							    
 							      
							
						}
						if (curso == 3)
						{
							printf("\n\nO pacote escolhido foi: Curso basico de progamação (Fone de ouvido e Oculos de realidade virtual inclusos)");
 							for (i=0; i<3; i++)
 							{
 							if (codProd[i] == 1)
 								{
 								posicao = i;
 								qtdCompra = 1;
 								}
							}
 							carrinho[sc]= carrinho[pc] + precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[sc]);
 							
 							
 							printf("\n---------------------------------------------------------------\n");
 							printf("\nDigite qualquer tecla para voltar ao menu");
 							scanf("%d", &ret);
 							
 							     if(ret)
									 {
 							    	rep=1;
							        }
							 }   
 						    if (curso == 4) 
 						    {
 						    printf("\n1 - Remover: Curso de Design Grafico (Fone de ouvido e Oculos de realidade virtual inclusos)");
					     	printf("\n2 - Remover: Curso de Design de Jogos (Fone de ouvido e Oculos de realidade virtual inclusos)");
					    	printf("\n3 - Remover: Curso Basico de Progamação (Fone de ouvido e Oculos de realidade virtual inclusos)");
 							printf("\nDigite qualquer outra tecla para voltar ao menu\n");
 							scanf("%d", &ret);
 							
 							     
 							    if(ret ==1)
								 {
 							    	printf("\n\nRemovido: Curso de Design Grafico (Fone de ouvido e Oculos de realidade virtual inclusos)");
 							        
 							        for (i=0; i<3; i++)
 						  	       {
 							        if (codProd[i] == 1)
 							     	{
 							     	posicao = i;
 							     	qtdCompra = 1;
 							       	}
						           }
 							carrinho[sc]= carrinho[sc] - precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[tc]);
 								printf("\nDigite '1' para retornar ao menu\n");
					         	scanf("%d", &rep);
 								
							        }
							         if(ret ==2)
								 {
 							    	printf("\n\n Removido: Curso de Design de Jogos (Fone de ouvido e Oculos de realidade virtual inclusos)");
 							        
 							        for (i=0; i<3; i++)
 						  	       {
 							        if (codProd[i] == 1)
 							     	{
 							     	posicao = i;
 							     	qtdCompra = 1;
 							       	}
						           }
 							carrinho[sc]= carrinho[sc] - precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[tc]);
 								printf("\nDigite '1' para retornar ao menu\n");
					         	scanf("%d", &rep);
 								
							        }
							         if(ret ==3)
								 {
 							    	printf("\n\nRemovido: Curso Basico de Progamação (Fone de ouvido e Oculos de realidade virtual inclusos)");
 							        
 							        for (i=0; i<3; i++)
 						  	       {
 							        if (codProd[i] == 1)
 							     	{
 							     	posicao = i;
 							     	qtdCompra = 1;
 							       	}
						           }
 							carrinho[sc]= carrinho[sc] - precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[tc]);
 								printf("\nDigite '1' para retornar ao menu\n");
					         	scanf("%d", &rep);
 								
							        }
							        
 						    	
							 }
							 else
									 {
 							    	rep=1;
							        }
 						    	
 							
							
						
					break;
					
					case 2:
						printf("\n                                                 ---IMPORTANTE---");
                        printf("\n                             * Ao comprar apenas o curso sem os equipamentos estará alegando\n                               já ter os equipamentos necessarios para assistir as aulas      *\n");
						printf("\n1 - Curso de Design Gráfico");
						printf("\n2 - Curso de Design de Jogos");
						printf("\n3 - Curso Basico de Progamação");
						printf("\n4 - Remover Curso");
						printf("\nEscolha o curso: ");
						scanf("%d", &curso);
						if (curso == 1)
						{
							printf("\n\n1- O curso escolhido foi: Curso de Design Gráfico");
 							for (i=0; i<3; i++)
 							{
 							if (codProd[i] == 2)
 								{
 								posicao = i;
 								qtdCompra = 1;
 								}
							}
 							carrinho[sc]= carrinho[pc] + precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[sc]);
 							
 							printf("\n---------------------------------------------------------------\n");
 							printf("\nDigite qualquer tecla para voltar ao menu");
 							scanf("%d", &ret);
 							
 							     if(ret)
									 {
 							    	rep=1;
							        }
							
						}
						if (curso == 2)
						{
							printf("\n\n2- O curso escolhido foi: Curso de Design de Jogos");
 							for (i=0; i<3; i++)
 							{
 							if (codProd[i] == 2)
 								{
 								posicao = i;
 								qtdCompra = 1;
 								}
							}
 							carrinho[sc]= carrinho[pc] + precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[sc]);
 							
 							printf("\n---------------------------------------------------------------\n");
 							printf("\nDigite qualquer tecla para voltar ao menu");
 							scanf("%d", &ret);
 							
 							     if(ret)
									 {
 							    	rep=1;
							        }
							
						}
						
						
						if (curso == 3)
						{
							printf("\n\n3- O curso escolhido foi: Curso Basico de Progamação (Básico ao Avançado)");
 							for (i=0; i<3; i++)
 							{
 							if (codProd[i] == 2)
 								{
 								posicao = i;
 								qtdCompra = 1;
 								}
							}
 							carrinho[sc]= carrinho[pc] + precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[sc]);
 							
 							 printf("\n---------------------------------------------------------------\n");
 							printf("\nDigite qualquer tecla para voltar ao menu");
 							scanf("%d", &ret);
 							
 							     if(ret)
									 {
 							    	rep=1;
							        }
 							
							
						}
						if (curso == 4) 
 						    {
 						    printf("\n1 - Remover: Curso de Design Gráfico");
					       	printf("\n2 - Remover: Curso de Design de Jogos");
						    printf("\n3 - Remover: Curso Basico de Progamação");
 							printf("\nDigite qualquer outra tecla para voltar ao menu\n");
 							scanf("%d", &ret);
 							
 							     
 							    if(ret ==1)
								 {
 							    	printf("\n\nRemovido: Curso de Design de Jogos (Fone de ouvido e Oculos de realidade virtual inclusos)");
 							        
 							        for (i=0; i<3; i++)
 						  	       {
 							        if (codProd[i] == 2)
 							     	{
 							     	posicao = i;
 							     	qtdCompra = 1;
 							       	}
						           }
 							carrinho[sc]= carrinho[sc] - precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[tc]);
 								printf("\nDigite '1' para retornar ao menu\n");
					         	scanf("%d", &rep);
 								
							        }
							         if(ret ==2)
								 {
 							    	printf("\n\n Removido: Curso de Design de Jogos");
 							        
 							        for (i=0; i<3; i++)
 						  	       {
 							        if (codProd[i] == 2)
 							     	{
 							     	posicao = i;
 							     	qtdCompra = 1;
 							       	}
						           }
 							carrinho[sc]= carrinho[sc] - precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[tc]);
 								printf("\nDigite '1' para retornar ao menu\n");
					         	scanf("%d", &rep);
 								
							        }
							         if(ret ==3)
								 {
 							    	printf("\n\nRemovido: Curso Basico de Progamação");
 							        
 							        for (i=0; i<3; i++)
 						  	       {
 							        if (codProd[i] == 2)
 							     	{
 							     	posicao = i;
 							     	qtdCompra = 1;
 							       	}
						           }
 							carrinho[sc]= carrinho[sc] - precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[tc]);
 								printf("\nDigite '1' para retornar ao menu\n");
					         	scanf("%d", &rep);
 								
							        }
							        
							 }
							 else
									 {
 							    	rep=1;
							        }
 						    	
						
						break;
						
					case 3:
						printf("\n1- Óculos de realidade virtual e Headphone");
						printf("\n2- Remover Cursos");
						scanf("%d", &curso);
						if (curso == 1)
						{
							printf("\n\nO produto escolhido foi: Óculos de realidade virtual");
 							
 							for (i=0; i<3; i++)
 							{
 							if (codProd[i] == 3)
 								{
 								posicao = i;
 								qtdCompra = 1;
 								}
							}
 							carrinho[sc]= carrinho[pc] + precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[sc]);
 							
 							 printf("\n---------------------------------------------------------------\n");
 							printf("\nDigite qualquer tecla para voltar ao menu");
 							scanf("%d", &ret);
 							
 							     if(ret)
									 {
 							    	rep=1;
							        }
						}
						if (curso == 2) 
 						    {
 						    printf("\n1- Remover: Óculos de realidade virtual e Headphone");
 							printf("\nDigite qualquer outra tecla para voltar ao menu\n");
 							scanf("%d", &ret);
 							
 							     
 							    if(ret == 1)
								 {
 							    	printf("\n\nRemovido: Óculos de realidade virtual e Headphone");
 							        
 							        for (i=0; i<3; i++)
 						  	       {
 							        if (codProd[i] == 3)
 							     	{
 							     	posicao = i;
 							     	qtdCompra = 1;
 							       	}
						           }
 							carrinho[sc]= carrinho[sc] - precoProd[posicao] * qtdCompra;
  							printf("\n---------------carinho------------------------\n");
 							printf("\nValor do Produto no carrinho..: %.2f\n", carrinho[tc]);
 								printf("\nDigite '1' para retornar ao menu\n");
					         	scanf("%d", &rep);
 								
							        }
							        
 						    	
							 }
							 else
									 {
 							    	rep=1;
							        }
 						
						break;
						
					case 4:
						
						printf("\nValor do carrinho..: %.2f\n", carrinho[sc]);
					    printf("\nDigite '1' para retornar ao menu\n");
					   	scanf("%d", &rep);
					
					    break;	
					    
				    case 5:
				    	printf("\nCompra finalizada com sucesso, enviaremos um boleto para o e-mail..: %s", email);
				    	printf("\nValor total da compra..: %.2f\n", carrinho[sc]);
				    	
				    	return 0;
				    	
				    	break;
						
						default: 
						printf("\nSeleção Invalida.");
						printf("\nDigite '1' para retornar ao menu\n");
						scanf("%d", &rep);	
				}
			getch();
		 	}
			while(rep==1);
			system("pause");
			return 0;
}
