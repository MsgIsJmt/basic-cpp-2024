#include <iostream>
#include "223_8����.h"

AClass::AClass(int anum) {
	num = anum;
}
void AClass::Alnfo() {
	std::cout << "AClass::num" << num << std::endl;
}

int main()
{
	Human h("����", 2, "�Ϳ�����");			// ��ü�������
	h.humanlnfo();							// ���� 2���� �Ϳ����� �����Դϴ�.

	return 0;
}