#include<iostream>
using namespace std;
main()
{
    //递增

    //前置递增
    int a1=10;
    ++a1;  //相当于a1=a1+1;
    cout << "a1=" << a1 << endl;  //11

    //后置递增
    int a2=10;
    a2++;  //相当于a2=a2+1;
    cout << "a2=" << a2 << endl;  //11


    //区别

    //前置递增先对变量进行++，再计算表达式
    int a3=10;
    int b3=++a3*10;  //相当于a3=a3+1=10+1=11  b3=a3*10=11*10=110
    cout << "a3=" << a3 << endl;  //11
    cout << "b3=" << b3 << endl;  //110

    //后置递增先计算表达式，再对变量进行++
    int a4=10;
    int b4=a4++*10;  //相当于b4=a4*10=10*10=100  a4=a4+1=10+1=11
    cout << "a4=" << a4 << endl;  //11
    cout << "b4=" << b4 << endl;  //100

}
