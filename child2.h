#pragma once
#include "child.h"

template <class T1, class T2, class T3, class T4, class T5, class T6>
class child2 : public child<T1, T2, T3, T4>
{
private:
	T5 value5;
	T6 value6;
public:
	child2(T1 val, T2 val2, T3 val3, T4 val4, T5 val5, T6 val6) noexcept : child<T1, T2, T3, T4>(val, val2, val3, val4), value5{ val5 }, value6{ val6 } {}

	T5 get_val5() const noexcept { return value5; }
	T6 get_val6() const noexcept { return value6; }
	void set_val5(T5 val5) noexcept { value5 = val5; }
	void set_val3(T6 val6) noexcept { value6 = val6; }

	void print_base() const noexcept;

	~child2() {}
};