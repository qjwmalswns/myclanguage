#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열(Array)
// 배열은 같은 타입의 변수들로 이루어진 유한 집합
// 배열을 구성하는 각각의 값을 배열 요소
// 배열에서 위치를 가리키는 숫자는 인덱스(Index)
// 항상 인덱스는 0에서 시작하며 0을 포함한 양의 정수만을 가질 수 있다
// 배열은 항상 연속된 메모리의 할당된다

// int arr[3];

//int arr[0];	// 불가능 -> 배열의 크기는 0보다 커야된다

//int size = 100;
//double data[size];	// 불가능

//#define MAX 5	// 매크로 상수 지정
//int arr[MAX];	// 가능

//int main() {
//	int arr[5];	// 킈가 5인 배열, 정수형
//	int byte_size = 0;	// 배열의 바이트 크기를 저장할 변수
//	int size = 0;		// 배열의 크기를 저장할 변수
//	int i;
//
//	byte_size = sizeof(arr);	// 배열의 바이트 크기
//	printf("배열의 바이트 크기 : %d \n\n", byte_size);
//	
//	size = sizeof(arr) / sizeof(arr[0]);	// 배열의 크기
//	printf("배열의 크기 : %d\n", size);
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
//	printf("arr배열의 원소 : ");
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
//	printf("arr의 3번째 요소 ? : %d\n", arr[2]);
//	return 0;
//}

//int main() {
//	int arr[10];
//	arr[0] = 3;
//	arr[1] = 5.5;
//	arr[2] = 7;
//	printf("arr의 첫번째 요소 ? : %d\n", arr[0]);
//	printf("arr의 두번째 요소 ? : %d\n", arr[1]);
//	printf("arr의 세번째 요소 ? : %d\n", arr[2]);
//}

//int main() {
//	int arr[10];
//	int i = 5;
//	arr[i] = 3;
//	arr[i+1] = 5.5;
//	arr[i+3] = 7;
//	printf("arr의 여섯번째 요소 ? : %d\n", arr[i]);
//	printf("arr의 일곱번째 요소 ? : %d\n", arr[i+1]);
//	printf("arr의 아홉번째 요소 ? : %d\n", arr[8]);
//}

//#define ARR_SIZE 5
//int add(int a, int b) { return a + b; }
//
//int main() {
//	int arr[ARR_SIZE] = { 0 };	// 전체를 0으로 초기화
//	int i;
//	arr[0] = 5;
//	arr[1] = arr[0] + 10;	// 배열의 요소(원소)를 수식에 이용
//	arr[2] = add(arr[0], arr[1]);	// 함수의 인자로 사용
//	printf(" 정수를 2개 입력 하시오 : ");
//	scanf("%d %d", &arr[3], &arr[4]);	// 배열의 원소로 입력받음
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
//	int arr[ARR_SIZE] = { 10, 20, 30, 40, 50 };	// 전체를 0으로 초기화
//	int i;
//	printf("arr = ");
//	for (i = 0; i < ARR_SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("arr[5] = %d \n", arr[5]);	// 배열 범위를 넘어가는 경우
//
//	return 0;
//}

//// 배열의 복사
//int main() {
//	int x[5] = { 1, 2, 3, 4, 5 };
//	int y[5] = { 0 };
//	y = x;						// 불가능 (컴파일 에러)
//	return 0;
//}
//
//for (int i = 0; i < 5; i++) {
//	y[i] = x[i];				// 가능
//}

//// 배열의 메모리 구조
//int main() {
//	int i = 5;
//	char c = 'A';
//	printf("변수 i의 주소값 : %p\t변수 i의 값 : %d\n", &i, i);
//	printf("변수 c의 주소값 : %p\t변수 c의 값 : %c\n", &c, c);
//	return 0;
//}

//int main() {	// 배열의 초기화는 단, 한번 처음 선언할 때 한번에 모든 칸 초기화 가능
//	int arr[4] = {1, 2, 3};		// char : \0 << 어차피 0, 실수 : 0.0, bool : false
//	//arr[0] = 3;
//	//arr[1] = 5;
//	//arr[2] = 7;
//	//arr[3] = 9;
//	printf("arr배열의 첫번째 요소 주소값 : %p\t요소값 : %d\n", &arr[0], arr[0]);
//	printf("arr배열의 두번째 요소 주소값 : %p\t요소값 : %d\n", &arr[1], arr[1]);
//	printf("arr배열의 세번째 요소 주소값 : %p\t요소값 : %d\n", &arr[2], arr[2]);
//	printf("arr배열의 네번째 요소 주소값 : %p\t요소값 : %d\n", &arr[3], arr[3]);
//	return 0;
//}

//int main() {
//	//int arr[4] = {0, };	// = {0}
//	//int arr[4] = { 3, 5, 7, 9, 11 };	// 배열의 크기 보다 변수를 할당하면 에러남
//	//int arr[] = { 3, 5, 7, 9 };			// 배열의 크기를 지정하지 않으면 초기화 요소 개수를 자동 인식
//	int arr[4], i;
//	for (i = 0; i < 4; i++) {
//		arr[i] = i+1;
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("arr배열의 인덱스 %d번 요소값 : %d \n", i, arr[i]);
//	}
//	return 0;
//}

//main() {
//    float a;
//    double b;
//    int *c;    // 4바이트 크기 정수형 포인터 변수 c 선언
//    long *d;   // 8바이트 크기 정수형 포인터 변수 d 선언
//    float *e;  // 4바이트 크기 실수형 포인터 변수 e 선언
//    double *f; // 8바이트 크기 실수형 포인터 변수 f 선언
//
//    printf("float 실수형 변수의 크기는 %d\n", sizeof(a));
//    printf("double 실수형 변수의 크기는 %d\n", sizeof(b));
//    printf("int 포인터 변수의 크기는 %d\n", sizeof(c));
//    printf("long 포인터 변수의 크기는 %d\n", sizeof(d));
//    printf("float 포인터 변수의 크기는 %d\n", sizeof(e));
//    printf("double 포인터 변수의 크기는 %d\n", sizeof(f));
//}

//#define MAX 5
//arr[MAX];	// 배열과 상수의 조합

//int main() {
//	int arr[5] = { 2,3,4,5,6 };
//	int brr[] = { 2,4,8, };
//	printf("int형의 크기 : %d byte \n", sizeof(int));
//	printf("배열 arr의 크기 : %d byte \n", sizeof(arr));
//	printf("배열 brr의 크기 : %d byte \n", sizeof(brr));
//	return 0;
//}

//int main() {
//	int arr[5];	// 성적 입력 저장할 배열
//	int i, sum = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d번째 학생의 성적을 입력하시오 : ", i + 1);
//		scanf("%d", &arr[i]);
//	}	// 입력
//
//	for ( i = 0; i < 5; i++)
//	{
//		sum += arr[i];	// sum = sum + arr[i]
//	}	// 출력
//
//	printf("전체 학생의 합은 : %d \n", sum);
//	printf("전체 학생의 평균은 : %d \n", sum / 5);
//
//	return 0;
//}

//// 성적 합불
//int main() {
//	int arr[5];	// 입력된 성적을 저장할 배열
//	int i, sum = 0, ave = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d번째 학생의 성적을 입력하시오 : ", i + 1);
//		scanf("%d", &arr[i]);
//	}	// 입력
//
//	for (i = 0; i < 5; i++)
//	{
//		sum += arr[i];	// sum = sum + arr[i]
//	}	// 출력
//
//	ave = sum / 5;
//
//	printf("전체 학생의 합은 : %d \n", sum);
//	printf("전체 학생의 평균은 : %d \n", ave);
//
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d번째 학생 : ", i + 1);
//
//		if (arr[i] >= ave)
//		{
//			printf("합격 \n");
//		}
//
//		else
//		{
//			printf("불합격 \n");
//		}
//	}
//
//	return 0;
//}


//// 배열의 탐색
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
//	printf("찾을 값은? : ");
//	scanf("%d", &key);
//
//	for ( i = 0; i < size; i++)
//	{
//		if (data[i]==key)
//		{
//			printf("찾은 원소의 인덱스 : %d \n", i);	// 인덱스는 0부터, 순서는 1부터
//			found = 1;	// flag 세우기
//		}
//	}
//
//	if (!found)
//	{
//		printf("찾을 원소가 없습니다 \n");
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
//	printf("30자 이하의 문장을 입력하시오 : ");
//	
//	for ( i = 0; i < MAX; i++)
//	{
//		scanf("%c", &sentence[i]);	// char라 하나씩 받는다
//		
//		if (sentence[i] == '\n')
//		{
//			sentence[i] = '\0';		// 문장이 끝난 걸 확인할려면 NULL 문자를 확인
//			
//			break;
//		}
//	}
//
//	printf("찾을 문자를 입력하시오 : ");
//	scanf("%c", &key);
//
//	for ( i = 0; i < MAX; i++)
//	{
//		if (sentence[i]==key)
//		{
//			printf("%d번째 칸에서 찾았습니다 \n", i + 1);
//		}
//	}
//
//	return 0;
//}


//// 배열을 이용해서 진법 변환 10 --> 2
//int main() {
//	int decimal;
//	int binary[20] = { 0, };
//	int position = 0;
//	
//	printf("2진수로 변환할 10진수를 입력하세요 : ");
//	scanf("%d", &decimal);
//
//	while (1)	// (ture)
//	{
//		binary[position] = decimal % 2;	// 나머지를 배열에 저장
//		decimal = decimal / 2;			// 몫을 저장
//		position++;
//
//		if (decimal == 0)
//		{
//			break;
//		}
//	}	// 2진수로 변환
//	
//	for (int i = position-1; i >= 0; i--)
//	{
//		printf("%d", binary[i]);
//	}	// 배열을 역순으로 출력
//	
//	printf("\n");
//	
//	return 0;
//}

// 함수의 인자로 배열 전달
// 함수의 매개변수로 배열을 선언 할 때는 배열의 크기를 생략한다
// 배열의 크기를 매개변수로 받아옴
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

//// 2차원 배열
//// 행과 열
//int arr_2[3][3] = {
//	{1,2,3},
//	{4,5,6},
//	{7,8,9}
//};
//
//int arr_3[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };	// 위랑 아래랑 똑같다
//int arr_4[3][3] = { 0 };

//int main() {
//	int arr_2[3][3] = { {1,4,6}, {8,5,2}, {7,9,3} };
//	
//	printf("1행 1열 : %d | ", arr_2[0][0]);
//	printf("1행 2열 : %d | ", arr_2[0][1]);
//	printf("1행 3열 : %d | \n", arr_2[0][2]);
//	printf("2행 1열 : %d | ", arr_2[1][0]);
//	printf("2행 2열 : %d | ", arr_2[1][1]);
//	printf("2행 3열 : %d | \n", arr_2[1][2]);
//	printf("3행 1열 : %d | ", arr_2[2][0]);
//	printf("3행 2열 : %d | ", arr_2[2][1]);
//	printf("3행 3열 : %d | \n", arr_2[2][2]);
//	
//	return 0;
//}

//int main() {
//	int arr_2[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i, j;
//	
//	for ( i = 0; i < 3; i++)	// 행
//	{
//		for ( j = 0; j < 3; j++)	//열
//		{
//			printf("%d행 %d열 : %d ", i+1, j+1, arr_2[i][j]);
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
//			printf("%d행 %d열 : %d | 주소 : %p\n", i + 1, j + 1, arr_2[i][j], &arr_2[i][j]);
//		}
//	}
//	return 0;
//}

//// 2차원 배열에서 선언할 때 행의 수 비워둘수 있다(단, 열은 안됨)
//int main() {
//	int arr_2[][3] = { {1,4},{8,5,2} };
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 3; j++)
//		{
//			printf("%d행 %d열 : %d \n", i + 1, j + 1, arr_2[i][j]);
//		}
//	}
//	return 0;
//}


//// 2차원 배열에서 선언할 때 행의 수 비워둘수 있다(단, 열은 안됨)
//int main() {
//	int arr_2[][3] = { {1,4},{8,5,2} };
//	
//	printf("배열의 byte 크기 : %d \n", sizeof(arr_2));
//	printf("초기화 되지 않은 arr_2[0][2]의 값 : %d \n", arr_2[0][2]);
//
//	return 0;
//}

// 행과 열의 합을 구해보자
#define ROW 3
#define COL 3
int main() {
	int square[ROW + 1][COL + 1] = { 0 };
	int i, j;
	
	printf("한줄에 3개의 정수를 3번 입력하세요 \n");

	for ( i = 0; i < ROW; i++)	// 입력
	{
		for ( j = 0; j < COL; j++)
		{
			scanf("%d", &square[i][j]);
		}
	}

	for ( i = 0; i < ROW; i++)	// 계산식
	{
		for ( j = 0; j < COL; j++)
		{
			square[i][COL] += square[i][j];	// 누적 기본 계산식
			if (i < ROW)
			{
				square[ROW][j] += square[i][j];	// 누적 기본 계산식
			}
			// square[ROW][COL] += (square[i][COL] + square[ROW][j]);
			square[ROW][COL] += square[i][j];
		}
	}

	
	for ( i = 0; i < ROW + 1; i++)	// 출력
	{
		for ( j = 0; j < COL + 1; j++)
		{
			printf("%5d", square[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
