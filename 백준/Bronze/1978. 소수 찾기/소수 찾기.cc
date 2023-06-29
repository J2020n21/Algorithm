#include <iostream>
using namespace std;
static int TOT = 0;

void isPrime(int n){
  if(n<=1){
    return;
  }
  else if(n==2){TOT += 1;}
  else if(n>2){
    for(int i=2;i<n;i++){
      if(n%i == 0){
        return;
      }
    }
    TOT += 1;
  }
}

int main(){
  int n,nums;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> nums;
    isPrime(nums);
  }
  cout << TOT;
}
