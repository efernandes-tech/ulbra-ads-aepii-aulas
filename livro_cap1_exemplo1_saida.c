#include<stdio.h>

main() {
	float valor1=136.472;

	printf("\n%%f -> %f",valor1);
	printf("\n%%8.1f -> %8.1f",valor1);
	printf("\n%%08.1f -> %08.1f",valor1);
	printf("\n%%-8.1f-> %-8.1f",valor1);
	
	int valor2=790;
	printf("\n%%i -> %i",valor2);
	printf("\n%%5i -> %5i",valor2);
	printf("\n%%05i -> %05i",valor2);
	printf("\n%%-5i -> %-5i",valor2);
	
	printf("\n%%2i -> O total é %2i.",350);
	printf("\n%%4i -> O total é %4i.",350);
	printf("\n%%5i -> O total é %5i.",350);
}
