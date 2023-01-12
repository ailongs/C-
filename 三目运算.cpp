#include<iostream>
using namespace std;
main()
{
    //三目运算符
    //表达式1?表达式2:表达式3//代表：若表达式1成立，返回表达式2，若表达式1不成立，则返回表达式3
    int a,b;
    cout << "input a:" << endl;
    cin >> a;
    cout << "input b:" << endl;
    cin >> b;
    int c=a>b?a:b;
    cout << "c=" << c << endl;

    //C++里三目运算符返回值是变量，可以继续赋值
    (a>b?a:b)=100;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;



}
