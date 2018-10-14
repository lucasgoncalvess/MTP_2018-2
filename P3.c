//Lucas Gonçalves e Silva 
//11811EAU016

#include <stdio.h>

int num(char str[]){
	int i=0, resultado=0;
		for(i;str[i]!='\0'; i++){
			if(str[i]>47 && str[i]<58){
			resultado=resultado*10 + (str[i]-48);
			}
		}
	return resultado;
}

int main(){
	char str[256];
	scanf("%s", str);
	printf("%d", num(str));
	return 0;
}