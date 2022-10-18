#include <iostream>
using namespace std;

string encode(string& str){
    string out = "";
    int j = 0;
    int counter;
    
    for (int i=0; i<str.length(); i++){
        counter = 1;
        for (j=i+1; j<str.length(); j++){
            if(str[i]==str[j])
                counter++;
            else
                break; 
        }
        
        out+= "  ";
        out[out.length()-2] = str[i];
        out[out.length()-1] = counter;
        cout<< counter << " " << *(out.c_str() + out.length()-1)<<endl;
        
        

        // cout << counter << endl;
        //out.append((char) counter);
        i = j - 1;
    }
    return out;
}

// string decode(string& encoded){
//     return str;
// }

int main()
{
    string str = "aaaaaaaaaaaaaaaaaaabbcdddd";
    char out[1024];

    
    string encoded = encode(str);
    cout << encoded << endl;
    
    // string decoded = decode(encoded);
    // cout << decoded << endl;
    return 0;
}