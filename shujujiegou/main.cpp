#include"bitset"
#include<string>
#include"graph.h"
#include"iostream"
#include<random>
#include<time.h>
int partition(int a[], int low, int high);
void QuickSort(int a[], int low, int high);
void RandCards(int a[])
{
	std::default_random_engine e(time(nullptr));//随机数引擎
	std::uniform_int_distribution<unsigned> u(0, 53);//整型分布

	for (int i = 0; i < 54; i++) {
		int rand = u(e);
		a[i] = rand;
		//std::cout << rand<<"\n";
	}
	return;
}
int main()
{
	int a[54] = {0};
	int i=0;
	RandCards(a);
	QuickSort(a, 0, 53);
	while(i!=54)
		std::cout << a[i++]<<"\n";
	system("pause");
	return 0;

}
