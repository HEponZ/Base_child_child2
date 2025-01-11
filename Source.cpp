#include "Header.h"

int main()
{
	setlocale(LC_ALL, "rus");
	child2<int, int, string, string, int, int> obj{ 13,23,"Hello ", "world", 7, 1 };
	obj.print_base();

	return 0;
}