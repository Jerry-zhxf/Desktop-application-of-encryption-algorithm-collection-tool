#ifndef FSFUN_H
#define FSFUN_H

#include <iostream>
#include "fs_global.h"
using namespace std;

class FSSHARED_EXPORT FSFUN
{

public:
    FSFUN();
    int canshu(int k);
    void jiami(string str, int k, int b, string* result);
    void jiemi(string pass, int k, int b, string* result);

};

#endif // FSFUN_H
