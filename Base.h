#pragma once
#include <iostream>

using namespace std;

template <class T1, class T2>
class Base
{
protected:
	T1 value1;
	T2 value2;
public:
	Base(T1 val, T2 val2) noexcept : value1{ val }, value2{ val2 } {}

	T1 get_val1() const noexcept { return value1; }
	T2 get_val2() const noexcept { return value2; }
	void set_val1(T1 val1) noexcept { value1 = val1; }
	void set_val2(T2 val2) noexcept { value2 = val2; }

	virtual void print_base() const noexcept;

	virtual ~Base() {}
};