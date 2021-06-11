#define _CRT_SECURE_NO_WARNINGS 1

void rotake(char* str, int k)
{
	assert(str);
	int n = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + n - 1);
	reverse(str, str + n - 1);

}