#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
bool isPrime(int n) {
    if(n == 0 or n == 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
int a;
cin >> a;
vector<int>wer;
    for (int i = 2; i <=10000; i++) {
        if (isPrime(i)){
            wer.push_back(i);
        }
    }
cout<<wer[a-1];
    




}
