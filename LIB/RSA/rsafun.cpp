#include "rsafun.h"
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAX_N = pow(2,8)-1;

RSAFUN::RSAFUN()
{
}

int exgcd(int a, int b, int &x, int &y)
{
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int ans = exgcd(b, a % b, x, y);

    int tmp = x;
    x = y;
    y = tmp - a / b * y;
    return ans;
}

// 暴力找出200 ~ MAX_N 的所有质数
void get_Prime_Number(int *Prime, int &cnt)
{
    cnt = 0;
    for (int i = 201;i < MAX_N; i+=2){
        bool flag = false;
        for (int j = 2;(j * j) <= i; j++){
            if (i % j == 0){
                flag = true;
                break;
            }
        }
        if (!flag) Prime[cnt++] = i;
    }
}

void RSAFUN::RSA_Initialize(int &n, int &e, int &d){
    int Prime[MAX_N], cnt = 0;
    get_Prime_Number(Prime, cnt);
    srand((unsigned)time(NULL));
    int r1 = rand() % cnt;
    int r2 = rand() % cnt;
    int p1 = Prime[r1], p2 = Prime[r2]; // 随机取两个质数.
    n = p1 * p2; // 计算n

    int  m = (p1 - 1) * (p2 - 1);

    int y;
    // 选择一个与n互质的元素,记为e,求得模反元素d
    for (int i = 3; i < m; i += 1331){
        int gcd = exgcd(i, m, d, y);
        if (gcd == 1 && d > 0){
            e = i;
            break;
        }
    }
}

int Quick_Pow(int a, int b, int c)
{
    int tot = 1;
    while (b){
        if (b & 1) tot = (1LL * tot * a) % c; //可能会溢出
        a = (1LL * a * a) % c;
        b >>= 1;
    }
    return tot;
}
void RSAFUN::RSA_Encrypt(int e, int n, string str,string load){
    int len = str.size();
    ofstream fout(load);
    for (int i = 0; i < len; i++){
         fout<<Quick_Pow(str[i], e, n)<<" "; //输出密文
    }
    fout<<endl;
    fout.close();
}

void RSAFUN::RSA_Decrypt(int d, int n, string str,string load){
    ofstream fout(load);
    stringstream ss(str);
    int x;
    while (ss >> x){
        fout<<(char)Quick_Pow(x, d, n); //输出解密后的原文对应字符
    }
    fout<<endl;
    fout.close();
}
