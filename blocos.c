#include <stdio.h>

int main(){
    int N;

    scanf("%d",&N);

    while(N!=0){
    int i, j, media=0, aux, resultado=0;
    int H[N];

    for(i=0; i<N; i++){
        scanf("%d",&H[i]);
        media+=H[i];
    }
    media= media/N;

    for(i=0; i<N; i++){
        if(H[i]>media){
                aux=H[i]-media;
                H[i]=media;
                resultado+=aux;
        }
    }

    media= media/N;
    printf("%d\n",resultado);
    scanf("%d",&N);
    }

    return 0;
}
