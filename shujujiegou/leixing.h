#pragma once

constexpr auto maxsize = 100;
constexpr auto MaxVertexNum = 100;

typedef class {
public:
	double data[maxsize];
	int top;
}SqStack;//栈的存储结构

class sequence_list {
public:
	short date[maxsize];
	int length;
};//顺序表

typedef class single_linked_list{
public:
	short data;
	class single_linked_list *next;
}*linkList,LNote;//链表

typedef char VertexType;
typedef int EdgeType;
typedef class MGrape {
public:
	VertexType Vex[MaxVertexNum];//顶点表
	EdgeType Edge[MaxVertexNum][MaxVertexNum];//邻接矩阵
	int vexnum, aecnum;//顶点数和弧度数
}MGrape;

//边表结点
typedef class ArcNode {
public:
	int adjvex;//该弧线指向的顶点位置
	class ArcNode *next;//指向下个结点的指针
}ArcNode;

//顶点表结点
typedef class VNode {
public:
	VertexType data;//顶点信息
	ArcNode* first;//指向第一条连接该点的弧结点
}VNode,Adjlist[MaxVertexNum];

typedef class {
public:
	Adjlist vertices;//邻接表
	int vexnum, arcnum;//图的顶点数和弧数
}AlGraph;//以邻接表存储的图类型

template <typename T>
struct NODE                            // 节点模板
{
public:
	T m_data;                          // 数据
	NODE *m_pLeft;                     // 左子树指针
	NODE *m_pRight;                    // 右子树指针
	NODE(T value) : m_data(value),  // 节点构造函数
		m_pLeft(0), m_pRight(0)
	{}
};
