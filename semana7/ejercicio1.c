#include <stdio.h>
#include <math.h>
int main()
{

	FILE* data;
	FILE* archivo;
	int n , j, i, k;
	float p, a, b, fx, ix=0.0, x, s, e, h=0.0;
	
	data = fopen("ejercicio1in.txt", "r");

	fscanf(data, "%f", &p);
	fscanf(data, "%f", &a);
	fscanf(data, "%f", &b);
	fscanf(data, "%i", &n);
        fscanf(data, "%i", &k);
	fclose(data);

	x=a;
	e=(b-a)/n;

	archivo = fopen("ejercicio1out.txt", "w");

	fprintf(archivo, "x\t f(x)\t i(x)\n");
	for (j=1; j<=(n+1); j++)
	{
		fx=pow(x,p);
		s=0.0;
		h=(x-a)/k;
		for (i=1; i<=(k-1); i++)
		{
			s+=2*(pow((a+(i*h)),p));
		}
	ix=(h/2)*(pow(a,p)+s+pow(b,p));
	fprintf(archivo, "%f\t %f\t %f\n", x, fx, ix);

	x+=e;

}
	fclose(archivo);
return 0;
}


