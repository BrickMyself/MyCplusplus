//���������������� nums �� index������Ҫ�������¹��򴴽�Ŀ�����飺
//
//Ŀ������ target ���Ϊ�ա�
//�������ҵ�˳�����ζ�ȡ nums[i] �� index[i]��
//�� target �����е��±� index[i] ������ֵ nums[i] ��
//�ظ���һ����ֱ���� nums �� index �ж�û��Ҫ��ȡ��Ԫ�ء�
//���㷵��Ŀ�����顣
//
//��Ŀ��֤���ֲ���λ�����Ǵ��ڡ�
//
//ʾ�� 1��
//
//���룺nums = [0, 1, 2, 3, 4], index = [0, 1, 2, 2, 1]
//�����[0, 4, 1, 3, 2]
//���ͣ�
//nums       index     target
//0            0[0]
//1            1[0, 1]
//2            2[0, 1, 2]
//3            2[0, 1, 3, 2]
//4            1[0, 4, 1, 3, 2]
//ʾ�� 2��
//
//���룺nums = [1, 2, 3, 4, 0], index = [0, 1, 2, 3, 0]
//�����[0, 1, 2, 3, 4]
//���ͣ�
//nums       index     target
//1            0[1]
//2            1[1, 2]
//3            2[1, 2, 3]
//4            3[1, 2, 3, 4]
//0            0[0, 1, 2, 3, 4]
//ʾ�� 3��
//���룺nums = [1], index = [0]
//�����[1]
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void Swap(int i, int *returnSize,int indexSize,int *index,int *nums)
{
	for (int j = indexSize-1;j >=indexSize-i; j--)
	{
		returnSize[j] = returnSize[j - 1];
		//printf("����������ֵ��%d %d\n", returnSize[j], returnSize[j - 1]);
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
			//printf("������i:%d\n", i);
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