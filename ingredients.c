#include <stdio.h>

int main(){
    int i, n, vet[4], ingredient;
    
    for(i=1;i<=4;i++) {
       scanf("%d", &ingredient);
       vet[i] = ingredient;
    }
    
    for(i=1;i<=4;i++) {
      if(vet[i+3] == 3 || vet[i+2] == 2 && vet[i+1] == 1){
        printf("%d\n", i);
      } else if(vet[i-3] == 3 || vet[i-2] == 2 && vet[i-1] == 1) {
        printf("%d\n", i); 
      }

    }
    
    return 0;
    
    
}