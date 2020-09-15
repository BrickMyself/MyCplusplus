
#include <stdio.h>

// 交换两个数
void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//必须指明数组长度
void Reverse90(int(&b)[2][2], int len)
{
	int i, j;
	for (i = 0; i < len / 2; ++i)
	{
		//转置矩阵
		for (j = i + 1; j < len / 2; j++)
			swap(&b[i][j], &b[j][i]);
		//每行对半交换
		for (j = 0; j < len / 2 / 2; j++)
			swap(&b[i][j], &b[i][len / 2 - 1 - j]);
	}
}

int main(void)
{
	int a[2][2] = { 1,2,3,4 };
	Reverse90(a, 4);
	int i;
	for (i = 0; i < 4; ++i)
		printf("%d ", *(*a + i));
	return 0;
}
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 1000;
int dp[N][N];
int main()
{
	int lena, lenb, i, j;
	while (getline(cin,s))
{
	memset(dp, 0, sizeof(dp));
	lena = strlen(a);
	lenb = strlen(b);
	for (i = 1; i <= lena; i++)
	{
	for (j = 1; j <= lenb; j++)
	{
	if (a[i - 1] == b[j - 1])
	{
	dp[i][j] = dp[i - 1][j - 1] + 1;
	}
	else
	{
	dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
	}
	}
	}
	printf("%d\n", dp[lena][lenb]);
}
	return 0;
}
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Solution {
public:
	int longestCommonSubsequence(string text1, string text2) 
	{
		int n = text1.size();
		int m = text2.size();
		int dp[m + 1], last = 0, temp;
		fill(dp, dp + m + 1, 0);
		for (int i = 1; i <= n; ++i, last = 0) {
			for (int j = 1; j <= m; ++j) {
				temp = dp[j];
				if (text1[i - 1] == text2[j - 1])	dp[j] = last + 1;
				else	 dp[j] = max(dp[j], dp[j - 1]);
				last = temp;
			}
		}
		return dp[m];
	}
};
int main()
{

	string s1;
	string s2;
	while (getline(cin,s1))
	{
		Solution a;
		a.longestCommonSubsequence(s1, s2);
	}

	return 0;
}
using namespace std;
string GetString(string &s,int n)
{
	for (auto e : s)
	{
		cout << e <<" ";
	}
	cout << endl;
	string s1;
	int i = 0;
	for (i = n-1; i < s.size(); i+=n)
	{
		int j = 0;
		for (j = i; j > i - n; j--)
		{
			s1.push_back(s[j]);
		}
	}
	for (auto e : s1)
	{
		cout << e <<" ";
	}
	cout << endl;
	return s1;
	
}
int main()
{
	string s;
	while (getline(cin, s))
	{
		int n = 0;
		cin >> n;
		GetString(s,n);
	}

	return 0;
}
int main()
{
	int n = 1;
	int sum = 0;
	for (n = 1; n < 60; n++)
	{
		sum += n;
		if (sum % 48 == 0)
		{
			cout << n << endl;
		}
	}


	return 0;
}
int main()
{
	int a = 5;
	int b = 6;
	int c = MAX_VALUE(++b, MAX_VALUE(a++, b));
	cout << c << endl;
	return 0;
}
//
//void main()
//{
//	int n[][3] = { 10,20,30,40,50,60 };
//	int(*p)[3];
//	p = n;
//	std::cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
//}
class ClassA
{
	
public:
	ClassA()
	{
		cout << "hha" << endl;
	}
private:
};
//int main()
//{
//	ClassA a2(), b[3], *p[4];
//	return 0;
//}