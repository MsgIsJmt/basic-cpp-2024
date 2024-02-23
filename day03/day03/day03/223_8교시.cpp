#include <iostream>
#include "223_8±³½Ã.h"

AClass::AClass(int anum) {
	num = anum;
}
void AClass::Alnfo() {
	std::cout << "AClass::num" << num << std::endl;
}

int main()
{
	Human h("¸í¸í´Þ", 2, "±Í¿±µÕÀÌ");			// °´Ã¼»ý¼º¹æ¹ý
	h.humanlnfo();							// ³ª´Â 2»ìÀÎ ±Í¿°µÕÀÌ ¸í¸í´ÞÀÔ´Ï´Ù.

	return 0;
}