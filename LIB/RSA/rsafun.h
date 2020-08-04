#ifndef RSAFUN_H
#define RSAFUN_H

#include "rsa_global.h"
#include <iostream>
using namespace std;

class RSASHARED_EXPORT RSAFUN
{

public:
    RSAFUN();
    void RSA_Initialize(int &n, int &e, int &d);
    void RSA_Encrypt(int e, int n, string str,string load);
    void RSA_Decrypt(int d, int n, string str,string load);
};

#endif // RSAFUN_H
