//Lucas Gonçalves e Silva
//11811EAU016

#include <stdio.h>
int main() {
	int est = 0, i = 0;
	char bits [256];
	printf("Digite o numero desejado: ");
	scanf("%s", bits);
	while(bits[i] != '\0')
	{
		if(est == 0 && bits[i] == '0') est = 0;
		else if (est == 0 && bits[i] == '1') est = 1;
		else if (est == 1 && bits[i] == '0') est = 2;
		else if (est == 1 && bits[i] == '1') est = 0;
		else if (est == 2 && bits[i] == '0') est = 1;
		else if (est == 2 && bits[i] == '1') est = 2;
		i++;
	}
	if(est == 0) printf("\nMultiplo de 3");
	else printf("\nNao eh multiplo de 3");
	return 0;
}
