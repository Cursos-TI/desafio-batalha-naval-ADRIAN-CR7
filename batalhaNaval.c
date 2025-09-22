#include <stdio.h>#include <stdio.h>
 
int main() {
 int i;
    int matriz[10][10] = {
        {3,0,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,3,3,3,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
      };
      for(i=0;i<10;i++){
 printf("%d",matriz[i][0]);
 printf("%d",matriz[i][1]);
 printf("%d",matriz[i][2]);
 printf("%d",matriz[i][3]);
 printf("%d",matriz[i][4]);
 printf("%d",matriz[i][5]);
 printf("%d",matriz[i][6]);
 printf("%d",matriz[i][7]);
 printf("%d",matriz[i][8]);
 printf("%d\n",matriz[i][9]);

      }
return 0;}
