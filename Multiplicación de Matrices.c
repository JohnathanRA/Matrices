#include<stedio.h>

int main()
{
  int main i,j,k,l,m,n,f;
  float M1[3][3], M2[3][3], M3[3][3];
  printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
  printf("\nINGRESE LA FILA Y COLUMNA DE LA PRIMERA MATRIZ\n");
  scantf("%d", &i);
  scantf("%d", &j);
  printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
  printf("\nINGRESE LA FILA Y COLUMNA DE LA SEGUNDA MATRIZ\n");
  scantf("%d", &k);
  scantf("%d", &l);
  printf("\n");
  if (i==k)
    
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
      *p=M1[i][j]*M2[i][j];
      M3[i][j]=*p;
      printf(" %d", M3[i][j]);
      *p=0;
    }
    printf("\n");
  }
}
