// Function (�Լ�)
// �Լ��� ? : �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� ���α׷� �ڵ��� ����
// C���� ũ�� ǥ���Լ�, ����������Լ�
// �Լ���� �̿�
// �ݺ����� ���α׷� --> Ư���� �۾� �ݺ� ���ϱ� ����
// �Լ��� �ۼ� --> ���ȭ --> ������ --> �������� ������
// �Ϲ������� �ϳ��� ����� �ϳ��� �Լ��� �ۼ�

//int sum(int x, y) // int�� x, y �Ű����� ����� �޾Ƽ� ��� ���� �� int ������ ����� ���
//{
//	/* �Լ� ��ü */
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int printf_hello()	// �Լ� ������ main �Լ����� ���� �־�� ��
//{
//	printf("Hello World !\n");
//
//	return 0;
//}
//
//int main() {
//	printf("�Լ��� �ҷ����ô� \n");
//	printf_hello();
//
//	printf("�Լ��� �� �ҷ����ϴ� \n");
//	printf_hello();
//
//	return 0;
//}

//int print_hello();	// �Լ��� ���� ����
//
//int main() {
//	printf("�Լ��� �ҷ����ô� \n");
//	printf_hello();
//
//	printf("�Լ��� �� �ҷ����ϴ� \n");
//	printf_hello();
//
//	return 0;
//}
//
//int printf_hello()
//{
//	printf("Hello World !\n");
//
//	return 0;
//}

// �Լ��� �̸� ��� --. ��Ȯ�ϰ� ����� �ϴ���
//void f1(void) {
//
//}
//
//void play_video() {
//
//}
// �ĺ��� ���� ��Ģ
// �ϰ��� ��� ��Ģ
// �����̸� �Լ��� ���� �ϰ� ���� �� ��

//void play_video(void) // �Ű������� ���� �Լ�, ������ ������ void
//{ 
//	printf("��ȯ����");
//}
//
//void main(void)
//{
//
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main() {
//	int a, b, sum;
//
//	a = 3;
//	b = 5;
//	sum = add(a, b);
//
//	printf("a�� b�� ���� : %d \n", sum);			
//	printf("a�� 10�� ���� : %d", add(a, 10));	// �Լ� ����ȣ��
//
//	return 0;
//}
// �Լ��� �ۼ��� �Լ��� ���ϰ��� �ڷ���(int), �Լ��� ����(int x, int y), �Լ��� ����(return����) �ʿ�
// �Լ��� ���ڴ� �ݵ�� ������ �ڷ����� �°� �־ ȣ��
// �Լ� �̸� �ߺ� ����
// �Լ��� --> �ĺ��� ��Ģ ����
// �Լ��� ���ϰ��� ���� void �� �Լ��� �ƴϸ� �ݵ�� return�� ���� �ؾ� ��

//// ��ũ�� ����� �̿��� �Լ� ����
//#define add(x, y) (x + y)
//
//int main() {
//	int a, b, sum;
//
//	a = 3;
//	b = 5;
//	sum = add(a, b);	// add(3 + 5)
//
//	printf("a�� b�� ���� : %d \n", sum);
//	printf("a�� 10�� ���� : %d", add(a, 10));	// �Լ� ����ȣ��
//
//	return 0;
//}

// ������ ��ȿ����
// ��������(Local variable)
// ��������(Global variable)
// ��������(Static variable)
// �������ͺ���(Resister variable)

// ��������
// "���" ������ ����� ����
// ������ ����� "���" �������� ��ȿ, ����� ����Ǹ� �޸𸮿��� �����
// ���������� �޸𸮻��� ����(Stack) ������ ����, �ʱ�ȭ���� ������ �����Ⱚ���� �ʱ�ȭ ��
// �Լ��� �Ű������� �Լ������� ���ǵǴ� ���������� ��޵�
//void local(void);	// �Լ��� ���� ����
//
//int main() {
//	int i = 5;
//	int var = 10;
//
//	printf("main�Լ� ���� �������� var�� ���� : %d \n", var);
//
//	if (i < 10)
//	{
//		local();
//
//		int var = 30;
//
//		printf("if�� ���� �����м� var�� �� : %d \n", var);
//	}
//	printf("���� �������� var�� �� : %d \n", var);
//
//	return 0;
//}
//
//void local(void) {
//	int var = 20;
//
//	printf("Local�Լ����� �������� var�� �� : %d \n", var);
//}

// ��������
// �Լ� �ܺο��� ����� ����
// ���α׷��� ��𿡼��� ���� ����, ���α׷��� ���� �Ǿ�� �޸𸮿��� �����
// ���������� �޸𸮻󿡼� ������(Data)������ ����
// ���� �ʱ�ȭ ���� �ʾƵ� 0���� �ڵ����� �ʱ�ȭ �ȴ�
//void local(void);
//
//int var;		// ��������, '_' ���� ǥ�ø� �ٿ��� �������� ǥ��
//int main() {
//	printf("�������� var�� �ʱⰪ : %d \n", var);
//	
//	int i = 5;
//	int var = 10;	// �������� ����
//	
//	printf("main�Լ� ���� �������� var�� �� : %d \n", var);
//
//	if (i<10)
//	{
//		local();
//		printf("���� ���� var�� �� : %d \n", var);
//	}
//	printf("�� �̻� main�Լ����� �������� var�� ���� �Ұ� \n");	// �Ȱ��� �̸����� �������� �����߱� ����
//
//	return 0;
//}
//
//void local(void)
//{
//	var = 20;
//	printf("local �Լ� ���� ���� ���� var�� �� : %d\n", var);
//}


// �������� (Static)
// Static���� ���ǵ� ����
// ���������� ���������� Ư¡�� ��� ������ �ִ�
// �Լ������� ����� ���������� ��������ó�� �� �ѹ��� �ʱ�ȭ�Ǹ�(���� ����� ��, �ѹ�) / (�������� Ư¡)
// ���α׷��� ����Ǿ�� �޸𸮿��� �����ȴ� / (�������� Ư¡)
// ���������� ��������ó�� �ش� �Լ��������� ���� ���� / (�������� Ư¡)

//void local();
//void staticVar(void);
//int main() {
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		local();
//		staticVar();
//	}
//	return 0;
//}
//
//void local()
//{
//	int count = 1;	// �������� ���� �� �ʱ�ȭ
//	printf("local�Լ��� %d��° ȣ��Ǿ��� \n", count);
//	count++;
//}
//
//void staticVar(void)
//{
//	static int static_count = 1;	// �������� ���� �� �ʱ�ȭ
//	printf("StaticVar�Լ��� %d��° ȣ��Ǿ��� \n\n", static_count);
//	static_count++;
//}

// �������ͺ���
// �������ͺ����� �������� ������ �� resister Ű���带 �ٿ��� �����Ѵ�
// CPU�� �������� �޸𸮿� ����


//// �޸� �����Ҵ�
//#include <stdlib.h>	// malloc, free �Լ��� ����� ��� ����
//int main() {
//	int num1 = 20;	// int�� ���� ����
//	int *numPtr1;	// int�� ������ ����, �����ͺ����� ���� �� �ִ� ���� �ּҰ�
//
//	numPtr1 = &num1;// num1�� �޸��ּҸ� ���ؼ� numPtr1 ������ ����
//	int *numPtr2;	// int�� ������ ����
//
//	numPtr2 = malloc(sizeof(int));	// int�� ũŰ(4����Ʈ) ��ŭ �����޸� �Ҵ�
//
//	printf("%p\n", numPtr1);	// ���� numPtr1�� �ּ� ���
//	// ��ǻ�� �����Ҷ����� �޶���
//	printf("%p\n", numPtr2);	// ���� �Ҵ�� �޸� �ּ� ���
//	
//	free(numPtr2);	// �����޸� ����
//	return 0;
//}

//int main() {
//	int *numPtr;	// int ������ ����
//	numPtr = malloc(sizeof(int));	// 4����Ʈ ũ���� ���� �޸� �Ҵ�
//
//	*numPtr = 10;	// �����͸� �������� ������ �� �Ҵ�
//	printf("%d\n", *numPtr);	// �����͸� �������Ͽ� �޸𸮿� ����� ���� ���
//	free(numPtr);	// ���� �޸� ����
//	return 0;
//}

//// memset(������, ������ ��, ũ��)
//#include <string.h>
//int main() {
//	long long *numPtr = malloc(sizeof(long long));	// 8����Ʈ �Ҵ�
//	memset(numPtr, 0x27, 8);	// numPtr�� ����Ű�� �޸𸮸� 8����Ʈ��ŭ 0x27�� ����
//	printf("0x%llx \n", *numPtr);
//	free(numPtr);
//	return 0;
//}

// ����Լ�(��� ȣ��)
// �Լ��� �Լ��ȿ��� �ڱ� �ڽ��� �ٽ� �ڽ��� �Լ��� ������
//void P(int c)
//{
//	if (c == 0)	// ����Լ� Ż�� ����
//		return;
//
//	printf("����Լ� �Դϴ�. %d\n", c);
//	P(c - 1);
//}
//
//int main() {
//	P(10);
//
//	return 0;
//}

//unsigned int factorial(int n);
//int main() {
//	int i, n, result;
//	
//	printf("���� �Է� : ");
//	scanf("%d", &n);
//
//	result = factorial(n);
//	printf("%d! = %d \n", n, result);
//	return 0;
//}
//
//unsigned int factorial(int n)
//{
//	if (n <= 1) return 1;
//	else return (n * factorial(n - 1));
//}
