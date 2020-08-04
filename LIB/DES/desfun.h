#ifndef DESFUN_H
#define DESFUN_H

#include "des_global.h"

class DESSHARED_EXPORT DESFUN
{

public:
    DESFUN();
    bool DES_Act(char *Out, char *In, long datalen, const char *Key, int keylen, bool Type);
};

#endif // DESFUN_H
