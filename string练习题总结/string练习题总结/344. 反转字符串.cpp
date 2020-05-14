//��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� char[] ����ʽ������
//
//��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
//
//����Լ��������е������ַ����� ASCII ����еĿɴ�ӡ�ַ���
//
//
//ʾ�� 1��
//
//���룺["h", "e", "l", "l", "o"]
//�����["o", "l", "l", "e", "h"]
//
//
//ʾ�� 2��
//
//���룺["H", "a", "n", "n", "a", "h"]
//�����["h", "a", "n", "n", "a", "H"]
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	void reverseString(vector<char>& s) {
		int start = 0;
		int end = s.size() - 1;
		while (start < end)
		{
			swap(s[start], s[end]);
			++start;
			--end;
		}
		for (auto e : s)
		{
			cout << e << " ";
		}
	}
};
int main()
{
	vector<char> v;
	v.push_back('h');
	v.push_back('e');
	v.push_back('l');
	v.push_back('l');
	v.push_back('o');
	Solution a;
	a.reverseString(v);
	return 0;
}