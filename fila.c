#include <stdio.h>

int main(){
    int N, i, j, aux;
    scanf("%d",&N);

    int MatrizN[N], MatrizR[N];
    char MatrizC[N];

    for(i=1; i<=N; i++){
        scanf("%d",&MatrizN[i]);
        scanf(" %c",&MatrizC[i]);
        MatrizR[i]=0;
    }

    for(i=1; i<=N; i++){
        aux=i;
        MatrizR[i]=i;
        for(j=1; j<=N; j++){
            if(MatrizN[j]>MatrizN[aux]){
                MatrizR[i]=j;
                aux=j;
            }
            if(MatrizN[j]==MatrizN[aux] && MatrizC[j]=='S' && MatrizC[aux]=='N'){
                MatrizR[i]=j;
                aux=j;
            }
        }
        MatrizN[aux]=0;
    }

    for(i=1; i<=N; i++){
        printf("%d\n",MatrizR[i]);
    }
  
  return 0;
  
}
