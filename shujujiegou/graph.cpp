#include"iostream"
#include"leixing.h"

//�������1��ֵ
bool VexAss(VertexType t[]) {
	int a;
	VertexType ver;
	std::cout << "����������";
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
	std::cout << "����������";
	std::cin >> a;
	b = a;
	for (int i = 0; i < a; i++) {
		std::cout << "��ͼ���N(" << i + 1 <<")��ֵ";
		std::cin >> ver;
		G.Vex[i] = ver;//�Ա�����и�ֵ
		G.vexnum++;
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j <= i; j++) {
			std::cout << "��ͼG(" << i+1 <<","<< j+1 << ")��ֵ";
			std::cin >> G.Edge[i][j];//���ڽӾ���ֵ
			if (G.Edge[i][j] != 0)G.aecnum++;
		}b--;//ֻ�������Ǹ�ֵ
	}
	return true;
}

//�ڽӱ�Ķ����ֵ
bool VNAss(VNode &VNode){
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cout << "�����"<<i+1<<"��������";
		std::cin >> VNode.data;
		VNode.first;
	}
	return 1;
}
