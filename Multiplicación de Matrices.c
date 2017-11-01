#include<stedio.h>

int main()
{
  int main i,j,k,l,m,n,f;
  float M1[3][3], M2[3][3], M3[3][3];
  printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
  printf("\INGRESE LA FILA Y COLUMNA DE LA PRIMERA MATRIZ\n");
  scantf("%d", &i);
  scantf("%d", &j);
  printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
  printf("\INGRESE LA FILA Y COLUMNA DE LA SEGUNDA MATRIZ\n");
  scantf("%d", &k);
  scantf("%d", &l);
  printf("\n");
  if (i==k)
