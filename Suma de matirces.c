#include<stdio.h>
int main(){
  int M1[3][3]={{1,2,3},{3,2,1},{1,2,3}};
  int M2[3][3]={{1,2,3},{3,2,1},{1,2,3}};
  int M3[3][3]={{},{},{}};
  int i, j, t=0, *p;
  *p=&t;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("Dame 1 numero para la primer matriz\n");
      scanf("%d", & M1[i][j]);
      printf("Dame 1 numero para la segunda matriz\n");
      scanf("%d", & M1[i][j]);
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      *p=M1[i][j]+M2[i][j];
      M3[i][j]=*p;
      printf(" %d", M3[i][j]);
      *p=0;
    }
    printf("\n");
  }
}
