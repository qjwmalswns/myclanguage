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

//int main() {
//	//int arr[4] = {0, };	// = {0}
//	//int arr[4] = { 3, 5, 7, 9, 11 };	// �迭�� ũ�� ���� ������ �Ҵ��ϸ� ������
//	//int arr[] = { 3, 5, 7, 9 };			// �迭�� ũ�⸦ �������� ������ �ʱ�ȭ ��� ������ �ڵ� �ν�
//	int arr[4], i;
//	for (i = 0; i < 4; i++) {
//		arr[i] = i+1;
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("arr�迭�� �ε��� %d�� ��Ұ� : %d \n", i, arr[i]);
//	}
//	return 0;
//}

//main() {
//    float a;
//    double b;
//    int *c;    // 4����Ʈ ũ�� ������ ������ ���� c ����
//    long *d;   // 8����Ʈ ũ�� ������ ������ ���� d ����
//    float *e;  // 4����Ʈ ũ�� �Ǽ��� ������ ���� e ����
//    double *f; // 8����Ʈ ũ�� �Ǽ��� ������ ���� f ����
//
//    printf("float �Ǽ��� ������ ũ��� %d\n", sizeof(a));
//    printf("double �Ǽ��� ������ ũ��� %d\n", sizeof(b));
//    printf("int ������ ������ ũ��� %d\n", sizeof(c));
//    printf("long ������ ������ ũ��� %d\n", sizeof(d));
//    printf("float ������ ������ ũ��� %d\n", sizeof(e));
//    printf("double ������ ������ ũ��� %d\n", sizeof(f));
//}

//#define MAX 5
//arr[MAX];	// �迭�� ����� ����

//int main() {
//	int arr[5] = { 2,3,4,5,6 };
//	int brr[] = { 2,4,8, };
//	printf("int���� ũ�� : %d byte \n", sizeof(int));
//	printf("�迭 arr�� ũ�� : %d byte \n", sizeof(arr));
//	printf("�迭 brr�� ũ�� : %d byte \n", sizeof(brr));
//	return 0;
//}

//int main() {
//	int arr[5];	// ���� �Է� ������ �迭
//	int i, sum = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d��° �л��� ������ �Է��Ͻÿ� : ", i + 1);
//		scanf("%d", &arr[i]);
//	}	// �Է�
//
//	for ( i = 0; i < 5; i++)
//	{
//		sum += arr[i];	// sum = sum + arr[i]
//	}	// ���
//
//	printf("��ü �л��� ���� : %d \n", sum);
//	printf("��ü �л��� ����� : %d \n", sum / 5);
//
//	return 0;
//}

//// ���� �պ�
//int main() {
//	int arr[5];	// �Էµ� ������ ������ �迭
//	int i, sum = 0, ave = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d��° �л��� ������ �Է��Ͻÿ� : ", i + 1);
//		scanf("%d", &arr[i]);
//	}	// �Է�
//
//	for (i = 0; i < 5; i++)
//	{
//		sum += arr[i];	// sum = sum + arr[i]
//	}	// ���
//
//	ave = sum / 5;
//
//	printf("��ü �л��� ���� : %d \n", sum);
//	printf("��ü �л��� ����� : %d \n", ave);
//
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d��° �л� : ", i + 1);
//
//		if (arr[i] >= ave)
//		{
//			printf("�հ� \n");
//		}
//
//		else
//		{
//			printf("���հ� \n");
//		}
//	}
//
//	return 0;
//}


//// �迭�� Ž��
//int main() {
//	int data[] = { 78, 52, 63, 58, 77, 52, 88 };
//	int size;
//	int key, i, found = 0;
//	
//	size = sizeof(data) / sizeof(data[0]);
//	
//	printf("arr = ");
//
//	for ( i = 0; i < size; i++)
//	{
//		printf("%d   ", data[i]);
//	}
//	
//	printf("\n");
//	printf("ã�� ����? : ");
//	scanf("%d", &key);
//
//	for ( i = 0; i < size; i++)
//	{
//		if (data[i]==key)
//		{
//			printf("ã�� ������ �ε��� : %d \n", i);	// �ε����� 0����, ������ 1����
//			found = 1;	// flag �����
//		}
//	}
//
//	if (!found)
//	{
//		printf("ã�� ���Ұ� �����ϴ� \n");
//	}
//	
//	return 0;
//}


//#define MAX 30
//
//int main() {
//	char sentence[MAX] = { 0 };
//	char key;
//	int i;
//	
//	printf("30�� ������ ������ �Է��Ͻÿ� : ");
//	
//	for ( i = 0; i < MAX; i++)
//	{
//		scanf("%c", &sentence[i]);	// char�� �ϳ��� �޴´�
//		
//		if (sentence[i] == '\n')
//		{
//			sentence[i] = '\0';		// ������ ���� �� Ȯ���ҷ��� NULL ���ڸ� Ȯ��
//			
//			break;
//		}
//	}
//
//	printf("ã�� ���ڸ� �Է��Ͻÿ� : ");
//	scanf("%c", &key);
//
//	for ( i = 0; i < MAX; i++)
//	{
//		if (sentence[i]==key)
//		{
//			printf("%d��° ĭ���� ã�ҽ��ϴ� \n", i + 1);
//		}
//	}
//
//	return 0;
//}


//// �迭�� �̿��ؼ� ���� ��ȯ 10 --> 2
//int main() {
//	int decimal;
//	int binary[20] = { 0, };
//	int position = 0;
//	
//	printf("2������ ��ȯ�� 10������ �Է��ϼ��� : ");
//	scanf("%d", &decimal);
//
//	while (1)	// (ture)
//	{
//		binary[position] = decimal % 2;	// �������� �迭�� ����
//		decimal = decimal / 2;			// ���� ����
//		position++;
//
//		if (decimal == 0)
//		{
//			break;
//		}
//	}	// 2������ ��ȯ
//	
//	for (int i = position-1; i >= 0; i--)
//	{
//		printf("%d", binary[i]);
//	}	// �迭�� �������� ���
//	
//	printf("\n");
//	
//	return 0;
//}

// �Լ��� ���ڷ� �迭 ����
// �Լ��� �Ű������� �迭�� ���� �� ���� �迭�� ũ�⸦ �����Ѵ�
// �迭�� ũ�⸦ �Ű������� �޾ƿ�
//#define MAX 10
//void print_array(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main() {
//	int score[] = { 99, 88, 77, 66, 85, 90 };
//	int size = sizeof(score) / sizeof(score[0]);
//	int arr[MAX] = { 0 };
//
//	print_array(score, size);
//	print_array(arr, MAX);
//
//	return 0;
//}

//// 2���� �迭
//// ��� ��
//int arr_2[3][3] = {
//	{1,2,3},
//	{4,5,6},
//	{7,8,9}
//};
//
//int arr_3[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };	// ���� �Ʒ��� �Ȱ���
//int arr_4[3][3] = { 0 };

//int main() {
//	int arr_2[3][3] = { {1,4,6}, {8,5,2}, {7,9,3} };
//	
//	printf("1�� 1�� : %d | ", arr_2[0][0]);
//	printf("1�� 2�� : %d | ", arr_2[0][1]);
//	printf("1�� 3�� : %d | \n", arr_2[0][2]);
//	printf("2�� 1�� : %d | ", arr_2[1][0]);
//	printf("2�� 2�� : %d | ", arr_2[1][1]);
//	printf("2�� 3�� : %d | \n", arr_2[1][2]);
//	printf("3�� 1�� : %d | ", arr_2[2][0]);
//	printf("3�� 2�� : %d | ", arr_2[2][1]);
//	printf("3�� 3�� : %d | \n", arr_2[2][2]);
//	
//	return 0;
//}

//int main() {
//	int arr_2[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i, j;
//	
//	for ( i = 0; i < 3; i++)	// ��
//	{
//		for ( j = 0; j < 3; j++)	//��
//		{
//			printf("%d�� %d�� : %d ", i+1, j+1, arr_2[i][j]);
//			if (j < 3) printf(" | ");
//			if (j == 2) printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main() {
//	int arr_2[3][3] = { {1,4,6}, {8,5,2}, {7,9,3} };
//	int i, j;
//	for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 3; j++)
//		{
//			printf("%d�� %d�� : %d | �ּ� : %p\n", i + 1, j + 1, arr_2[i][j], &arr_2[i][j]);
//		}
//	}
//	return 0;
//}

//// 2���� �迭���� ������ �� ���� �� ����Ѽ� �ִ�(��, ���� �ȵ�)
//int main() {
//	int arr_2[][3] = { {1,4},{8,5,2} };
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 3; j++)
//		{
//			printf("%d�� %d�� : %d \n", i + 1, j + 1, arr_2[i][j]);
//		}
//	}
//	return 0;
//}


//// 2���� �迭���� ������ �� ���� �� ����Ѽ� �ִ�(��, ���� �ȵ�)
//int main() {
//	int arr_2[][3] = { {1,4},{8,5,2} };
//	
//	printf("�迭�� byte ũ�� : %d \n", sizeof(arr_2));
//	printf("�ʱ�ȭ ���� ���� arr_2[0][2]�� �� : %d \n", arr_2[0][2]);
//
//	return 0;
//}

// ��� ���� ���� ���غ���
#define ROW 3
#define COL 3
int main() {
	int square[ROW + 1][COL + 1] = { 0 };
	int i, j;
	
	printf("���ٿ� 3���� ������ 3�� �Է��ϼ��� \n");

	for ( i = 0; i < ROW; i++)	// �Է�
	{
		for ( j = 0; j < COL; j++)
		{
			scanf("%d", &square[i][j]);
		}
	}

	for ( i = 0; i < ROW; i++)	// ����
	{
		for ( j = 0; j < COL; j++)
		{
			square[i][COL] += square[i][j];	// ���� �⺻ ����
			if (i < ROW)
			{
				square[ROW][j] += square[i][j];	// ���� �⺻ ����
			}
			// square[ROW][COL] += (square[i][COL] + square[ROW][j]);
			square[ROW][COL] += square[i][j];
		}
	}

	
	for ( i = 0; i < ROW + 1; i++)	// ���
	{
		for ( j = 0; j < COL + 1; j++)
		{
			printf("%5d", square[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
