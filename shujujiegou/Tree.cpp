#include"leixing.h"	
#include"iostream"
using namespace  std;

template <typename T>

void creatTree()
{
	NODE nodeA('A');                     // 构建节点A到F
	NODE nodeB('B');
	NODE nodeC('C');
	NODE nodeD('D');
	NODE nodeE('E');
	NODE nodeF('F');
	NODE nodeG('G');
	nodeA->m_pLeft = &nodeB;               // 构建节点间的关系
	nodeA->m_pRight = &nodeC;
	nodeB->m_pLeft = &nodeD;
	nodeB->m_pRight = &nodeE;
	nodeC->m_pRight = &nodeF;
	nodeE->m_pLeft = &nodeG;
}

/*typedef void(*PFUN) (NODE *node);           // 访问二叉树节点的函数指针
void pre_visit(NODE *root, PFUN fun)          // 前序遍历函数
{
	fun(root);                               // 访问当前子树的根节点

	visit(root->m_pLeft, fun);               // 访问左子树
	visit(root->m_pRight, fun);              // 访问右子树
}*/