#include<stdio.h>
main(){
	int j=0,k=0,l=0;
	printf("%i | %i | %i\n", j, k, l);
	j=k=10;
	printf("%i | %i | %i\n", j, k, l);
	l=++j;
	printf("%i | %i | %i\n", j, k, l);
	j=-j;
	printf("%i | %i | %i\n", j, k, l);
	k++;
	printf("%i | %i | %i\n", j, k, l);
	j=j+k-l--;// O "l" que e decrementado e nao o valor que entrou no "j".
	printf("%i | %i | %i\n", j, k, l);
}
