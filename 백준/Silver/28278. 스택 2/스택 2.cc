#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,order,x;
    stack<int> s;

    cin >> n;
    while(n--){
        cin >> order;
        switch (order){
            case 1:
                cin >> x;
                s.push(x);
            break;

            case 2:
                if(s.empty())
                    cout << -1 <<"\n";
                else{
                    cout << s.top() <<"\n";
                    s.pop();
                }
            break;

            case 3:
                cout << s.size() <<"\n";
            break;

            case 4:
                s.empty()? cout << 1 <<"\n" : cout << 0 <<"\n";
            break;

            case 5:
                s.empty()? cout << -1 <<"\n" : cout << s.top() <<"\n"; 
            break;

        }
  
    }

}