#ifndef LFSR_JKFUN_H
#define LFSR_JKFUN_H

#include "lfsr_j-k_global.h"
#include <iostream>
using namespace std;
class LFSR_JKSHARED_EXPORT LFSR_JKFUN
{

public:
    LFSR_JKFUN();
    char _2xor(char a, char b);
    char nor(char a);
    char cx(char a, char b);
    void _2to16(string tem, string *result);
    void dc_16(char a,char *result);
    void _16todc(string tem, string *result);
    void hexstrxor(string tem1, string tem2, string *result);

};

#endif // LFSR_JKFUN_H
