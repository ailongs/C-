#include<iostream>
using namespace std;
main()
{
    //��Ŀ�����
    //���ʽ1?���ʽ2:���ʽ3//���������ʽ1���������ر��ʽ2�������ʽ1���������򷵻ر��ʽ3
    int a,b;
    cout << "input a:" << endl;
    cin >> a;
    cout << "input b:" << endl;
    cin >> b;
    int c=a>b?a:b;
    cout << "c=" << c << endl;

    //C++����Ŀ���������ֵ�Ǳ��������Լ�����ֵ
    (a>b?a:b)=100;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;



}
