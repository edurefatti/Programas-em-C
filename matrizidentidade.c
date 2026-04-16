#include<stdio.h>
int main (){
    int maior = 0, n;
     printf("Voce quer que sua matriz identidade tenha quantas linhas e colunas?");
     scanf("%d", &n);
int mat[n][n];

for (int i = 0; i < n; i++){
    for (int j = 0; j<n;j++){
    if (i == j){
        mat[i][j]=1;}
        else {
        mat[i][j]=0;}
    }
}
printf("\nMatriz identidade %dx%d:\n",n);
for (int k = 0; k < n; k++){
    for (int l = 0; l<n;l++){
 printf("%d\t",mat[k][l]);
    }
    printf("\n");
}




return 0;
}
