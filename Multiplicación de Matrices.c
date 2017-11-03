#include<stdio.h>
int main(){
	int M1[3][3]={{},{},{}};
	int M2[3][3]={{},{},{}};
	int M3[3][3]={{},{},{}};
	int i, j, t=0;
  int *p;
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
	}
for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  		printf("%d ",M1[i][j]);
  	}
  	if(i==1){
	  
  	printf("x ");
  }else{
  	printf("\t");
  }
  	for(j=0;j<3;j++){
  		printf("%d ",M2[i][j]);
	}
	if(i==1){
	  
  	printf("= ");
  }else{
  	printf(" \t");
  }	
    for(j=0;j<3;j++){
      *p=M1[i][j]*M2[i][j];
      M3[i][j]=*p;
      if(M3[i][j]>9){
      		printf("%d ", M3[i][j]);
		  }else{
		  printf("%d  ", M3[i][j]);
	}
      *p=0;
    }
    printf("\n");

  }
}

