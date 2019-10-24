#include"iostream"
#include"string"
#include"leixing.h"
using namespace std;

void InitStack(SqStack &S)
{
	S.top = -1;
}

bool StackEmpty(SqStack S)
{
	if (S.top == -1)return false;
	return true;
}
bool StackFull(SqStack S)
{
	if (S.top == maxsize - 1)return false;
	else return true;
}
bool StackPush(SqStack S, double s)
{
	if (!StackFull(S))return false;
	S.data[++S.top] = s;
	return true;
}
double StackPop(SqStack S)
{
	if (!StackEmpty(S))return false;
	double x;
	x = S.data[S.top--];
	return x;
}
void test()
{
	int x;
	SqStack S;
	InitStack(S);
	cout << "选择对栈的操作,0退出"<<"\n";
	cout << "1.判断栈空\t2.判断栈满\t3.出栈\t4.入栈\n";
	cin >> x;
	while (x)
	{
		switch (x)
		{
		case(1):
		{StackEmpty(S); break; 
		}
		case(2):StackFull(S); break;
		case(3):
		{
			double z = StackPop(S);
			cout << "此次出栈的值为\n" << z; break;
		}
		case(4):
		{
			double y;
			cout << "输入要入栈的值";
			cin >> y;
			StackPush(S, y); break;
		}
		default:
			break;
		}//switch
	}//while
}

//输入几个字符串，判断第一个出现奇数次的字符串
std::string tt()
{
	std::string a[10];
	int n;
	std::cin >> n;
	int s[100];
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++)
		{
			if (a[i].compare(a[j]) == 0)s[i] += 1;
		}
		if (s[i] % 2 != 0)return a[i];
	}
	return "没有";
}

int Min(int *l)
{
	const int a=sizeof(l)/sizeof(int);
	int c=l[a-1];
	int length = 0;
	int arr[a];
	for (int i = 0; i <= a; i++)
	{
		if (l[i] > 0) {
			arr[length] = l[i];
			length++;
		}
	}
	for (int i = 0; i <= length; i++)
	{
		if (arr[i] < c)
			c = arr[i];
	}
	return c-1;
}


int* N(int*b)
{
	int a[] = { 2,10, 6,1,9,30 };
	for (int i = 0; i <= 5; i++)
	{
		b[a[i]] = 1;
	}
	return b;
}