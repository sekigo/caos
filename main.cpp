#include <iostream>

#include "mylib.h"
#include "printer.h"
#include "mult.h"

int main() {
	int num = give_number();
	int num_2 = give_number();
	int mult_res = mult(num, num_2);
	print(mult_res);
	return 0;
}
