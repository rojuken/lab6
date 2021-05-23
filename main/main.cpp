#include <iostream>
#include "ArrayList.h"

int main()
{

    TArrayList<char> Ar(10);
    Ar.InsFirst('a');
    Ar.InsLast('b');
    Ar.InsFirst('c');

    TArrayList<int> A(3);
    A.InsFirst(1);
    A.InsFirst(2);
    A.InsFirst(3);
    A.LoadToFile();

    cout << Ar << "\n";

    return 0;
}
