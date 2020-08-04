#include "rc4fun.h"
#include <string.h>
#include <iostream>
using namespace std;

RC4FUN::RC4FUN()
{
}

unsigned char key[256] = { 0x00 };
unsigned char sbox[256] = { 0x00 };

/*初始化S盒*/
void InitSbox(){
    for(int i = 0; i < 256; i++)  sbox[i] = i;
}

/*密钥填充256数组*/
void KeyExpansion(string k, int len){
    if(len <= 256){
        for(int i = 0; i < 256; i++) key[i] = k[i % len];
    }
    if(len > 256){
        for(int i = 0; i < 256; i++) key[i] = k[i];
    }
}

/*打乱S盒*/
void UpsetSbox(){
    int j = 0;
    unsigned char temp;
    int n;
    for(int i = 0; i < 256; i++){
        n = j + (int)sbox[i] + (int)key[i];
        j = n % 256;
        temp = sbox[i];
        sbox[i] = sbox[j];
        sbox[j] = temp;
    }
}

/*加解密数据*/
string DataProcess(string str){
    int i = 0, j = 0;
    int index1 = 0;
    string result;
    int len = str.length();
    while (index1 < len) {
        i = (i + 1) % 256;
        int temp2 = j + (int)sbox[i];
        j = temp2 % 256;
        char temp;
        temp = sbox[i];
        sbox[i] = sbox[j];
        sbox[j] = temp;
        int temp1 = (int)sbox[i] + (int)sbox[j];
        int t = temp1 % 256;
        char k = sbox[t];
        char cipherchar = str[index1] ^ k;
        result.push_back(cipherchar);
        index1++;
    }
    return result;
}

void RC4FUN::DataEncrypt(string k, string str, string *result){
    int len = k.length();
    KeyExpansion(k, len);
    InitSbox();
    UpsetSbox();
    *result = DataProcess(str);
}


void RC4FUN::DataDecrypt(string k, string str, string *result){
    int len = k.length();
    KeyExpansion(k, len);
    InitSbox();
    UpsetSbox();
    *result = DataProcess(str);
}

