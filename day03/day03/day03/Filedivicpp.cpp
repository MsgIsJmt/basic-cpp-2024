#include <iostream>
#include "Filedivi.h"

AClass::AClass(int anum) {
	num = anum;
}
void AClass::Alnfo() {
	std::cout << "AClass::num" << num << std::endl;
}

int main()
{
	AClass a(10);
	a.Alnfo();

	return 0;
}