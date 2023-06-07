#include <iostream>
using namespace std;

int main() {
  string s; 
  int alpha[26]={0,}; //97은 0으로/ 98은 1 ... / 122는 25
  cin >> s;//입력받기
  int lenS = s.length(); //길이
  //97-122
  for(int i=0;i<lenS;i++){
    int num =  int(s[i]) -97;   //아스키 코드 해당 범위 찾기
    alpha[num] += 1; //해당 위치 값 +1
  }
  //전체 결과 출력
  for(int num : alpha){
    cout <<num<<" ";
  }
  //cout <<endl<<"end";
}