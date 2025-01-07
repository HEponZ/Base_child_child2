#pragma once
#include "child2.h"

template <class T1, class T2, class T3, class T4, class T5, class T6>
void child2<T1, T2, T3, T4, T5, T6>::print_child2()
{
	child<T1, T2, T3, T4>::print_child();
	cout << "\nЗначение 5: " << value5 << "\nЗначение 6: " << value6;
}