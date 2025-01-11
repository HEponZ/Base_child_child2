#pragma once
#include "child.h"

template <class T1, class T2, class T3, class T4>
void child<T1, T2, T3, T4>::print_base() const noexcept
{
	Base<T1, T2>::print_base();
	cout << "\nЗначение 3: " << value3 << "\nЗначение 4: " << value4;
}