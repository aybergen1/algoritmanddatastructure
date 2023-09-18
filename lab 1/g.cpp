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
   
    vector<int>wer;
    for (int i = 2; i <=10000; i++) {
        if (isPrime(i)){
            wer.push_back(i);
        }
    }
    vector<int> superprime;
    for (int j = 0; j <=wer.size(); j++) {
       if (isPrime(j+1)) {
            superprime.push_back(wer[j]);
        }
    }
  int a; cin >> a;
    cout << superprime[a-1] << endl;


}