#include<stdio.h>
int main(){
  int M1[3][3]={{1,2,3},{3,2,1},{1,2,3}};
  int M2[3][3]={{1,2,3},{3,2,1},{1,2,3}};
  int M3[3][3]={{},{},{}};
  int i, j, t=0;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      t=M1[i][j]+M2[i][j];
      M3[i][j]=t;
      printf(" %d", M3[i][j]);
      t=0;
    }
    printf("\n");
  }
}
