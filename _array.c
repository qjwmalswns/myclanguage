#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �迭(Array)
// �迭�� ���� Ÿ���� ������� �̷���� ���� ����
// �迭�� �����ϴ� ������ ���� �迭 ���
// �迭���� ��ġ�� ����Ű�� ���ڴ� �ε���(Index)
// �׻� �ε����� 0���� �����ϸ� 0�� ������ ���� �������� ���� �� �ִ�
// �迭�� �׻� ���ӵ� �޸��� �Ҵ�ȴ�

// int arr[3];

//int arr[0];	// �Ұ��� -> �迭�� ũ��� 0���� Ŀ�ߵȴ�

//int size = 100;
//double data[size];	// �Ұ���

//#define MAX 5	// ��ũ�� ��� ����
//int arr[MAX];	// ����

//int main() {
//	int arr[5];	// ���� 5�� �迭, ������
//	int byte_size = 0;	// �迭�� ����Ʈ ũ�⸦ ������ ����
//	int size = 0;		// �迭�� ũ�⸦ ������ ����
//	int i;
//
//	byte_size = sizeof(arr);	// �迭�� ����Ʈ ũ��
//	printf("�迭�� ����Ʈ ũ�� : %d \n\n", byte_size);
//	
//	size = sizeof(arr) / sizeof(arr[0]);	// �迭�� ũ��
//	printf("�迭�� ũ�� : %d\n", size);
//
//	for (i = 0; i < size; i++) {
//		arr[i] = 0;
//	}
//	return 0;
//}

//#define ARR_SIZE 5
//int main() {
//	int arr[ARR_SIZE];
//	int i;
//
//	for ( i = 0; i < ARR_SIZE; i++)
//	{
//		arr[i] = 0;
//	}
//	printf("arr�迭�� ���� : ");
//
//	for (i = 0; i < ARR_SIZE; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("arr�� 3��° ��� ? : %d\n", arr[2]);
//	return 0;
//}

//int main() {
//	int arr[10];
//	arr[0] = 3;
//	arr[1] = 5.5;
//	arr[2] = 7;
//	printf("arr�� ù��° ��� ? : %d\n", arr[0]);
//	printf("arr�� �ι�° ��� ? : %d\n", arr[1]);
//	printf("arr�� ����° ��� ? : %d\n", arr[2]);
//}

//int main() {
//	int arr[10];
//	int i = 5;
//	arr[i] = 3;
//	arr[i+1] = 5.5;
//	arr[i+3] = 7;
//	printf("arr�� ������° ��� ? : %d\n", arr[i]);
//	printf("arr�� �ϰ���° ��� ? : %d\n", arr[i+1]);
//	printf("arr�� ��ȩ��° ��� ? : %d\n", arr[8]);
//}

//#define ARR_SIZE 5
//int add(int a, int b) { return a + b; }
//
//int main() {
//	int arr[ARR_SIZE] = { 0 };	// ��ü�� 0���� �ʱ�ȭ
//	int i;
//	arr[0] = 5;
//	arr[1] = arr[0] + 10;	// �迭�� ���(����)�� ���Ŀ� �̿�
//	arr[2] = add(arr[0], arr[1]);	// �Լ��� ���ڷ� ���
//	printf(" ������ 2�� �Է� �Ͻÿ� : ");
//	scanf("%d %d", &arr[3], &arr[4]);	// �迭�� ���ҷ� �Է¹���
//	for ( i = 0; i < ARR_SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#define ARR_SIZE 5
//
//int main() {
//	int arr[ARR_SIZE] = { 10, 20, 30, 40, 50 };	// ��ü�� 0���� �ʱ�ȭ
//	int i;
//	printf("arr = ");
//	for (i = 0; i < ARR_SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("arr[5] = %d \n", arr[5]);	// �迭 ������ �Ѿ�� ���
//
//	return 0;
//}

//// �迭�� ����
//int main() {
//	int x[5] = { 1, 2, 3, 4, 5 };
//	int y[5] = { 0 };
//	y = x;						// �Ұ��� (������ ����)
//	return 0;
//}
//
//for (int i = 0; i < 5; i++) {
//	y[i] = x[i];				// ����
//}

//// �迭�� �޸� ����
//int main() {
//	int i = 5;
//	char c = 'A';
//	printf("���� i�� �ּҰ� : %p\t���� i�� �� : %d\n", &i, i);
//	printf("���� c�� �ּҰ� : %p\t���� c�� �� : %c\n", &c, c);
//	return 0;
//}

//int main() {	// �迭�� �ʱ�ȭ�� ��, �ѹ� ó�� ������ �� �ѹ��� ��� ĭ �ʱ�ȭ ����
//	int arr[4] = {1, 2, 3};		// char : \0 << ������ 0, �Ǽ� : 0.0, bool : false
//	//arr[0] = 3;
//	//arr[1] = 5;
//	//arr[2] = 7;
//	//arr[3] = 9;
//	printf("arr�迭�� ù��° ��� �ּҰ� : %p\t��Ұ� : %d\n", &arr[0], arr[0]);
//	printf("arr�迭�� �ι�° ��� �ּҰ� : %p\t��Ұ� : %d\n", &arr[1], arr[1]);
//	printf("arr�迭�� ����° ��� �ּҰ� : %p\t��Ұ� : %d\n", &arr[2], arr[2]);
//	printf("arr�迭�� �׹�° ��� �ּҰ� : %p\t��Ұ� : %d\n", &arr[3], arr[3]);
//	return 0;
//}

int main() {
	//int arr[4] = {0, };	// = {0}
	//int arr[4] = { 3, 5, 7, 9, 11 };	// �迭�� ũ�� ���� ������ �Ҵ��ϸ� ������
	//int arr[] = { 3, 5, 7, 9 };			// �迭�� ũ�⸦ �������� ������ �ʱ�ȭ ��� ������ �ڵ� �ν�
	int arr[4], i;
	for (i = 0; i < 4; i++) {
		arr[i] = i+1;
	}

	for (i = 0; i < 4; i++)
	{
		printf("arr�迭�� �ε��� %d�� ��Ұ� : %d \n", i, arr[i]);
	}
	return 0;
}