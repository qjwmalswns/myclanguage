// Function (함수)
// 함수란 ? : 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 프로그램 코드의 집합
// C언어에서 크게 표준함수, 사용자정의함수
// 함수사용 이우
// 반복적인 프로그램 --> 특정한 작업 반복 피하기 위함
// 함수로 작성 --> 모듈화 --> 가독성 --> 유지보수 좋아짐
// 일반적으로 하나의 기능을 하나의 함수로 작성

//int sum(int x, y) // int는 x, y 매개변수 목록을 받아서 명령 수행 후 int 값으로 결과를 출력
//{
//	/* 함수 본체 */
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//int printf_hello()	// 함수 선언은 main 함수보다 위에 있어야 함
//{
//	printf("Hello World !\n");
//
//	return 0;
//}
//
//int main() {
//	printf("함수를 불러봅시다 \n");
//	printf_hello();
//
//	printf("함수를 또 불러봅니다 \n");
//	printf_hello();
//
//	return 0;
//}

//int print_hello();	// 함수의 원형 선언
//
//int main() {
//	printf("함수를 불러봅시다 \n");
//	printf_hello();
//
//	printf("함수를 또 불러봅니다 \n");
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

// 함수의 이름 명명 --. 명확하게 어떤일을 하는지
//void f1(void) {
//
//}
//
//void play_video() {
//
//}
// 식별자 생성 규칙
// 일관된 명명 규칙
// 같은이름 함수를 존재 하게 하지 말 것

//void play_video(void) // 매개변수가 없는 함수, 가독성 때문에 void
//{ 
//	printf("반환없음");
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
//	printf("a와 b의 합은 : %d \n", sum);			
//	printf("a와 10의 합은 : %d", add(a, 10));	// 함수 직접호출
//
//	return 0;
//}
// 함수의 작성은 함수의 리턴값의 자료형(int), 함수의 인자(int x, int y), 함수의 내용(return포함) 필요
// 함수의 인자는 반드시 갯수와 자료형에 맞게 넣어서 호출
// 함수 이름 중복 금지
// 함수명 --> 식별자 규칙 동일
// 함수의 리턴값이 없는 void 형 함수가 아니면 반드시 return이 존재 해야 함

//// 매크로 상수를 이용한 함수 선언
//#define add(x, y) (x + y)
//
//int main() {
//	int a, b, sum;
//
//	a = 3;
//	b = 5;
//	sum = add(a, b);	// add(3 + 5)
//
//	printf("a와 b의 합은 : %d \n", sum);
//	printf("a와 10의 합은 : %d", add(a, 10));	// 함수 직접호출
//
//	return 0;
//}

// 변수의 유효범위
// 지역변수(Local variable)
// 전역변수(Global variable)
// 정적변수(Static variable)
// 레지스터변수(Resister variable)

// 지역변수
// "블록" 내에서 선언된 변수
// 변수가 선언된 "블록" 내에서만 유효, 블록이 종료되면 메모리에서 사라짐
// 지역변수는 메모리상의 스택(Stack) 영역에 저장, 초기화하지 않으면 쓰레기값으로 초기화 됨
// 함수의 매개변수도 함수내에서 정의되는 지역변수로 취급됨
//void local(void);	// 함수의 원형 선언
//
//int main() {
//	int i = 5;
//	int var = 10;
//
//	printf("main함수 내의 지역변수 var의 값은 : %d \n", var);
//
//	if (i < 10)
//	{
//		local();
//
//		int var = 30;
//
//		printf("if문 내의 지역분수 var의 값 : %d \n", var);
//	}
//	printf("현재 지역변수 var의 값 : %d \n", var);
//
//	return 0;
//}
//
//void local(void) {
//	int var = 20;
//
//	printf("Local함수내의 지역변수 var의 값 : %d \n", var);
//}

// 전역변수
// 함수 외부에서 선언된 변수
// 프로그램의 어디에서나 접근 가능, 프로그램이 종료 되어야 메모리에서 사라짐
// 전역변수는 메모리상에서 데이터(Data)영역에 저장
// 직접 초기화 하지 않아도 0으로 자동으로 초기화 된다
//void local(void);
//
//int var;		// 전역변수, '_' 같은 표시를 붙여서 전역변수 표시
//int main() {
//	printf("전역변수 var의 초기값 : %d \n", var);
//	
//	int i = 5;
//	int var = 10;	// 지역변수 선언
//	
//	printf("main함수 내의 지역변수 var의 값 : %d \n", var);
//
//	if (i<10)
//	{
//		local();
//		printf("현재 변수 var의 값 : %d \n", var);
//	}
//	printf("더 이상 main함수에는 전역변수 var에 접근 불가 \n");	// 똑같은 이름으로 지역변수 선언했기 때문
//
//	return 0;
//}
//
//void local(void)
//{
//	var = 20;
//	printf("local 함수 내의 전역 변수 var의 값 : %d\n", var);
//}


// 정적변수 (Static)
// Static으로 정의된 변수
// 지역변수와 전역변수의 특징을 모두 가지고 있다
// 함수내에서 선언된 정적변수는 전역변수처럼 단 한번만 초기화되며(최초 실행시 딱, 한번) / (전역변수 특징)
// 프로그램이 종료되어야 메모리에서 삭제된다 / (전역변수 특징)
// 정적변수는 지역변수처럼 해당 함수내에서만 접근 가능 / (지역변수 특징)

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
//	int count = 1;	// 지역변수 선언 및 초기화
//	printf("local함수가 %d번째 호출되었음 \n", count);
//	count++;
//}
//
//void staticVar(void)
//{
//	static int static_count = 1;	// 정적변수 선언 및 초기화
//	printf("StaticVar함수가 %d번째 호출되었음 \n\n", static_count);
//	static_count++;
//}

// 레지스터변수
// 레지스터변수는 지역변수 선언할 때 resister 키워드를 붙여서 선언한다
// CPU의 레지스터 메모리에 저장


//// 메모리 동적할당
//#include <stdlib.h>	// malloc, free 함수가 선언된 헤더 파일
//int main() {
//	int num1 = 20;	// int형 변수 선언
//	int *numPtr1;	// int형 포인터 선언, 포인터변수가 가질 수 있는 값은 주소값
//
//	numPtr1 = &num1;// num1의 메모리주소를 구해서 numPtr1 변수에 대입
//	int *numPtr2;	// int형 포인터 선언
//
//	numPtr2 = malloc(sizeof(int));	// int형 크키(4바이트) 만큼 동적메모리 할당
//
//	printf("%p\n", numPtr1);	// 변수 numPtr1의 주소 출력
//	// 컴퓨터 실행할때마다 달라짐
//	printf("%p\n", numPtr2);	// 새로 할당된 메모리 주소 출력
//	
//	free(numPtr2);	// 동적메모리 해제
//	return 0;
//}

//int main() {
//	int *numPtr;	// int 포인터 선언
//	numPtr = malloc(sizeof(int));	// 4바이트 크기의 동적 메모리 할당
//
//	*numPtr = 10;	// 포인터를 역참조한 다음에 값 할당
//	printf("%d\n", *numPtr);	// 포인터를 역참조하여 메모리에 저장된 값을 출력
//	free(numPtr);	// 동적 메모리 해제
//	return 0;
//}

//// memset(포인터, 설정할 값, 크기)
//#include <string.h>
//int main() {
//	long long *numPtr = malloc(sizeof(long long));	// 8바이트 할당
//	memset(numPtr, 0x27, 8);	// numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정
//	printf("0x%llx \n", *numPtr);
//	free(numPtr);
//	return 0;
//}

// 재귀함수(재귀 호출)
// 함수가 함수안에서 자기 자신을 다시 자신의 함수로 재진입
//void P(int c)
//{
//	if (c == 0)	// 재귀함수 탈출 조건
//		return;
//
//	printf("재귀함수 입니다. %d\n", c);
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
//	printf("정수 입력 : ");
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
