//������ n �����۱ң�ÿ�ѵ��������������� coins �С�
//����ÿ�ο���ѡ������һ�ѣ��������е�һö������ö���������������۱ҵ����ٴ�����
//
//ʾ�� 1��
//
//���룺[4, 2, 1]
//
//�����4
//
//���ͣ���һ�����۱�������Ҫ�� 2 �Σ�
//�ڶ���������Ҫ�� 1 �Σ�������������Ҫ�� 1 �Σ��ܹ� 4 �μ������ꡣ
//
//ʾ�� 2��
//
//���룺[2, 3, 10]
//
//�����8
//
//���ƣ�
//
//1 <= n <= 4
//1 <= coins[i] <= 10
//
//
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int minCount(vector<int>& coins) {
		int count = 0;
		for (int i = 0; i < coins.size(); i++)
		{
			if ((coins[i] % 2) == 0)
			{
				count += (coins[i] / 2);
				//cout << count << endl;
			}
			if (coins[i] == 1)
			{
				count++;
				//cout << count << endl;
				
			}
			if ((coins[i] % 2) == 1&&(coins[i]>2))
			{
				count += ((coins[i] / 2) + 1);
				//cout << count << endl;
			}
		}
		return count;
	}
};
int main()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(1);
	Solution a;
	cout << a.minCount(v);
	return 0;
}