#include<stdio.h>
int main(){
	int M1[3][3]={{},{},{}};
	int M2[3][3]={{},{},{}};
	int M3[3][3]={{},{},{}};	
	int i, j, t=0;
  int *p;
  p=&t;
  printf("\t\tRESTA DE MATRICES \n\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			switch(j){
				case 0:
					printf("\tDame el primer valor de la fila %d de la primera y segunda matriz:\n", i+1);
					scanf("%d %d", & M1[i][j], & M2[i][j]);
          				break;
				case 1:
					printf("\tDame el segundo valor de la fila %d de la primera y segunda matriz:\n", i+1);
					scanf("%d %d", & M1[i][j], & M2[i][j]);
          				break;
				case 2:
					printf("\tDame el tercer valor de la fila %d de la primera y segunda matriz:\n", i+1);
					scanf("%d %d", & M1[i][j], & M2[i][j]);
          				break;
			}
		}
	}
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      *p=M1[i][j]-M2[i][j];
      M3[i][j]=*p;
      printf("\t %d", M3[i][j]);
      *p=0;
    }
    printf("\n");
}
}
