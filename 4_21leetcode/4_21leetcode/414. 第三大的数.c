//给定一个非空数组，返回此数组中第三大的数。
//如果不存在，则返回数组中最大的数。
//要求算法时间复杂度必须是O(n)。
//
//示例 1:
//
//输入: [3, 2, 1]
//
//	输出 : 1
//
//	解释 : 第三大的数是 1.
//	示例 2 :
//
//	输入 : [1, 2]
//
//	输出 : 2
//
//	解释 : 第三大的数不存在, 所以返回最大的数 2 .
//	示例 3 :
//
//	输入 : [2, 2, 3, 1]
//
//	输出 : 1
//
//	解释 : 注意，要求返回第三大的数，是指第三大且唯一出现的数。
//	存在两个值为2的数，它们都排第二。
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