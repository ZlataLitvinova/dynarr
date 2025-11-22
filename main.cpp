#include <iostream>
#include "dynarray.h"
using namespace std;
int main()
{
    dynarr arrA(10);
    dynarr arrB(15);
    for(int i = 0; i < 10; i++)
        arrA.set(i*2,i);
    for(int i = 0; i < 15; i++)
        arrB.set(i*3,i);
    dynarr arrC(arrA);
    cout << "arrA[" << arrA.getsize() << "]: " << endl << "   ";
    arrA.print();
    cout << "arrB[" << arrB.getsize() << "]: " << endl << "   ";
    arrB.print();
    cout << "arrC[" << arrC.getsize() << "]: is the copy of arrA: " << endl << "   ";
    arrC.print();
    arrA.add(arrB);
    cout << "Sum of arrA and arrB in arrA: " << endl << "   ";
    arrA.print();
    arrB.sub(arrC);
    cout << "Difference of arrB and arrC in arrB: " << endl << "   ";
    arrB.print();
    arrC.append(1);
    arrC.append(2);
    arrC.append(3);
    cout << "Add 3 elements to arrC[" << arrC.getsize() << "]: " << endl << "   ";
    arrC.print();
    cout << "arrC[2] = " << arrC.get(2) << endl;
    cout << "Add invalid elements to arrC: " << endl;
    arrC.append(-200);
    arrC.append(300);
    arrC.print();
    cout << "Set invalid elements to arrC: " << endl;
    arrC.set(-200, 3);
    arrC.set(300, 2);
    arrC.print();
    cout << "Set elements with invalid indexes to arrC: " << endl;
    arrC.set(1, 1000);
    arrC.set(2, -2);
    arrC.print();
    cout << "Get element with invalid indexes: " << endl;
    int a = arrC.get(1000);
    int b = arrC.get(-2);
    cin.get();
    return 0;
}
