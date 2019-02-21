#include<stdio.h>
void Fibonacci(x)
{
	int i, c=0, a, b;
	a=0;
	b=1;
	printf("\t1\n");
	for(i=1; i<x; i++)
	{
		c=a+b;
		printf("\t%d\n",c);
		a=b;
		b=c;
	}
}
int main()
{
	int o, n;
	system("color f2");
	printf("\n\t\t\tPrograma 10 Fibonacci Iterativo");
	printf("\n\t\t\t_______________________________");
	printf("\n\tEste programa te mostrara los primeros 'n' numeros de la");
	printf("\n\tsucesion de Fibonacci mediante Iteraciones.");
	printf("\n\n\tIntegrantes:");
	printf("\n\t\t\20 Victor\n");
	printf("\t\t\20 Alexis\n");
	printf("\t\t\20 Hugo\n");
	printf("\t\t\20 Monserrat\n");
	printf("\t\t\20 Vannesa\n\n");
	system("pause");
	system("cls");
	do{
		printf("Cuantos numeros quieres ver de la sucesion: ");
		scanf("%d",&n);
		while(n<=0)
		{
			printf("Intenta con un numero mayor que 0.\n");
			printf("Cuantos numeros quieres ver de la sucesion: ");
		    scanf("%d",&n);
		}
		Fibonacci(n);
		printf("Deseas repetir el programa?\n");
			printf("\tSi=1\tNo=0\t");
		scanf("%d",&o);
		while(o!=1 && o!=0)
		{
			printf("Opcion no valida intente de nuevo.\n");
			printf("\tSi=1\tNo=0\t");
		    scanf("%d",&o);
		}
		system("cls");
	}while(o==1);
	return 0;
}
