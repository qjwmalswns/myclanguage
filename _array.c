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

int main() {
	//int arr[4] = {0, };	// = {0}
	//int arr[4] = { 3, 5, 7, 9, 11 };	// 배열의 크기 보다 변수를 할당하면 에러남
	//int arr[] = { 3, 5, 7, 9 };			// 배열의 크기를 지정하지 않으면 초기화 요소 개수를 자동 인식
	int arr[4], i;
	for (i = 0; i < 4; i++) {
		arr[i] = i+1;
	}

	for (i = 0; i < 4; i++)
	{
		printf("arr배열의 인덱스 %d번 요소값 : %d \n", i, arr[i]);
	}
	return 0;
}