////题目描述
////将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0
////输入描述 :
////输入一个字符串, 包括数字字母符号, 可以为空
////输出描述 :
////如果是合法的数值表达则返回该数字，否则返回0
////示例1
////输入
////复制
////+ 2147483647
////1a33
////输出
////复制
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