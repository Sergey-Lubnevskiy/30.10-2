#include <iostream>
#include "ptr.h"
using namespace std;

int main()
{
	MyPtr<int> ptr2(new int(675));

	MyPtr<int> ptr = ptr2;
	cout << ptr.get() << ' ' << ptr.GetCount() << endl;
	cout << ptr2.get() << ' ' << ptr2.GetCount() << endl;

}