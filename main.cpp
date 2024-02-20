#include <iostream>

#include "mylib.h"
#include "printer.h"
#include "sum.h"

int main(){
	int num = give_number();
	num = sum(num,3);
	print(num);	
	return 0;
}
