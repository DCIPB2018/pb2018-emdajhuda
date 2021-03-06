/*Este programa puede transformar coordenadas cartecianas a polares y tambien puede transformar temperaturas. Fue creado el 24 de Agosto del 2018 por Judá Rodríguez (emdajhuda)*/
#include <stdio.h>
#include <math.h>

int main()

{
	int tarea;
	float C1, F1, K1, C2, F2, x, y, r, theta;
	char subtarea;
	
	printf("Este programa realiza dos funciones \n");
	printf("Presiona el número de la función que deseas realizar \n");
	printf("1) Transformar coordenadas cartesianas a polares \n");
	printf("2) Transformar temperaturas \n");
	scanf("%i", &tarea);

switch(tarea)
{
		case 1:
{
	printf("Inserta los valores de las coordenadas x, y: \n");
	printf("x \n");
	scanf("%f", &x);
	printf("y \n");
	scanf("%f", &y);
	
	r=sqrt(pow(x,2)+pow(y,2));
	theta=atan(y/x);
	theta=theta*180/3.1415926;
	
	if (x>0 && y>0)
{
	printf("Tu punto esta en el cuadrante 1 \n");
	printf("r = %f \n", r);
	printf("Theta = %f° \n", theta);
}
	else if (x<0 && y>0)
{
	printf("Tu punto esta en el cuadrante 2 \n");
	printf("r = %f \n", r);
	printf("Theta = %f° \n", theta);
}
	else if (x<0 && y<0)
{
	printf("Tu punto esta en el cuadrante 3 \n");
	printf("r = %f \n", r);
	printf("Theta = %f° \n", theta);
}
	else
{
	printf("Tu punto esta en el cuadrante 4 \n");
	printf("r = %f \n", r);
	printf("Theta = %f° \n", theta);
}
}
	break;
		case 2:
{
	printf("a) Para transformar de °C a °F y °k \n");
	printf("b) Para transformar de °F a °C \n");
	scanf("%c", &subtarea);
	
	if (subtarea=='a')
{
	printf("Proporciona la temperatura en °C que deseas transformar \n");
	scanf("%f ", &C1);
	K1=C1+273.15;
	printf("La temperatura en °K es: %f\n", K1);
	F1=(C1*1.8)+32;
	printf("La temperatura en °F es: %f\n", F1);
}
	else if (subtarea=='b')
{
	printf("Proporciona la temperatura en °F que deseas transformar \n");
	scanf("%f ", &F2);
	C2=(F2-32)/1.8;
	printf("La temperatura en °C es: %f\n", C2);
}
	else
{
	printf("Función no disponible");
}
}
	break;
		default:
{
	printf("Función no disponible \n");
}
}
return 0;
}
