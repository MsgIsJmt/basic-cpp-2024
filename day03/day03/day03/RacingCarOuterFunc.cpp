#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum MyEnum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	// ==== 멤버 변수 ==========
	char gamerID[CAR_CONST::ID_LEN];			// char gameID[20];
	int fuelGauge;
	int curSpeed;
	// ==== 멤버함수 ==========
	void ShowCarState();	// 상태정보 출력
	void Accel();			// 엑셀, 속도증가
	void Break();			// 브레이크, 속도감소
};

void Car::ShowCarState()
{
		cout << "소유자ID： " << gamerID << endl;
		cout << "연료량：" << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
	}
void Car::Accel()
	{
		if (fuelGauge <= 0)						// fuelGauge:100, curSpeed:0
			return;
		else
			fuelGauge -= CAR_CONST::FUEL_STEP;	// fuelGauge:98

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}
	void Car::Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}