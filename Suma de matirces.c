#include<stdio.h>
int main(){
  int M1[3][3]={{1,2,3},{3,2,1},{1,2,3}};
  int M2[3][3]={{1,2,3},{3,2,1},{1,2,3}};
  int M3[3][3]={{},{},{}};
  int i, j, t=0, *p;
  p=&t;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("Da 2 numeros para operar matrices\n");
      scanf("%d %d", & M1[i][j],&M2[i][j]);
    }
  }
for(i=0;i<3;i++){
  	for(j=0;j<3;j++){
  		printf("%d ",M1[i][j]);
  	}
  	if(i==1){
	  
  	printf("+ ");
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
      	*p=M1[i][j]+M2[i][j];
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
