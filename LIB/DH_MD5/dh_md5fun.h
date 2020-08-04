#ifndef DH_MD5FUN_H
#define DH_MD5FUN_H

#include "dh_md5_global.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <sstream>
using namespace std;
typedef long long lint;
#define F(x,y,z) ((x & y) | (~x & z))
#define G(x,y,z) ((x & z) | (y & ~z))
#define H(x,y,z) (x^y^z)
#define I(x,y,z) (y ^ (x | ~z))
#define ROTATE_LEFT(x,n) ((x << n) | (x >> (32-n)))
#define FF(a,b,c,d,x,s,ac) \
{ \
    a += F(b,c,d) + x + ac; \
    a = ROTATE_LEFT(a,s); \
    a += b; \
}
#define GG(a,b,c,d,x,s,ac) \
{ \
    a += G(b,c,d) + x + ac; \
    a = ROTATE_LEFT(a,s); \
    a += b; \
}
#define HH(a,b,c,d,x,s,ac) \
{ \
    a += H(b,c,d) + x + ac; \
    a = ROTATE_LEFT(a,s); \
    a += b; \
}
#define II(a,b,c,d,x,s,ac) \
{ \
    a += I(b,c,d) + x + ac; \
    a = ROTATE_LEFT(a,s); \
    a += b; \
}

typedef struct
{
    unsigned int count[2];
    unsigned int state[4];
    unsigned char buffer[64];
}MD5_CTX;

class DH_MD5SHARED_EXPORT DH_MD5FUN
{

public:
    DH_MD5FUN();
    void MD5Init(MD5_CTX *context);
    void MD5Update(MD5_CTX *context,unsigned char *input,unsigned int inputlen);
    void MD5Final(MD5_CTX *context, string *result);
    lint qs(lint a,lint b,lint c);
    void LinkDH_MD5(string tem1, string tem2, string *result);
    void devideDH_MD5(string ach, string *tem1, string *tem2);
};

#endif // DH_MD5FUN_H
