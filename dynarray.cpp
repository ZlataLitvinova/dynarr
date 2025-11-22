#include <iostream>
#include <iomanip>
#include "dynarray.h"
using namespace std;
dynarr::dynarr(int s)
{
    len = s;
    p = new int[len];
}
dynarr::dynarr(dynarr& q)
{
    len = q.len;
    p = new int[len];
    for(int i = 0; i < len; i++)
        p[i] = q.get(i);
}
dynarr::~dynarr(void)
{
    delete [] p;
}
void dynarr::print()
{
    for(int i = 0; i < len; i++)
        cout << setw(4) << p[i] << " ";
    cout << endl;
}
int dynarr::getsize()
{
    return len;
}
void dynarr::set(int x, int i)
{
    if(x < -100 || x > 100)
    {
        cout << "Invalid value " << x << endl;
        return;
    }
    if(i < 0 || i >= len)
    {
        cout << "Invalid index " << i << endl;
        return;
    }
    p[i] = x;
}
int dynarr::get(int i)
{
    if(i < 0 || i >= len)
    {
        cout << "Invalid index " << i << endl;
        return -1000;
    }
    return p[i];
}
void dynarr::append(int x)
{
    if(x < -100 || x > 100)
    {
        cout << "Invalid value " << x << endl;
        return;
    }
    int* q = new int[len + 1];
    for(int i = 0; i < len; i++)
        q[i] = p[i];
    q[len] = x;
    delete [] p;
    p = q;
    len++;
}
void dynarr::add(dynarr q)
{
    int l = len;
    if (q.getsize() < len)
        l = q.getsize();
    for(int i = 0; i < l; i++)
        p[i] += q.get(i);
}
void dynarr::sub(dynarr q)
{
    int l = len;
    if (q.getsize() < len)
        l = q.getsize();
    for(int i = 0; i < l; i++)
        p[i] -= q.get(i);
}
