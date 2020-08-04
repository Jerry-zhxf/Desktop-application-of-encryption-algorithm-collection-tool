#include "fsfun.h"
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


FSFUN::FSFUN()
{
}

int FSFUN::canshu(int k){
    int c = 1,t,mod = 26;    //模 26
        if(k==1 || k%2==0)
            return 0;
        if(mod<k)
        {
            t=mod;
            mod=k;
            k=t;
        }
        while(c!=0)
        {
            c=mod%k;
            mod=k;
            k=c;
        }
        if(mod==1)
            return 1;
        else
            return 0;
}

int exgcd(int a, int b){
    int sl=0;
       int sh=1;
       int rl=b,rh=a;
       int q;
       while((rl%rh)!=0){
        q=rl/rh;
        int tmp1=(-1*q)*sh+sl;
        sl=sh;
        sh=tmp1;
        int tem3=rl%rh;
        rl=rh;
        rh=tem3;
       }
       return sh;
}

void FSFUN::jiami(string str, int k, int b, string *result){
    int i;
        for(i=0;i<str.length();i++)
        {
            int a;
            a=(str[i]-97)*k+b;    //加密
            if(a>25)    //对照为0-25     mod为26
            {
                do     //保证不超出域
                {
                    a=a-26;
                }while(a>25);
                a=a+97;        //加密后得到的ASC码;
                str[i]=(char)a;
            }
            else
            {
                a=a+97;
                str[i]=(char)a;
            }
        }
        *result=str;
}

void FSFUN::jiemi(string pass, int k, int b, string *result){
    int i;
        int _k = exgcd(k, 26);
        for(i=0;i<pass.length();i++)                //解密过程
        {
            int d;
            d=(((pass[i]-97)-b)*_k);
            while(d<0){
                d+=26;
            }
            d%=26;
            pass[i]=(char)(d+97);
        }
        *result = pass;
}
