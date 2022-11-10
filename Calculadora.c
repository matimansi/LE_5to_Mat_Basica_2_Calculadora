
#include <stdio.h>

float calculadora (int valor_a, int valor_b, char op);

int main()
{
	signed int num1, num2;
	char operacion;
	float resultado;
	printf("\nBienvenido a mi programa...\n");
	printf("Ingrese el primer valor entero\n>>> ");
	fflush(stdin);
	scanf("%d", &num1);
	printf("Ingrese el segundo valor entero\n>>> ");
	fflush(stdin);
	scanf("%d", &num2);
	printf("Operacion [ + | - | * | / ]\n>>> ");
	fflush(stdin);
	scanf("%c", &operacion);
	resultado = calculadora(num1, num2, operacion);
	printf("Resultado: %.3f\n\n", resultado);
	return 0;
}

float calculadora (int valor_a, int valor_b, char op)
{
	float resultado;
	if (op == '+') resultado = valor_a + valor_b;
	if (op == '-') resultado = valor_a - valor_b;
	if (op == '*') resultado = valor_a * valor_b;
	if (op == '/')
	{
		if ((valor_a != 0) && (valor_b == 0)) printf("No se puede dividir por 0\n");
		if ((valor_a == 0) && (valor_b == 0)) printf("Resultado Indefinido\n");
		if ((valor_a != 0) && (valor_b != 0)) resultado = valor_a / valor_b;
	}
	return (resultado);
}