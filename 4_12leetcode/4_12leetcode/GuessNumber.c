//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int game(int* guess, int guessSize, int* answer, int answerSize) 
//{	
//	    int a, b, c, d, e, f;
//		int count=0;
//		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
//		guess[0] = a;
//		guess[1] = b;
//		guess[2] = c;
//		answer[0] = d;
//		answer[1] = e;
//		answer[2] = f;
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", guess[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", answer[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		if (guess[i] == answer[i])
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int guess[3];
//	int guessSize=0;
//	int answer[3];
//	int answerSize=0;
//	while (1)
//	{
//		printf("%d", game(guess, guessSize, answer, answerSize));
//	}
//	return 0;
//}