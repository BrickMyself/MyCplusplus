//�� 1 + 2 + ... + n ��
//Ҫ����ʹ�ó˳�����for��while��
//if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C����
//ʾ�� 1��
//
//���� : n = 3
//	��� : 6
//	ʾ�� 2��
//
//	���� : n = 9
//	��� : 45
#include<iostream>
using namespace std;
class Solution {
public:
	int sumNums1(int n) {
		return (sumNums1(n)| sumNums1(n-1));
	}
	int sumNums2(int n) {
		return (sumNums2(n^n - 1));
	}
	int sumNums3(int n) {
		return (sumNums3(n&n - 1));
	}
};
int main()
{
	Solution a;
	cout<<a.sumNums1(10);
	//cout<<a.sumNums2(10);
	//cout<<a.sumNums3(10);
	return 0;
}