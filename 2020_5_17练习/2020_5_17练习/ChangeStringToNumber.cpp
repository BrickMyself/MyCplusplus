////��Ŀ����
////��һ���ַ���ת����һ��������Ҫ����ʹ���ַ���ת�������Ŀ⺯���� ��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0
////�������� :
////����һ���ַ���, ����������ĸ����, ����Ϊ��
////������� :
////����ǺϷ�����ֵ����򷵻ظ����֣����򷵻�0
////ʾ��1
////����
////����
////+ 2147483647
////1a33
////���
////����
////2147483647
////0
//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	long long StrToInt(string str) {
//		if (str.size() == 1)
//		{
//			if (str[0] == '+' || str[0] == '-')
//			{
//				return 0;
//			}
//		}
//		for (int i = 0; i < str.size(); i++)
//		{
//			if ((str[i]-48) > 9&&(str[0]!='+')&&(str[0]!='-'))
//			{
//				return 0;
//				break;
//			}
//		}
//		long long count = 0;
//		int temp = 1;
//		for (int j =0; j <str.size(); j++)
//		{
//			if (str[j] == '+')
//			{
//				j++;
//			}
//			else if (str[j] == '-')
//			{
//				temp = -1;
//				j++;
//				//cout << str[j];
//			}
//			count *= 10;
//			count += (str[j] - 48);
//			cout << str[j]-48<<" "<<count << endl;
//
//		}
//		return temp*count;
//	}
//};
//int main()
//{
//	string str("+123");
//	Solution a;
//	//int b = 0;
//	//b=int(str[1]-48);
//	while (getline(cin, str))
//	{
//		cout<<a.StrToInt(str)<<endl;
//	}
//	//cout << b << endl;
//	return 0;
//}