// Felipe dos Santos Silva - 02/04/25 - Algoritmos e Estruturas de dados

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    //Input
    int exercicio;
    printf("Escolha um exerc�cio de 1 a 21:\n");
    scanf("%d", &exercicio);
    
    //Quest�es
    while (exercicio != 0)
    {
        printf("---------- QUEST�O %d ----------\n", exercicio);
        switch (exercicio)
        {
            case 1: {
                int numero;
                printf("Escolha um numero:\n");
                scanf("%d", &numero);
                
                if (numero % 2 == 0)
                {
                    printf("O numero � par!\n");
                }
                else
                {
                    printf("O numero � impar!\n");
                }         
                break;
            }
            case 2: {
                int numero1;
                int numero2;
                int numero3;
                printf("Informe o primeiro n�mero:\n");
                scanf("%d", &numero1);
                printf("Informe o segundo n�mero:\n");
                scanf("%d", &numero2);
                printf("Informe o terceiro n�mero:\n");
                scanf("%d", &numero3);
                
                if (numero1 > numero2 && numero1 > numero3)
                {
                    printf("O numero %d � o maior!\n",numero1);
                }
                else if (numero2 > numero1 && numero2 > numero3)
                {
                    printf("O numero %d � o maior!\n",numero2);
                }
                else if (numero3 > numero1 && numero3 > numero2)
                {
                    printf("O numero %d � o maior!\n",numero3);
                }
                else
                {
                    printf("Houve um empate!\n");
                }         
                break;
            }
            case 3: {
                int idade;
                printf("Informe sua idade:\n");
                scanf("%d", &idade);
                
                if (idade < 18)
                {
                    printf("Voc� � menor de idade\n");
                }
                else if (idade >= 18 && idade < 60)
                {
                    printf("Voc� � adulto\n");
                }
                else
                {
                    printf("Voc� � idoso\n");
                }
                break;
            }
            case 4: {
                int numero;
                printf("Informe um n�mero:\n");
                scanf("%d", &numero);
                
                if (numero < 0)
                {
                    printf("O n�mero � negativo\n");
                }
                else if (numero == 0)
                {
                    printf("O n�mero � zero\n");
                }
                else
                {
                    printf("O n�mero � positivo\n");
                }
                break;
            }
            case 5: {
                int nota1;
                int nota2;
                printf("Informe a primeira nota:\n");
                scanf("%d", &nota1);
                printf("Informe a segunda nota:\n");
                scanf("%d", &nota2);
                float media = (nota1 + nota2) / 2;
                printf("M�dia = %f\n", media);
                
                if (media < 5)
                {
                    printf("Reprovado\n");
                }
                else if (media < 7)
                {
                    printf("Recupera��o\n");
                }
                else
                {
                    printf("Aprovado\n");
                }
                break;
            }
            case 6: {
                int i;
                for (i = 1; i < 101; i++)
                {
                    printf("%d ",i);
                }
                
                break;
            }
            case 7: {
                int i;
                int soma = 0;
                int numero;
                printf("Informe o n�mero:\n");
                scanf("%d", &numero);

                for (i = 1; i <= numero; i++)
                {
                    soma += i;
                }
                printf("%d ", soma);

                break;
            }
            case 8: {
                int numero;
                int i;
                int resultado;
                printf("Informe o n�mero:\n");
                scanf("%d", &numero);

                for (i = 1; i <= 10; i++)
                {
                    resultado = numero * i;
                    printf("%d x %d = %d\n", numero, i, resultado);
                }

                break;
            }
            case 9: {
                int numero;
                int i;
                printf("Informe o n�mero para ver seus divis�veis:\n");
                scanf("%d", &numero);

                for (i = 1; i <= numero; i++)
                {
                    if (numero % i == 0)
                    {
                        printf("%d ", i);
                    }
                }

                break;
            }
            case 10: {
                int numero;
                int soma = 0;
                printf("Informe um n�mero positivo (para finalizar, digite um negativo):\n");
                scanf("%d", &numero);
                
                while (numero > 0)
                {
                    soma += numero;
                    
                    printf("Informe um n�mero positivo (para finalizar, digite um negativo):\n");
                    scanf("%d", &numero);
                }
                printf("%d",soma);

                break;
            }
            case 11: {
                int i;
                int cont_asteriscos = 1;
                int numero;
                printf("Informe um n�mero inteiro positivo:\n");
                scanf("%d", &numero);
                
                for (i = 1; i <= numero; i++)
                {
                    int j;
                    int k;
                    for (k = i; k < numero; k++)
                    {
                        printf(" ");
                    }
                    for (j = 0; j < cont_asteriscos; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                    cont_asteriscos += 2;
                }

                break;
            }
            
            default:
                break;
        }
        printf("\nEscolha um exerc�cio de 1 a 21:\n");
        scanf("%d", &exercicio);
    }

    return 0;
}