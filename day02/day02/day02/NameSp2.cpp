#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFucn(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFucn();
	return 0;
}


void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFucn(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
