//1395. ͳ����ս��λ��
//n ��ʿ��վ��һ�š�ÿ��ʿ������һ�� ��һ�޶� ������ rating ��
//
//ÿ 3 ��ʿ���������һ����ս��λ������������£�
//
//�Ӷ�����ѡ���±�ֱ�Ϊ i��j��k �� 3 ��ʿ�������ǵ����ֱַ�Ϊ rating[i]��rating[j]��rating[k]
//��ս��λ�����㣺 rating[i] < rating[j] < rating[k] ���� rating[i] > rating[j] > rating[k] ������  0 <= i < j < k < n
//���㷵�ذ��������������齨����ս��λ������ÿ��ʿ���������Ƕ����ս��λ��һ���֡�
//
//
//ʾ�� 1��
//
//���룺rating = [2, 5, 3, 4, 1]
//�����3
//���ͣ����ǿ����齨������ս��λ(2, 3, 4)��(5, 4, 1)��(5, 3, 1) ��
//ʾ�� 2��
//
//���룺rating = [2, 1, 3]
//�����0
//���ͣ�������Ŀ�����������޷��齨��ս��λ��
//ʾ�� 3��
//
//���룺rating = [1, 2, 3, 4]
//�����4
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int numTeams(vector<int>& rating) {
		int i = 0;
		vector<int> va;
		for (i = 0; i < rating.size(); i++)
		{
			va[i]=rating[i];
			int j = 1;
			for (j = 1; j < rating.size(); j++)
			{
				if (va[i] < rating[j])
				{
					i++;
					va[i] = rating[j];
					if (va[i]<rating[j + 1] && j + 1 < rating.size())
					{
						va[i++]=rating[j+1];
					}
					else
					{
						j++;
					}
				}
			}
		}
		for (i = 0; i < rating.size(); i++)
		{
			va[i] = rating[i];
			int j = 1;
			for (j = 1; j < rating.size(); j++)
			{
				if (va[i] > rating[j])
				{
					i++;
					va[i] = rating[j];
					if (va[i] > rating[j + 1] && j + 1 < rating.size())
					{
						va[i++] = rating[j + 1];
					}
					else
					{
						j++;
					}
				}
			}
		}
		return 0;
	}
};
void Test1()
{
	Solution a;
	vector<int> v;
	v.push_back(2);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(1);
	a.numTeams(v);

}
int main()
{
	Test1();
	return 0;
}