#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyPtr
{
	T* ptr;
	static int count;
public:
	MyPtr()
	{
		T* ptr = nullptr;
		count++;
	}
	MyPtr(T* a)
	{
		ptr = a;
		count++;
	}
	~MyPtr()
	{
		cout << "Destruct"<<endl;
		if (count == 1)
		{
			delete ptr;
			count = 0;
			cout << "Delete"<<endl;
		}
		else
		{
			count--;
			cout << "Count--"<<endl;
		}
	}
	T* get() 
	{
		return ptr;
	}
	T GetCount() 
	{
		return *ptr;
	}
};

template<class T>
int MyPtr<T>::count = 0;