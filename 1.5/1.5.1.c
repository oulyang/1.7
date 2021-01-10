#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//二级指针
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end-start;//指针-指针=元素个数
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8 };
//	printf("%d\n", &arr[9] - &arr[0]);//元素个数
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,5,67,8 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p += 1;
//	}
//	return 0;
//}
////隐藏提升
//int main()
//{
//	char a = 3;
//	int b = 127;
//	int c = a + b;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	a = i > 4 ? 3: -3;//三目操作符
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //2 3 3 5
//	i = a++ || ++b || d++;//2 2 3 4
//	//int i = 0,a = 0, b = 2, c = 3, d = 4;
//	////i = a++ && ++b && d++; 1 2 3 4
//	//i = a++ || ++b || d++; //1 3 3 4
//	printf("%d %d %d %d ", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	char brr[] = { 'a','b','c','d'};
//	int a = sizeof(arr);//a b c d e f g \0 8个字节
//	int b=strlen(arr);//7个字符
//	int c = sizeof(brr);//a b c d 4个字符
//	int d = strlen(brr);//随机值
//	printf("%d\n",a);
//	printf("%d\n",b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}
//二进制中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d", count);
//	//num&1==1
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("count=%d", count);
//	return 0;
//}
//异或方法
//int main()
//{
//	int a = 5;
//	int b = 3;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换前a=%d b=%d\n", a, b);
//	printf("交换后a=%d b=%d\n", a, b);
//	return;
//}
//加减法,
//int main()可能会溢出
//{
//	int a = 5;
//	int b = 3;
//	printf("交换前a=%d b=%d\n", a, b);
//	
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b=a << 1;
//	//左移 左边丢弃，右边补0
//	return 0;
//}
//int main()
//{
//	int a = 16;//00000000000000000000000000010000
//	int b=a >> 1;//右移操作符  b=00000000000000000000000000001000
//	//1.算术右移 右边丢弃，左边补原符号位
//	//2.逻辑右移 右边丢弃，左边补0
//	int c = -1;//整数2进制表示：原码 反码 补码 存储到内存中的是补码
//	//111111111111111111111111111111111-补码
//
//	//111111111111111111111111111111110-反码
//
//	//100000000000000000000000000000001-原码
//	int d = c >> 1;
//	printf("%d", b);
//	printf("%d", d);
//	return 0;
//}
//int main()
//{
//	int a = 5 / 2;//得商数2
//	int b = 5 % 2;//得余数1 两个数都是整数
//	double c = 5 / 2.0;
//	printf("%d\n", a);
//	printf("%lf\n", c);
//	return 0;
//}