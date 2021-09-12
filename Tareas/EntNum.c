#include <stdio.h>

void PideNumfor(int x, int y);

int main()
{
	int z, y;
	
	printf("Dame el numero de inicio: ");
	scanf("%d", &z);
	printf("Dame el numero en que termina: ");
	scanf("%d", &y);
	
	PideNumfor(z, y);
	
	return(0);
	
}

void PideNumfor(int x, int y)
{
	int i=1;
	
	for(i+=x; i<y; i++)
		printf("%d", i);
}



