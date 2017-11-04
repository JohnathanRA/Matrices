#include<stdio.h>
int main(){
int *p;
 int i, j, col, ren, c;
printf("\t\tPRODUCTO DE UNA MATRIZ POR UN ESCALAR \n\n\n");
printf("\t\tEscribe el valor del escalar:\n", c );
scanf("%d", &c);
 printf("\t\tIntroduce el tamaño de la matriz ren col:" );
 scanf("%d, %d", &ren, &col);
  int matrix[ren][col];
 for( i = 0 ; i < ren ; i++){
		for( j = 0 ; j < col ; j++){
			printf("\t\tEscribe el valor en %d, %d :" , i , j);
			scanf("%d", &matrix[i][j]);
			*p=matrix[i][j]*c;
      matrix[i][j]=*p;
      printf(" %d", matrix[i][j]);
      *p=0;
		}
	}
	printf("\n");
	for( i = 0 ; i < ren ; i++){
		for( j = 0 ; j < col ; j++){
			printf("\t%d ", matrix[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
