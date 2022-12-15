#pragma once
#include "Helper.h"
#include <iostream>

class TransposeEncoder
{
public:
    int m;
    int n;
    TransposeEncoder(int m, int n);
    string encode(string& text, int& M, int& N);
};

