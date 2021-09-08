#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, resultado, resultado2; 
	int z, p;
	
	printf("Dame el primer numero en decimal: ");
	scanf("%f", &x);
	
	printf("Dame el segundo numero en decimal: ");
	scanf("%f", &y);
	
	printf("Que operacion quieres realizar? (seleccionandola con el simbolo que esta entreparentesis)?\n");
	printf(" Suma(1)\n Resta(2)\n Multiplicacion(3)\n Division(4)\n Potencia(5)\n Modulo(6)\n Raiz Cuadrada(7): ");
	scanf("%d", &z);
	
	switch(z)
	{
		case 1:
			resultado = x + y;
			printf("El resultado de tu suma es: %.2f", resultado);
			break;
		case 2:
			resultado = x - y;
			printf("El resultado de tu resta es: %.2f", resultado);
			break;
		case 3:
			resultado = x * y;
			printf("El resultado de tu multiplicacion es: %.2f", resultado);
			break;
		case 4:
			resultado = x / y;
			printf("El resultado de tu division es: %.2f", resultado);
			break;
		case 5:
			printf("A que potencia quieres elevar los numeros: ");
			scanf("%d", &p);
			
			resultado = pow(x, p);
			resultado2 = pow(y, p);
			
			printf("El resultado de tu primer numero es: %.2f\n", resultado);
			printf("El resultado de tu segundo numero es: %.2f\n", resultado2);
			break;
		case 6:
			resultado = (int) x % (int) y;
			printf("El resultado de tu modulo es: %d", (int) resultado);
			break;
		case 7:
			resultado = sqrt(x);
			resultado2 = sqrt(y);
			
			printf("El resultado de tu primer numero es: %.2f\n", resultado);
			printf("El resultado de tu segundo numero es: %.2f\n", resultado2);
		    break;
			
	}
	
	return(0);
}
