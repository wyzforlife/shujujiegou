#pragma once

constexpr auto maxsize = 100;
constexpr auto MaxVertexNum = 100;

typedef class {
public:
	double data[maxsize];
	int top;
}SqStack;//ջ�Ĵ洢�ṹ

class sequence_list {
public:
	short date[maxsize];
	int length;
};//˳���

typedef class single_linked_list{
public:
	short data;
	class single_linked_list *next;
}*linkList,LNote;//����

typedef char VertexType;
typedef int EdgeType;
typedef class MGrape {
public:
	VertexType Vex[MaxVertexNum];//�����
	EdgeType Edge[MaxVertexNum][MaxVertexNum];//�ڽӾ���
	int vexnum, aecnum;//�������ͻ�����
}MGrape;

//�߱���
typedef class ArcNode {
public:
	int adjvex;//�û���ָ��Ķ���λ��
	class ArcNode *next;//ָ���¸�����ָ��
}ArcNode;

//�������
typedef class VNode {
public:
	VertexType data;//������Ϣ
	ArcNode* first;//ָ���һ�����Ӹõ�Ļ����
}VNode,Adjlist[MaxVertexNum];

typedef class {
public:
	Adjlist vertices;//�ڽӱ�
	int vexnum, arcnum;//ͼ�Ķ������ͻ���
}AlGraph;//���ڽӱ�洢��ͼ����

template <typename T>
struct NODE                            // �ڵ�ģ��
{
public:
	T m_data;                          // ����
	NODE *m_pLeft;                     // ������ָ��
	NODE *m_pRight;                    // ������ָ��
	NODE(T value) : m_data(value),  // �ڵ㹹�캯��
		m_pLeft(0), m_pRight(0)
	{}
};
