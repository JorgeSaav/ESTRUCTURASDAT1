#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, p, z, resultado, resultado2; 
	
	printf("Dame el primer numero entero: ");
	scanf("%d", &x);
	
	printf("Dame el segundo numero entero: ");
	scanf("%d", &y);
	
	printf("Que operacion quieres realizar? (seleccionandola con el simbolo que esta entreparentesis)?\n");
	printf(" Suma(1)\n Resta(2)\n Multiplicacion(3)\n Division(4)\n Potencia(5)\n Modulo(6)\n Raiz Cuadrada(7): ");
	scanf("%d", &z);
	
	switch(z)
	{
		case 1:
			resultado = x + y;
			printf("El resultado de tu suma es: %d", resultado);
			break;
		case 2:
			resultado = x - y;
			printf("El resultado de tu resta es: %d", resultado);
			break;
		case 3:
			resultado = x * y;
			printf("El resultado de tu multiplicacion es: %d", resultado);
			break;
		case 4:
			resultado = x / y;
			printf("El resultado de tu division es: %d", resultado);
			break;
		case 5:
			printf("A que potencia quieres elevar los numeros: ");
			scanf("%d", &p);
			
			resultado = pow(x, p);
			resultado2 = pow(y, p);
			
			printf("El resultado de tu primer numero es: %d\n", resultado);
			printf("El resultado de tu segundo numero es: %d\n", resultado2);
			break;
		case 6:
			resultado = x % y;
			printf("El resultado de tu modulo es: %d", resultado);
			break;
		case 7:
			resultado = sqrt(x);
			resultado2 = sqrt(y);
			
			printf("El resultado de tu primer numero es: %d\n", resultado);
			printf("El resultado de tu segundo numero es: %d\n", resultado2);
		    break;
			
	}
	
	return(0);
}
