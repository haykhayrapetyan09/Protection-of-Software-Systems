#include <iostream>
using namespace std;

//Algorithm 1
int gcd1(int a, int b){
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}


//Algorithm 2
int gcd2(int a, int b){
    if (a > b)
        return gcd2(a-b, b);
    else if(a == b)
        return a;
    return gcd2(a, b-a);
}


//Algorithm 3 (Euclidean algorithm)
int gcd3(int a, int b){
    if (b==0) return a;
    return gcd3(b, a % b);
}



int main(){
    int a = 0, b = 1;
    cout << gcd3(a,b) << endl;
    return 0;
}
