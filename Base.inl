#pragma once
#include "Base.h"

template <class T1, class T2>
void Base<T1, T2>::print_base() const noexcept
{
	cout << "Значение 1: " << value1 << "\nЗначение 2: " << value2;
}