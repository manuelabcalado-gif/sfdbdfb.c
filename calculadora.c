#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao;
    float num1, num2, resultado;

    do{
        //criar o menu
        printf("\n===============================\n");
        printf("      Calculadora Simples       \n");
        printf("===============================\n");
        printf("Selecione uma operacao: \n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");

        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4){
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao)
        {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;        

        case 4:
            if(num2 != 0){
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Nao e permitido dividir por zero!");
            }    
            break;
        }
        }else{
            printf("Erro: Divisão por zero não é permitida.\n");
        }
        break; 
    }
}else{ printf("Opção inválida! tente novamente.\n");
} 
        printf("\n Deseja realizar outra operação? (s/n)");
        scanf("%c", &continuar);
        printf("\n");


    } while (continuar == 's' || continuar 'S');
     
    printf("Obrigado por usar a calculadora! Até a próxima.\n");
   

    return 0;

}