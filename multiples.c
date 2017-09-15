#include <stdio.h>

int main(){
  int ans = 0;
  int i = 0;
  for(i; i < 1000; i++){
    if(i % 3 == 0 || i % 5 == 0){
      ans += i;
    }
  }printf("the answer is %d\n", ans);
  return ans;
}
