//给你两个整数数组 nums 和 index。你需要按照以下规则创建目标数组：
//
//目标数组 target 最初为空。
//按从左到右的顺序依次读取 nums[i] 和 index[i]，
//在 target 数组中的下标 index[i] 处插入值 nums[i] 。
//重复上一步，直到在 nums 和 index 中都没有要读取的元素。
//请你返回目标数组。
//
//题目保证数字插入位置总是存在。
//
//示例 1：
//
//输入：nums = [0, 1, 2, 3, 4], index = [0, 1, 2, 2, 1]
//输出：[0, 4, 1, 3, 2]
//解释：
//nums       index     target
//0            0[0]
//1            1[0, 1]
//2            2[0, 1, 2]
//3            2[0, 1, 3, 2]
//4            1[0, 4, 1, 3, 2]
//示例 2：
//
//输入：nums = [1, 2, 3, 4, 0], index = [0, 1, 2, 3, 0]
//输出：[0, 1, 2, 3, 4]
//解释：
//nums       index     target
//1            0[1]
//2            1[1, 2]
//3            2[1, 2, 3]
//4            3[1, 2, 3, 4]
//0            0[0, 1, 2, 3, 4]
//示例 3：
//输入：nums = [1], index = [0]
//输出：[1]
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void Swap(int i, int *returnSize,int indexSize,int *index,int *nums)
{
	for (int j = indexSize-1;j >=indexSize-i; j--)
	{
		returnSize[j] = returnSize[j - 1];
		//printf("交换的两个值：%d %d\n", returnSize[j], returnSize[j - 1]);
	}
	returnSize[(index[i])] = nums[i];
}
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize) 
{

	for (int i = 0; i < indexSize; i++)
	{
		if ((returnSize[(index[i])] >= 0))
		{
			Swap(i, returnSize, indexSize,index,nums);
			//printf("交换的i:%d\n", i);
		}
		if(!((returnSize[(index[i])])>=0&& (returnSize[(index[i])])<=9))
		{
			returnSize[(index[i])] = nums[i];
			//printf("%d %d %d\n", nums[i], index[i], returnSize[(index[i])]);
		}

	}
	for (int j = 0; j < indexSize; j++)
	{
		printf("%d ", returnSize[j]);
		
	}
	printf("\n");
	return returnSize;
}
int main()
{
	int nums[5] = { 0,1,2,3,4 };
	int index[5] = { 0,1,2,2,1 };
	int numsSize = 5;
	int indexSize = 5;
	int *returnSize;
	returnSize = (int*)malloc(indexSize * 4);
	//printf("%d", sizeof(*returnSize));
	int i = 0;
	while(i<45)
	{
	createTargetArray(nums, numsSize, index, indexSize, returnSize);
	i++;
    }
	for (int i = 0; i < numsSize; i++)
	{
		//printf("%d ", createTargetArray(nums, numsSize, index, indexSize, &returnSize)[i]);
	}
	return 0;
}