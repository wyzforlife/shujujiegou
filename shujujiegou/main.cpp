#include"bitset"
#include<string>
#include"graph.h"
#include"iostream"
#include<random>
#include<time.h>
void RandCards(void)
{
	std::default_random_engine e(time(nullptr));//���������
	std::uniform_int_distribution<unsigned> u(0, 53);//���ͷֲ�

	for (int i = 0; i < 54; i++) {
		int rand = u(e);
		std::cout << rand<<"\n";
	}
	return;
}
int main()
{
	RandCards();
	system("pause");
	return 0;

}
