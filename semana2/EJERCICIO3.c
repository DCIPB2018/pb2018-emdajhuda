/*Programa creado el 15 de agosto del 2018*/
#include <stdio.h>

int main()

{
	float a, b, c, d, e, f, g, h;
	printf("En este programa podras hacer los claculos siguientes: \n");
	printf("1.- e=(a+b)*c/d \n");
	printf("2.- e=((a+b)*c)/d \n");
	printf("3.- e=(a+b)*c/d \n");
	printf("4.- e=a+(b*c)/d \n");
	printf("Introduce los valores de las variables: \n");
	printf("a: \n");
	scanf("%f", &a);
	printf("b: \n");
	scanf("%f", &b);
	printf("c: \n");
	scanf("%f", &c);
	printf("d: \n");
	scanf("%f", &d);
	e=(a+b)*c/d;
	f=((a+b)*c)/d;
	g=(a+b)*c/d;
	h=a+(b*c)/d;
	printf("Para la 1 \n");
	printf(":e=%f \n", e);
	printf("Para la 2 \n");
	printf(":e=%f \n", f);
	printf("Para la 3 \n");
	printf(":e=%f \n", g);
	printf("Para la 4 \n");
	printf(":e=%f \n", h);
}
// Me falto agregar los calculos
