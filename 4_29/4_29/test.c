#define _CRT_SECURE_NO_WARNINGS 1

//int Fib(int n)
//{
//	int result = 0;
//	while (n > 1)
//	{
//		result *= n;
//		n -= 1;
//	}
//	return result;
//}

//long Fib(int n)
//{
//	long result;
//	long before_result;
//	long next_result;
//
//	result = before_result = 1;
//	while (n > 2)
//	{
//		n -= 1;
//		next_result = before_result;
//		before_result = result;
//		result = before_result + next_result;
//	}
//	return result;
//}