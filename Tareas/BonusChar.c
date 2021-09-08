#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, p, resultado, resultado2; 
	char z;
	
	printf("Dame el primer numero entero: ");
	scanf("%d", &x);
	
	printf("Dame el segundo numero entero: ");
	scanf("%d", &y);
	
	printf("Que operacion quieres realizar? (seleccionandola con el simbolo que esta entreparentesis)?\n");
	printf(" Suma(+)\n Resta(-)\n Multiplicacion(* o x)\n Division(/)\n Potencia(^)\n Modulo(%)\n Raiz Cuadrada(R o r): ");
	scanf(" %c", &z);
	
	switch(z)
	{
		case '+':
			resultado = x + y;
			printf("El resultado de tu suma es: %d", resultado);
			break;
		case '-':
			resultado = x - y;
			printf("El resultado de tu resta es: %d", resultado);
			break;
		case '*':
			resultado = x * y;
			printf("El resultado de tu multiplicacion es: %d", resultado);
			break;
		case 'x':
			resultado = x * y;
			printf("El resultado de tu multiplicacion es: %d", resultado);
			break;
		case '/':
			resultado = x / y;
			printf("El resultado de tu division es: %d", resultado);
			break;
		case '^':
			printf("A que potencia quieres elevar los numeros: ");
			scanf("%d", &p);
			
			resultado = pow(x, p);
			resultado2 = pow(y, p);
			
			printf("El resultado de tu primer numero es: %d\n", resultado);
			printf("El resultado de tu segundo numero es: %d\n", resultado2);
			break;
		case '%':
			resultado = x % y;
			printf("El resultado de tu modulo es: %d", resultado);
			break;
		case 'R':
			resultado = sqrt(x);
			resultado2 = sqrt(y);
			
			printf("El resultado de tu primer numero es: %d\n", resultado);
			printf("El resultado de tu segundo numero es: %d\n", resultado2);
		    break;
		case 'r':
			resultado = sqrt(x);
			resultado2 = sqrt(y);
			
			printf("El resultado de tu primer numero es: %d\n", resultado);
			printf("El resultado de tu segundo numero es: %d\n", resultado2);
		    break;			
	}
	
	return(0);
}
