#include<stdio.h>
#include<stdlib.h>

void troca(int **pa,int **pb){
    int *temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;


}


int main(){

    int *pa, *pb, i,j;
    pa=malloc(sizeof(int)*10);
    pb=malloc(sizeof(int)*20);

    for(i=0;i<10;i++){
        pa[i]=i;
    }

    for(j=0;j<20;j++){
        pb[j]=j;
    }

    for(i=0;i<10;i++){
    printf("%d ",pa[i]);
    }
    printf("\n");
    for(j=0;j<20;j++){
    printf("%d ", pb[j]);
    }

    troca(&pa, &pb);

    printf("\n");
    for(i=0;i<20;i++){
    printf("%d ",pa[i]);
    }
    printf("\n");
    for(j=0;j<10;j++){
    printf("%d ", pb[j]);
    }
free(pa);
free(pb);

    return 0;
}
