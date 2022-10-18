#include <iostream>
using namespace std;

string encode(string& text, int& k){
    string encoded;
    for (int i=0; i<text.length(); i++){
        encoded += text[i]+k;
    }
    return encoded;
}

string decode(string& text, int& k){
    string decoded;
    for (int i=0; i<text.length(); i++){
        decoded += text[i]-k;
    }
    return decoded;
}


int main(){
    string text;
    cout << "Input text: "; getline(cin, text);
    int k = 3;
    
    string encoded = encode(text, k);
    cout << "Encoded: " << encoded << endl;
    
    string decoded = decode(encoded, k);
    cout << "Decoded: " << decoded << endl;
    
    return 0;
}
