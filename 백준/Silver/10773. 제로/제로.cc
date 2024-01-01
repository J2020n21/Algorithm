#include <iostream>
#include <stack>
using namespace std;

int main(){
    int line,num,result;
    result = 0;
    cin >> line ;
    
    stack<int> s;

    while(line--){
        cin >> num;
        //num이 0이면 가장 위의 값을 삭제하고,
        if(num == 0)
            s.pop();
        
        else
            s.push(num); //아니면스택에 넣는다
        
    }
    //반복이 끝나면 적은 수의 합을 출력한다. n안의 값들을 더한다.
    while(!s.empty()){
        int top = s.top();
        result += top;
        s.pop();
    }
    cout << result;
}