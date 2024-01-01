#include <iostream>
#include <string>
#include <stack>
using namespace std;

string check(){
  string str;
    cin >> str;

    stack<char> stack;
    for(int i=0; i < str.size() ;i++){
      if(str[i] == '('){ //'('면 넣기
        stack.push(str[i]); 
      }
      else{ //')'면
        if(stack.empty()){ //스택이 비어있는 경우 (더 많이 빼지는 경우) 
          return "NO";
          }
        else {//  빼기
          stack.pop();          
          }
      }
    }
    if(stack.empty()){ //반복 완료후 빈 스택인 경우
      return "YES";
    } 
    else{//반복완료후 원소가 stack에 남은 경우
      return "NO";
    }
  }


int main(){
  int t;
  cin >> t;
  //push와 pop을 이용
  while(t--){
    cout <<check()<<endl;
  }
}