#include <iostream>
using namespace std;

class MtClass{

};
class FruitSeller{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money){				//---> 생성자(기능: 객체를 생성하고 초기화한다.)
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
}
	int SaleApples(int money){
	int num = money / APPLE_PRICE;									// 판매 개수
	numOfApples -= num;												// 남은 사과 개수
	myMoney += money;												// 번 돈, mtMoney = myMoney + money;
	return num;
	}
	void ShowSalesResult(){
		cout << "남은 사과: "<<numOfApples<<endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;				// provate:
	int numOfApples;			// private:

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& refseller, int money)			// int&num = n;
	{
		numOfApples += refseller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << " 현재 잔액 : " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);							// 과일의 구매
	
	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;