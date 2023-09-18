
#include <bits/stdc++.h>
using namespace std;

int main(){
    queue <int> b;
    for (int i = 0; i < 5; i++){
        int a; cin >> a;
        b.push(a);
    }
    queue <int> n;
    for (int i = 0; i < 5; i++){
        int a; cin >> a;
        n.push(a);
    }
    bool flag = true;
    int i = 0, B = 0, N = 0;
    while(flag){
        if ( n.empty() == true or b.empty() == true){
            break;
        }
        if (i == 1000000){
            cout<<"blin nichya";
            return 0;
        }
        if (b.front() == 0 and n.front() == 9){
            B++;
            b.push(b.front());
            b.pop();
            b.push(n.front());
            n.pop();
        }
        else if (b.front() == 9 and n.front() == 0){
            N++;
            n.push(b.front());
            b.pop();
            n.push(n.front());
            n.pop();
        }
        else if(b.front() > n.front()){
            B++;
            b.push(b.front());
            b.pop();
            b.push(n.front());
            n.pop();
        }
        else if (b.front() < n.front()) {
            N++;
            n.push(b.front());
            b.pop();
            n.push(n.front());
            n.pop();
        }
        i++;
    }

    if(N > B){
        cout<<"Nursik "<<N+B;
    }
    else cout<<"Boris "<<B+N;
    return 0;
}