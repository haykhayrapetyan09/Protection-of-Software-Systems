#pragma once
#include <iostream>
using namespace std;

class ASCIIEncoder
{
public:
    string encode(string& text, int& k);
    string decode(string& text, int& k);
};