#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a;
    cin >> n;
    a = 0;

    queue<int> q;

    while(a != n){
        a++; //순서주의
        q.push(a);
        // cout << a <<endl;   
    }

    while(q.size()!=1){
        //버린다 = front없얜다
        q.pop(); 
        //front를 back으로 옮긴다
        a = q.front();
        q.push(a);
        q.pop();
    }
    cout<<q.front();

}