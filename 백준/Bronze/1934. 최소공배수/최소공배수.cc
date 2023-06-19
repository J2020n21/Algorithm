#include <iostream>
using namespace std;

int main(){
  int t, a, b, x, y;
  cin >> t;

  while(t--){
    cin >> a >> b;
    if(a < b){int tmp=b; b=a; a=tmp;}
    x = a; y = b;
    int c = x % y;
    while(c != 0){
      x = y;
      y = c;
      c = x % y;
    }
    cout << (a*b) / y << endl;
  }
}