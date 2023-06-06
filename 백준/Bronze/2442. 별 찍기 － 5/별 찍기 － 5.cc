#include <iostream>
using namespace std;

int main() {
  int n,p;
  cin >> n;
  p=n;
  for(int i=1;i<p+1;i++) { //처음받은 n값(p)만큼 줄 반복
    //cout <<"i : "<<i<<endl;
    //cout <<"n : "<<n<<endl;
    for(int s=n-1; s>0; s--){
      cout <<" "; // n 만큼 공백찍기 (p=n)
    }

    for (int j = 0; j < (2 * i - 1); j++) {
      cout << "*"; // 2n-1번만큼 별찍기
    }
    cout << "\n";
    n -= 1;
  }
}