#include"iostream"
#include"bitset"
#include"leixing.h"
#include<string>
bool ListInsert(sequence_list &L, int i, short e) {
	//将元素e插入到表L的第i个位置里
	if (i<1 || i>L.length + 1)
		return false;
	if (L.length >= maxsize)
		return false;
	for (int j = L.length; j >= i; j--)
		L.date[j] = L.date[j - 1];
	L.date[i - 1] = e;
	L.length++;
	return true;
}
bool ListDelete(sequence_list &L, int i)
{//删除表L的第i个元素
	if (i > L.length || i < 1)
		return false;
	for (int j = i - 1; j <= L.length; j++)
		L.date[j] = L.date[j + 1];
	L.length--;
	return true;
}
int LocatElem(sequence_list &L, short e)
{//查找表L中等于e的元素，返回值是该元素的位置
	for (int i = 0; i <= L.length; i++)
	{
		if (L.date[i] = e)
			return i + 1;
	}
	return 0;
}
linkList List_Headinsert(linkList &L)
{//前插法
	LNote *s;
	short x;
	L = new single_linked_list[sizeof(s)];
	L->next = NULL;
	std::cout << "输入数据,输入888结束输入" << std::endl;
	std::cin >> x;
	while (x != 888)
	{
		s = new single_linked_list[sizeof(linkList)];
		s->data = x;
		s->next = L->next;
		L->next = s;
		std::cout << "输入数据" << std::endl;
		std::cin >> x;
	}

	return L;
}
linkList List_TailInsert(linkList &L)
{//后插法，最后一个指针为空
	short x;
	L = new single_linked_list[sizeof(LNote)];
	LNote *s; LNote *r = L;
	std::cout << "输入数据,输入888结束输入" << std::endl;
	std::cin >> x;
	while (x != 888)
	{
		s = new single_linked_list[sizeof(LNote)];
		s->data = x;
		r->next = s;
		r = s;
		std::cout << "输入数据,输入888结束输入" << std::endl;
		std::cin >> x;
	}
	r->next = NULL;
	return L;
} 