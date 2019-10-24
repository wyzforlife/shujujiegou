#include"iostream"
#include"leixing.h"

//给表结点从1赋值
bool VexAss(VertexType t[]) {
	int a;
	VertexType ver;
	std::cout << "输入表结点个数";
	std::cin >> a;
	for (int i = 0; i < a; i++){
		std::cin >> ver;
		t[i] = ver;
	}
	return true;
}
bool VexAss(MGrape &G) {
	int a,b;
	VertexType ver;
	std::cout << "输入表结点个数";
	std::cin >> a;
	b = a;
	for (int i = 0; i < a; i++) {
		std::cout << "对图结点N(" << i + 1 <<")赋值";
		std::cin >> ver;
		G.Vex[i] = ver;//对表结点进行赋值
		G.vexnum++;
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j <= i; j++) {
			std::cout << "对图G(" << i+1 <<","<< j+1 << ")赋值";
			std::cin >> G.Edge[i][j];//对邻接矩阵赋值
			if (G.Edge[i][j] != 0)G.aecnum++;
		}b--;//只对上三角赋值
	}
	return true;
}

//邻接表的顶点表赋值
bool VNAss(VNode &VNode){
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cout << "输入第"<<i+1<<"个点名称";
		std::cin >> VNode.data;
		VNode.first;
	}
	return 1;
}
