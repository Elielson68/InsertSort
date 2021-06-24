#include <stdio.h>

void InsertSort(int *v, int tamanho){
  int p, t, valor;

  for(p=1;p<tamanho;p++){
    valor = v[p];
    for(t = p-1;t >= 0 && v[t] > valor; t--){
      v[t+1] = v[t];
    }
    v[t+1] = valor;
  }
}

void ShowNums(int n[]){
  int i = 0;
  while(n[i] != n[-1]){
    printf("%d ", n[i]);
    i++;
  }
}

int main(void) {
  int nums[]= {5,2,3,6,7,9,1,4};
  InsertSort(nums, 9);
  ShowNums(nums);
  return 0;
}