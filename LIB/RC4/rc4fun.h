#ifndef RC4FUN_H
#define RC4FUN_H
#include <iostream>
#include "rc4_global.h"
using namespace std;
class RC4SHARED_EXPORT RC4FUN
{

public:
    RC4FUN();
    void DataEncrypt(string k, string str, string *result);
    void DataDecrypt(string k, string str, string *result);
};

#endif // RC4FUN_H
