#include<stdio.h>
int main(){
	int M1[3][3]={{2,0,1},{3,0,0},{5,1,1}};
	int M2[3][3]={{1,0,1},{1,2,1},{1,1,0}};
	int M3[3][3]={{},{},{}};
	int i, j, k=0, t=0;
	int *p;/*Usamos apuntadores porque comentó que era más rápido.... creo*/
	p=&t;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			switch(j){
				case 0:
					printf("Dame el primer valor de la fila %d de la primera y segunda matriz:\n", i+1);
					scanf("%d %d", & M1[i][j], & M2[i][j]);
          			break;
				case 1:
					printf("Dame el segundo valor de la fila %d de la primera y segunda matriz:\n", i+1);
					scanf("%d %d", & M1[i][j], & M2[i][j]);
          			break;
				case 2:
					printf("Dame el tercer valor de la fila %d de la primera y segunda matriz:\n", i+1);
					scanf("%d %d", & M1[i][j], & M2[i][j]);
          			break;
			}
		}
	}/*El letrero que dice que valores debes ingresar pudó ser más reducido pero preferimos especificar de que fila y que valor de esa fila era*/
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			while(k<3){
			*p=M1[i][k]*M2[k][j]+*p;
			k++;
			}
			k=0;
			M3[i][j]=*p;
			printf("  %d", M3[i][j]);
    			*p=0;
		}
	printf("\n");
	}
	return 0;
}
