#include"iostream"
#include"bitset"
#include"leixing.h"
#include<string>
bool ListInsert(sequence_list &L, int i, short e) {
	//��Ԫ��e���뵽��L�ĵ�i��λ����
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
{//ɾ����L�ĵ�i��Ԫ��
	if (i > L.length || i < 1)
		return false;
	for (int j = i - 1; j <= L.length; j++)
		L.date[j] = L.date[j + 1];
	L.length--;
	return true;
}
int LocatElem(sequence_list &L, short e)
{//���ұ�L�е���e��Ԫ�أ�����ֵ�Ǹ�Ԫ�ص�λ��
	for (int i = 0; i <= L.length; i++)
	{
		if (L.date[i] = e)
			return i + 1;
	}
	return 0;
}
linkList List_Headinsert(linkList &L)
{//ǰ�巨
	LNote *s;
	short x;
	L = new single_linked_list[sizeof(s)];
	L->next = NULL;
	std::cout << "��������,����888��������" << std::endl;
	std::cin >> x;
	while (x != 888)
	{
		s = new single_linked_list[sizeof(linkList)];
		s->data = x;
		s->next = L->next;
		L->next = s;
		std::cout << "��������" << std::endl;
		std::cin >> x;
	}

	return L;
}
linkList List_TailInsert(linkList &L)
{//��巨�����һ��ָ��Ϊ��
	short x;
	L = new single_linked_list[sizeof(LNote)];
	LNote *s; LNote *r = L;
	std::cout << "��������,����888��������" << std::endl;
	std::cin >> x;
	while (x != 888)
	{
		s = new single_linked_list[sizeof(LNote)];
		s->data = x;
		r->next = s;
		r = s;
		std::cout << "��������,����888��������" << std::endl;
		std::cin >> x;
	}
	r->next = NULL;
	return L;
} 