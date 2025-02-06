#include <iostream>
using namespace std;
int sbit(int s)
{
    int count = 0;
    while (s > 0)
    {
        int x = s & 1;
        if (x)
        {
            count++;
        }
        s = s >> 1;
    }
    return count;
}
int sum(int p, int q)
{
    int sbone = sbit(p);
    int sbtwo = sbit(q);
    cout << "the set bit in a is : " << sbone << endl;
    cout << "the set bit in b is : " << sbtwo << endl;
    int add = sbone + sbtwo;
    return (add);
}
int main()
{
    int a, b;
    cout << "enter your number 1 :";
    cin >> a;
    cout << "enter your number 2 :";
    cin >> b;
    int ans = sum(a, b);
    cout << "total number of set bits are :" << ans << endl;
}