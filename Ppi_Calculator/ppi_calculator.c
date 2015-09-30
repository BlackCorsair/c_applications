#include <stdio.h>
#include <math.h>
void ppi(int ancho, int alto, float tam);
int main(){
	int ancho, alto;
	float tam;
	puts("introduce la resolución de tu monitor");
	puts("ancho:");
	scanf("%d", &ancho);
	puts("alto:");
	scanf("%d", &alto);
	printf("introduce el tamano de tu monitor: \n");
	scanf("&lf", &tam);
	ppi(ancho, alto, tam);
	while(ancho != 0){
		puts("introduce 0 para salir");
		scanf("%d", &ancho);
	}
	
}
void ppi(int ancho, int alto, float tam){
	double res;
	res = pow((pow(ancho, 2) + pow(alto, 2)), -2) / tam;
	puts("-------------------");
	printf("Tu monitor tiene %f ppi", res);
}