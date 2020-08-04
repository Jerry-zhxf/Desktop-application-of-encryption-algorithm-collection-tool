#include "lfsr_jkfun.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define MAX 50

LFSR_JKFUN::LFSR_JKFUN()
{
}

int char2int( char input )
{
    return input>64?(input-55):(input-48);
}

//ASCII码中将十进制数转换成对应的字符
int int2char( char input )
{
    return input>9?(input+55):(input+48);
}

char LFSR_JKFUN::_2xor(char a, char b){
    if(a!=b){
        return '1';
    }else{
        return '0';
    }
}

char LFSR_JKFUN::nor(char a){
    if(a=='0'){
        return '1';
    }else{
        return '0';
    }
}

char LFSR_JKFUN::cx(char a, char b){
    if(a=='0'||b=='0'){
        return '0';
    }else{
        return '1';
    }
}

void LFSR_JKFUN::_2to16(string tem, string *result){
    //cout << "请输入二进制数，并以‘$’结束：";
        string result1,result2;
        int flag = 1;
        int index=0;
        while (flag)
        {
            char ch = tem[index];
            if (ch != '$')
            {
                result1 += ch;
                index++;
            }
            else
            {
                flag = 0;
            }
        }
        int length = index;
        int n = 0;
        int sum = 0;
        int product = 0;
        if (length % 4 != 0)//将缺位的二进制码用0补齐
        {
            int n = 4 - length % 4;
            int i = 0;
            for (i = length - 1; i >= 0; i--)
                result1[i + n] = result1[i];
            length += n;
            for (i = 0; i < n; i++)
                result1[i] = '0';
        }
        for (n = 0; n < length; n++)//判断是否是二进制数
        {
            if ('1' == result1[n] || '0' == result1[n])
                sum++;
        }

        if (sum == length)
        {
            int m = 0;
            int p = 0;
            int q = 0;
            for (m = length - 1; m >= 0; m--)
            {
                q = result1[m] - '0';
                product += q * pow(2, p);
                p++;
                if (4 == p)
                {
                    if (product>9)
                    result2 += product+55;//输出A...F范围
                    else
                    {
                        result2 += product+48;//输出0...9范围
                    }
                    p = 0;
                    product = 0;
                }
            }
        }
        else
        {
            cout << "你输入的不是二进制数！" << endl;
        }
        reverse(result2.begin(),result2.end());
        *result = result2;
}

void LFSR_JKFUN::dc_16(char a,char *result){
    int num = (int)a;
    int tem=num;
    int ant=0;
    ant=abs(tem/16);
    tem=abs(tem%16);
    if(ant>=0&&ant<=9){
        result[0]=char(ant+'0');
    }else{
        result[0]=char(ant-10+'A');
    }
    if(tem>=0&&tem<=9){
        result[1]=char(tem+'0');
    }else{
        result[1]=char(tem-10+'A');
    }
}

void LFSR_JKFUN::_16todc(string tem, string *result){
    int h,l;
    string result1;
    for(int i=0;i<tem.length();i+=2){
        if(tem[i]>='0'&&tem[i]<='9'){
            h = int(tem[i]-48);
        }else{
            h = int(tem[i])-55;
        }
        if(tem[i+1]>='0'&&tem[i+1]<='9'){
            l = int(tem[i+1]-48);
        }else{
            l = int(tem[i+1])-55;
        }
        int ans=h*16+l;
        char tem = char(ans);
        result1+=tem;
    }
    *result = result1;
}

void LFSR_JKFUN::hexstrxor(string tem1, string tem2, string *result){
    int i, item1Len, item2Len, itemLenLow, itemLenGap;
    string result1;
    //转换成大写并求长度, strupr是非标准的C函数，在Linux下不支持，所以需要自己实现或者使用glib中的g_string_ascii_up ()
    transform(tem1.begin(),tem1.end(),tem1.begin(),::toupper);
    transform(tem2.begin(),tem2.end(),tem2.begin(),::toupper);
    item1Len = tem1.length();
    item2Len = tem2.length();

    //获取最小的长度
    itemLenLow = item1Len<item2Len?item1Len:item2Len;

    //获取长度差值
    itemLenGap = abs( item1Len-item2Len );

    //两个十六进制的字符串进行异或
    for( i=0; i<itemLenLow; i++ )
    {
        result1 += int2char(char2int( tem1[i] ) ^ char2int( tem2[i] ));

    }
    if( item1Len>item2Len )
        //memcpy( HexStr+i, HexStr1+i, iHexStrLenGap );
        result1.append(tem1.substr(i,itemLenGap));
    else if( item1Len<item2Len )
        //memcpy( HexStr+i, HexStr2+i, iHexStrLenGap );
        result1.append(tem2.substr(i,itemLenGap));
    *result = result1;
}
