//����һ���ǿ����飬���ش������е����������
//��������ڣ��򷵻���������������
//Ҫ���㷨ʱ�临�Ӷȱ�����O(n)��
//
//ʾ�� 1:
//
//����: [3, 2, 1]
//
//	��� : 1
//
//	���� : ����������� 1.
//	ʾ�� 2 :
//
//	���� : [1, 2]
//
//	��� : 2
//
//	���� : ���������������, ���Է��������� 2 .
//	ʾ�� 3 :
//
//	���� : [2, 2, 3, 1]
//
//	��� : 1
//
//	���� : ע�⣬Ҫ�󷵻ص������������ָ��������Ψһ���ֵ�����
//	��������ֵΪ2���������Ƕ��ŵڶ���
#include<stdio.h>
#include<stdlib.h>
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int thirdMax(int* nums, int numsSize)
{
	if (numsSize <= 2)
	{
		return (nums[0] > nums[1] ? nums[0] : nums[1]);
	}
	if (numsSize == 3)
	{
		if (nums[0] < nums[1])
		{
			swap(&nums[0], &nums[1]);
		}
		if (nums[1] < nums[2])
		{
			swap(&nums[1], &nums[2]);
		}
		if (nums[0] < nums[1])
		{
			swap(&nums[0], &nums[1]);
		}
		if (nums[0] < nums[2])
		{
			swap(&nums[1], &nums[2]);
		}
		if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2])
		{
			return nums[0];
		}
		else
		{
			return nums[2];
		}
	}
	else
	{
		if (nums[0] < nums[1])
		{
			swap(&nums[0], &nums[1]);
		}
		if (nums[1] < nums[2])
		{
			swap(&nums[1], &nums[2]);
		}
		if (nums[0] < nums[1])
		{
			swap(&nums[0], &nums[1]);
		}
		if (nums[0] < nums[2])
		{
			swap(&nums[1], &nums[2]);
		}
		//printf("%d %d %d\n", nums[0], nums[1], nums[2]);
		for (int i = 3; i < numsSize; i++)
		{
			if (nums[0] == nums[1] && nums[0] == nums[2])
			{
				nums[1] = nums[i];
				++i;
				nums[2] = nums[i];
				if (nums[0] < nums[1])
				{
					swap(&nums[0], &nums[1]);
				}
				if (nums[1] < nums[2])
				{
					swap(&nums[1], &nums[2]);
				}
				if (nums[0] < nums[1])
				{
					swap(&nums[0], &nums[1]);
				}
				if (nums[0] < nums[2])
				{
					swap(&nums[1], &nums[2]);
				}
				printf("%d %d %d\n", nums[0], nums[1], nums[2]);
			}
			if ((nums[i] == nums[0]) || (nums[i] == nums[1]) || (nums[i] == nums[2]))
			{
				++i;
            }
			if (nums[0] == nums[1])
			{
				nums[1] == nums[i];
				++i;
				if (nums[0] < nums[1])
				{
					swap(&nums[0], &nums[1]);
				}
				if (nums[1] < nums[2])
				{
					swap(&nums[1], &nums[2]);
				}
				if (nums[0] < nums[1])
				{
					swap(&nums[0], &nums[1]);
				}
				if (nums[0] < nums[2])
				{
					swap(&nums[1], &nums[2]);
				}
				printf("%d %d %d\n", nums[0], nums[1], nums[2]);
			}
			if ((nums[i] > nums[2])||nums[1]==nums[2])
			{
				nums[2] = nums[i];
				{

					if (nums[0] < nums[1])
					{
						swap(&nums[0], &nums[1]);
					}
					if (nums[1] < nums[2])
					{
						swap(&nums[1], &nums[2]);
					}
					if (nums[0] < nums[1])
					{
						swap(&nums[0], &nums[1]);
					}
					if (nums[0] < nums[2])
					{
						swap(&nums[1], &nums[2]);
					}
				}
			}

			printf("%d %d %d\n", nums[0], nums[1], nums[2]);
		}
		if (nums[1] == nums[2]||nums[1]==nums[0])
		{
			return nums[0];
		}
		else
		{
			return nums[2];
		}

	}
}
int main()
{
	int numsSize = 4;
	signed int nums[7] = {2,2,3,1};
	//int ret;
	printf("%d",thirdMax(nums, numsSize));
	//printf("%d", ret);
	//printf("%d", nums[0]);
	return 0;
}