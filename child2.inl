#pragma once
#include "child2.h"

template <class T1, class T2, class T3, class T4, class T5, class T6>
void child2<T1, T2, T3, T4, T5, T6>::print_base() const noexcept
{
	child<T1, T2, T3, T4>::print_base();
	cout << "\n�������� 5: " << value5 << "\n�������� 6: " << value6;
}