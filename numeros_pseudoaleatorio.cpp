#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#include"conio.h"
#include"string.h"
#define N 8
int meio(int n1,int n2){ // a função "meio" servirá para pegar as partes centrais dos numeros.
	char num[10],mq[10],aux[8];
	int cont,cont1=0,i, saida,j;
	 int valor;
	 
	valor=n1*n2;

	

	itoa(valor,num,10); // converte int em string

	cont=strlen(num);
	if(cont%2!=0){ // verificar se o numero possui quantidade de caracteres par, caso não ocorra, acrencenta-se '0' no numero. E sera tudo inserido em uma nova string
		cont=cont+1;
	aux[0]='0';
	for(i=0;i<cont+1;i++){
		aux[i+1]=num[i];
	}
}else{// caso seja par a quantidade de caracteres sera copiada para nova sting

	strcpy(aux,num);
}
j=strlen(aux);
i=0;
	while(i<j/2){ // o j/2 me dará a quantidade de numero que tenho que retirar
	
	
		mq[i]=aux[i+int(j/4)]; // j/4 me da a posição da string que tenho que começar a percorrer
		i=i+1;
		
	
}
		
	saida= atoi(mq); // convertendo string em numero inteiro
	return int(saida);
}
int congru(int A, int C, int m, int R0){
	int y, r1;
	y= (A*R0)+C;
	r1=y%m;
	return r1;
}
int main(){
int s,op,i,aux,aux1,s1,s2,res;


do{
	system("cls");
	printf("\n Escolha uma opcao:");
	printf("\n1-Metodo Meio quadrado");
	printf("\n2-Metodo Meio produto");
	printf("\n3- Metodo da Congruencia");
	printf("\n0-sair");
	printf("\n->");
	scanf("%d",&op);
	switch(op) {
		
		case 1:
			printf("===============Metodo Meio quadrado========================");
			printf("\n Informe a semente:");
			scanf("%d",&s);
			aux=s;
			aux1=s;
			for(i=0;i<N;i++){
				res=aux=aux1=meio(aux,aux1);
				printf("\n%d",res);
			}
			getch();
		break;
		case 2:
			printf("==========Metodo Meio produto===============");
			printf("\n Informe a  1a semente:");
			scanf("%d",&s1);
			printf("\n Informe a 2a semente:");
			scanf("%d",&s2);
			aux=s1;
			aux1=s2;
			for(i=0;i<N;i++){
				res=meio(aux,aux1);
				printf("\n%d\n",res);
				aux=aux1;
				aux1=res;
				
			}
			getch();
		break;
		case 3:
			
				printf("==========Metodo Congruencia===============");
				int a,c,M,r0; // exemplo do livro a=9 c=1 M=17 r0=8
				printf("\nInforme um valor para 'a':");
				scanf("%d",&a);
				printf("\n Informe um valor para 'c':");
				scanf("%d",&c);
				printf("\n Informe um valor para 'M':");
				scanf("%d",&M);
				printf("\n Informe um valor para 'r0':");
				scanf("%d",&r0);
				for(i=0;i<N;i++){
					res=congru(a,c,M,r0);
					printf("\n%d",res);
					r0=res;
				}
				getch();
		case 0:
		break;
		default:
			printf("\n Opcao Invalida");
			getch();
		break;
}

	
	
}while(op!=0);













system("pause");
return (0);
}

