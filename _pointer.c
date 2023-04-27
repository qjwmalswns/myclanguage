#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int* pi;		// int 포인터 선언
//	double* pd;		// double 포인터 선언
//	char* pc;		// char 포인터 선언
//	
//	printf("int형의 포인터 크기 : %d \n", sizeof(pi));
//	printf("double형의 포인터 크기 : %d \n", sizeof(pd));
//	printf("char형의 포인터 크기 : %d \n", sizeof(pc));
//
//	printf("int *의 포인터 크기 : %d \n", sizeof(int *));
//	printf("double *의 포인터 크기 : %d \n", sizeof(double *));
//	printf("char *의 포인터 크기 : %d \n", sizeof(char *));
//
//	return 0;
//}

// 포인터의 초기화
// 포인터에 직접 절대 절대 주소를 대입해서는 안됨
//int *ptr = (int *)0x123456;	// 메모리 주소를 직접 사용하면 문제 발생(심각한)
//int *ptr = 0;	// 어떤 변수의 주소로 초기화할지 모르면 0
//int *ptr = NULL;	//NULL 값으로 초기화 (권장)

/* & 연산자 */
//int main() {
//	int a;
//	a = 2;
//	printf("%p \n", &a);
//	return 0;
//}

//int main() {
//	int *p;	// 포인터 선언
//	int a;	// 변수 선언
//	p = &a;	// 포인터에 변수의 주소값으로 초기화
//
//	printf("포인터변수 P에 들어있는 값 : %p\n", p);
//	printf("int변수 a 가 저장된 주소 값 : %p\n", &a);
//
//	return 0;
//}

// * 연산자
//int main() {
//	int *p;
//	int a;
//	p = &a;
//	a = 2;
//	
//	printf("a의 값 : %d \n", a);
//	printf("*p의 값 : %d \n", *p);
//	
//	return 0;
//}

//int main() {
//	int *p;
//	int a;
//	p = &a;
//	*p = 3;
//
//	printf("a의 값 : %d \n", a);
//	printf("*p의 값 : %d \n", *p);
//	
//	return 0;
//}

//int main() {	// 포인터 도 변수다
//	int a;		
//	int b;
//	int *ptr;	// 포인터 변수 선언
//	ptr = &a;
//	*ptr = 2;
//	ptr = &b;
//	*ptr = 3;
//
//	printf("a의 값 : %d\n", a);
//	printf("b의 값 : %d\n", b);
//
//	return 0;
//}

// const 데이터형 *변수 : 읽기 전용 포인터
// - 포인터가 가리키는 변수의 값을 변경할 수 없음
// - 포인터 자신의 값(저장된 주소)은 변경 가능(포인터가 다른 변수를 가리키는 것 가능)
// - 포인터 선언 시 NULL로 초기화하고 원하는 시점에 특정변수의 주소를 저장해서 사용
//int main() {
//	int a;
//	int b;
//	const int *ptr;
//	ptr = &a;
//
//	ptr = &b;
//
//	//*ptr = 3;	// 불가
//}

// 데이터형 *const 변수 : 특정 변수 전용 포인터
// - 포인터 자신의 값(저장된 주소)을 변경 불가능
// - 다른 변수 가리킬수 없음
// - 포인터가 가리키는 변수의 값은 변경 가능
// - 포인터 선언시 반드시 참조하려는 값으로 초기화 해야 함
//int maini() {
//	int a;
//	int b;
//	int *const ptr = &a;
//	ptr = &b;	// 불가
//	*ptr = 3;	// 가능
//	return 0;
//}

//// 포인터 덧셈
//int main() {
//	int a;
//	int *pa;
//	pa = &a;
//	printf("pa의 값 : %p\n", pa);
//	printf("(pa+1)의 값 : %p \n", pa + 1);	// 4byte 더해짐
//	return 0;
//}

// 포인터 덧셈
//int main() {
//	int a;
//	char b;
//	double c;
//	int *pa = &a;
//	char *pb = &b;
//	double *pc = &c;
//
//	printf("pa의 값 : %p\n", pa);
//	printf("(pa+1)의 값 : %p \n", pa + 1);	// 4byte 더해짐
//	printf("pb의 값 : %p\n", pb);
//	printf("(pb+1)의 값 : %p \n", pb + 1);
//	printf("pc의 값 : %p\n", pc);
//	printf("(pc+1)의 값 : %p \n", pc + 1);
//	return 0;
//}

// 포인터 끼리의 덧셈 ==> 불가 !!
//int main() {
//	int a;
//	int *pa = &a;
//	int b;
//	int *pb = &b;
//
//	int *pc = pa + pb;	// 불가
//}

// 포인터의 대입
//int main() {
//	int a;
//	int *pa = &a;
//	int *pb;
//	*pa = 3;
//	pb = pa;	// a의 주소를 가리키고 있는 pa의 주소값을 pb에 대입
//
//	printf("pa가 가리키고 있는 것 : %d\n", *pa);
//	printf("pb가 가리키고 있는 것 : %d\n", *pb);
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("arr[%d]의 주소값 : %p \n", i, &arr[i]);
//	}
//	return 0;
//}

//int main() {	// 주소값에 대한 접근
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr;
//	int i;
//	ptr = &arr[0];
//	for ( i = 0; i < 10; i++)
//	{
//		printf("arr[%d]의 주소값 : %p ", i, &arr[i]);
//		printf("(ptr + %d)의 값 : %p ", i, (ptr+i));
//		if (&arr[i]==(ptr+i))	// 만약 (ptr+i)가 성공적으로 arr[i]을 가리킨다면
//		{
//			printf("=====> 일치\n");
//		}
//		else
//		{
//			printf("=====> 불일치\n");
//		}
//	}
//	return 0;
//}

// *연산자 가지고 배열에 접근
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *parr;
//	parr = &arr[0];
//	
//	printf("arr[3] = %d \n *(parr+3) = %d \n", arr[3], *(parr + 3));
//	
//	return 0;
//}

// 배열 [0] 과 주소값의 관계
// 배열의 이름 arr 과 arr[0] 의 주소값이 동일
// 그러나 !!!!!! 배열의 이름이 첫번째 원소를 가리키는 포인터는 아니다 !!!!!!
//int main() {
//	int arr[3] = { 1, 2, 3 };
//	
//	printf("arr의 정체 : %p \n", arr);
//	printf("arr[0]의 주소값 : %p \n", &arr[0]);
//
//	return 0;
//}
//int main() {
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	int *parr = arr;
//	
//	printf("sizeof(arr) : %d \n", sizeof(arr));
//	printf("sizeof(parr) : %d \n", sizeof(parr));
//	
//	return 0;
//}
// C언어상에서 배열의 이름이 sizeof연산자나 주소값 연산자(&, &arr)와 같이 사용될 때의 경우를 제외하면 배열의 이름이 암묵적으로 첫번째 원소를 가리키는 포인터 타입으로 변환된다

// 1차원 배열 가리키기
// arr[i] --> *(arr+i)
//int main() {
//	int arr[3] = { 1, 2, 3 };
//	int *parr;
//	parr = arr;	// parr = &arr[0]
//	
//	printf("arr[1] : %d \n", arr[1]);
//	printf("parr[1] : %d \n", parr[1]);
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 100, 99, 85, 96, 75, 85, 69, 85, 74, 80 };
//	int *parr = arr;	// &arr[0]
//	int sum = 0;
//	while (parr - arr <= 9)
//	{
//		sum += *parr;	// 포인터가 가리키는 주소에 저장된 값의 누적
//		parr++;			// 포인터 주소값의 증감연산자
//	}
//	printf("내 시험 점수 평균 : %d \n", sum / 10);
//	return 0;
//}

// 포인터의 포인터
//int main() {
//	int a;
//	int *pa;
//	int **ppa;
//	pa = &a;		// pa는 a의 주소
//	ppa = &pa;		// ppa는 포인터 변수 pa의 주소
//	a = 3;
//
//	printf("a의 값 : %d || *pa의 값 : %d || **ppa의 값 : %d \n", a, *pa, **ppa);
//	printf("a의 주소 : %p || pa가 가리키는 주소 : %p || *ppa의 저장 값 : %p \n", &a, pa, *ppa);
//	printf("pa의 주소 : %p || ppa가 가리키는 주소 : %p \n", &pa, ppa);
//
//	return 0;
//}

//int main() {
//	int arr[2][3];
//	printf("arr[0] : %p \n", arr[0]);
//	printf("&arr[0][0] : %p \n", &arr[0][0]);
//	printf("arr[1] : %p \n", arr[1]);
//	printf("&arr[1][0] : %p \n", &arr[1][0]);
//	return 0;
//}

// 2차원 배열의 개수 계산
//int main() {
//	int arr[2][3] = { 
//		{1,2,3},
//		{4,5,6}
//	};
//
//	printf("전체 크기 : %d \n", sizeof(arr));
//	printf("총 열의 갯수 : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	printf("총 행의 갯수 : %d \n", sizeof(arr)/ sizeof(arr[0]));
//}

// 포인터 배열
//int main() {
//	int *arr[3];
//	int a = 1, b = 2, c = 3;
//	arr[0] = &a;
//	arr[1] = &b;
//	arr[2] = &c;
//	printf("a : %d, *arr[0] : %d \n", a, *arr[0]);
//	printf("b : %d, *arr[1] : %d \n", b, *arr[1]);
//	printf("c : %d, *arr[2] : %d \n", c, *arr[2]);
//
//	printf("&a : %p, *arr[0] : %p \n", &a, arr[0]);
//}

//int main() {
//	int arr1[4] = { 1, 2, 3, 4 };
//	int arr2[4] = { 11, 12 ,13, 14 };
//	int arr3[4] = { 21, 22, 23, 24 };
//	int *ptr_arr[3] = { arr1, arr2, arr3 };	// 배열명으로 초기화
//	int i, j;
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("%5d", ptr_arr[i][j]);
//		}
//		printf("\n");
//	}
//}

// 포인터의 ++, -- 연산
//int main() {
//	int arr[3] = { 1, 2, 3 };
//	int *p = &arr[0];
//
//	for ( int i = 0; i < 3; i++)
//	{
//		printf("p = %p | ", p);
//		printf("*p = %d \n", ++*p);
//	}
//}

/// call by value / call by reference
// 값에 의한 전달	 / 주소값에 의한 전달

//int swap_value(int i) {
//	i = 3;
//	return 0;
//}
//
//int main() {
//	int i = 0;
//	printf("호출 이전의 i 값 : %d \n", i);
//	swap_value(i);
//	printf("호출 이후의 i 값 : %d \n", i);
//}

//int swap_value(int *ptr_i) {	// 포인터 선언
//	printf("------- swap_value 함수 안 -------\n");
//	printf("ptr_i의 값 : %p\n", ptr_i);
//	printf("ptr_i가 가리키는 것의 값 : %d\n", *ptr_i);
//	*ptr_i = 3;					// 역참조
//	printf("------- sawp_value 함수 끝 -------\n\n");
//	return 0;
//}
//
//int main() {
//	int i = 0;
//
//	printf("i변수의 주소값 : %p \n\n", & i);
//	printf("호출 이전의 i 값 : %d \n\n", i);
//
//	swap_value(&i);
//
//	printf("호출 이후의 i 값 : %d \n", i);
//}

//int swap_value(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	return 0;
//}
//
//int main() {
//	int i, j;
//	i = 3;
//	j = 5;
//	printf("swap 이전 : i 값 %d, j의 값 %d \n\n", i, j);
//	swap_value(&i, &j);
//	printf("swap 이후 : i 값 %d, j의 값 %d \n\n", i, j);
//}

// 배열을 인자로 받기
int add_number(int *ptr_arr) {
	int i;
	for ( i = 0; i < 3; i++)
	{
		ptr_arr[i] = ptr_arr[i] + 1;	// 배열의 요소에 1을 더함
	}
	return 0;
}

int main() {
	int arr[3];
	int i;
	printf("3개의 정수를 입력 :\n");
	for ( i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("%p %p", arr, &arr[0]);
	add_number(arr);
	printf("배열의 각 원소 : %d, %d, %d \n", arr[0], arr[1], arr[2]);
}