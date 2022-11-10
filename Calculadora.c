/*
	Recibo dos valores y un caracter que indique la operación (+, -, /, *) a realizar.
	Verificar casos indeterminados. Devuelvo el resultado.

	>>> TERMINADO <<<
*/

#include <stdio.h>
//#include <stdio_ext.h>

float calculadora (int valor_a, int valor_b, char op);

int main()
{
	signed int num1, num2;
	char operacion;
	float resultado;
	printf("Bienvenido a mi programa...\n");
	printf("Ingrese el primer valor entero\n>>> ");
	__fpurge(stdin);
	scanf("%d", &num1);
	printf("Ingrese el segundo valor entero\n>>> ");
	__fpurge(stdin);
	scanf("%d", &num2);
	printf("Operacion [ + | - | * | / ]\n>>> ");
	__fpurge(stdin);
	scanf("%c", &operacion);
	resultado = calculadora(num1, num2, operacion);
	printf("Resultado: %.3f", resultado);
	return 0;
}

float calculadora (int valor_a, int valor_b, char op)
{
	float resultado;
	if (op == '+')
	{
		resultado = valor_a + valor_b;
	}
	if (op == '-')
	{
		resultado = valor_a - valor_b;
	}
	if (op == '*')
	{
		resultado = valor_a * valor_b;
	}
	if (op == '/')
	{
		resultado = valor_a / valor_b;
	}
	return (resultado);
}