#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 관계연산자
// 10 < x < 20 <<<<< 이렇게 쓰면 안됨
//int main() {
//	int a = 0, b = 0;
//	printf("두 개의 정수를 입력하시오 \n");
//	scanf("%d %d", &a, &b);
//	printf("%d > %d : %d \n", a, b, a > b);
//	printf("%d < %d : %d \n", a, b, a < b);
//	printf("%d >= %d : %d \n", a, b, a >= b);
//	printf("%d <= %d : %d \n", a, b, a <= b);
//	printf("%d == %d : %d \n", a, b, a == b);
//	printf("%d != %d : %d \n", a, b, a != b); // ! =
//}

//int main() {
//	int month;
//
//	printf("몇 월? \n");
//
//	scanf("%d", &month);
//
//	if (month >= 6 && month <= 8) 
//	{
//		printf("성수기 요금 적용 \n");
//	}
//
//	//if (!(month >= 6 && month <= 8))
//	if (month < 6 || month > 8)
//		printf("비수기 요금 적용 \n");
//	
//	return 0;
//}

//int main() {
//	int n1 = 15; // dec 15 = 00000000 00000000 00000000 00001111 32bits
//	int n2 = 20; // dec 20 = 00000000 00000000 00000000 00010100
//	int result = n1 & n2; // and 비트 연산 00000000 000000000 000000000 00000100 = dec 4
//	printf("n1 = %d \n", n1);
//	printf("n2 = %d \n", n2);
//	printf("result = %d \n", result);
//	return 0;
//}

//int main() {
//	int n1 = 15; // dec 15 = 00000000 00000000 00000000 00001111 32bits
//	int n2 = 20; // dec 20 = 00000000 00000000 00000000 00010100
//	int result = n1 | n2; // and 비트 연산 00000000 000000000 000000000 00011111 = dec 31
//	printf("n1 = %d \n", n1);
//	printf("n2 = %d \n", n2);
//	printf("result = %d \n", result);
//	return 0;
//}

//int main() {
//	int n1 = -1; // 11111111 11111111 11111111 11111111 32bits
//	int n2 = 0;  // 00000000 00000000 00000000 00000000
//	int result1 = ~n1;
//	int result2 = ~n2;
//	printf("~n1 = %d \n", result1);
//	printf("~n2 = %d \n", result2);
//	return 0;
//}

//int main() {
//	int n = 1;			// 00000000 00000000 00000000 00000001
//	int r1 = n << 1;	// 00000000 00000000 00000000 00000010
//	int r2 = n << 2;	// 00000000 00000000 00000000 00000100
//	int r3 = n << 3;	// 00000000 00000000 00000000 00001000
//	int r4 = n << 4;	// 00000000 00000000 00000000 00010000 쉬프트 연산으로 곱셈 연산 가능(더 빠르다)
//
//	printf("결과 1 = %d \n", r1);
//	printf("결과 2 = %d \n", r2);
//	printf("결과 3 = %d \n", r3);
//	printf("결과 4 = %d \n", r4);
//	return 0; 
//}

//int main() {
//	int n = 16;			// 00000000 00000000 00000000 00010000
//	int r1 = n >> 1;	// 00000000 00000000 00000000 00001000
//	int r2 = n >> 2;	// 00000000 00000000 00000000 00000100
//	int r3 = n >> 3;	// 00000000 00000000 00000000 00000010
//	int r4 = n >> 4;	// 00000000 00000000 00000000 00000001 쉬프트 연산으로 나눗셈 연산 가능(더 빠르다)
//
//	printf("결과 1 = %d \n", r1);
//	printf("결과 2 = %d \n", r2);
//	printf("결과 3 = %d \n", r3);
//	printf("결과 4 = %d \n", r4);
//	return 0;
//}

//// 오버플로우 (Overflow) : 변수가 표현할 수 있는 최대 범위를 넘어가는 오버플로우 현상이 생김
//int main() {
//	char a;
//	a = 127;	// 01111111
//	printf("%d \n", a);
//	a = 128;	// 10000000
//	printf("%d \n", a); // char 자료형이 -128 ~ 127까지의 범위로 127이상의 값이 들어가 오버플로우
//	return 0;
//}

//// 언더플로우 (Underflow) : 변수가 표현할 수 있는 최소 범위를 넘어가는 언더플로우 현상이 생김
//int main() {
//	char a;
//	a = -128;	// 10000000
//	printf("%d \n", a);
//	a = -129;	// 01111111
//	printf("%d \n", a); // char 자료형이 -128 ~ 127까지의 범위로 -128이하의 값이 들어가 언더플로우
//	return 0;
//}

//// 오버플로우 (Overflow) : 변수가 표현할 수 있는 최대 범위를 넘어가는 오버플로우 현상이 생김
//int main() {
//	unsigned char a;
//	a = 255;	// 11111111
//	printf("%d \n", a);
//	a = 256;	// 00000000
//	printf("%d \n", a); // unsigned char 자료형이 0 ~ 255까지의 범위로 255이상의 값이 들어가 오버플로우
//	return 0;
//}

// 비트 마스크
// 비트 논리연산에 이용 특정 비트값을 조작하기 위한 목적
// AND, OR 등의 연산자를 이용 비트를 조작
// 메모리 적게 사용
// 프로그램 더욱 빠르게 동작
// 소스코드가 직관적

//int main() {
//	unsigned short data = 0x5678; // 0101 0110 0111 1000 2byte
//	unsigned short msk1 = 0xf000; // 1111 0000 0000 0000
//	unsigned short msk2 = 0x0f00; // 0000 1111 0000 0000
//	unsigned short msk3 = 0x00f0; // 0000 0000 1111 0000
//	unsigned short msk4 = 0x000f; // 0000 0000 0000 1111 
//	printf("결과 1 = %#.4x \n", data & msk1);
//	printf("결과 2 = %#.4x \n", data & msk2);
//	printf("결과 3 = %#.4x \n", data & msk3);
//	printf("결과 4 = %#.4x \n", data & msk4);
//	return 0;
//}	// 비트열의 특정부분을 뽑아낼 수 있다.

int main() {
	unsigned short data = 0x0000; // 0000 0000 0000 0000 2byte
	unsigned short msk1 = 0xf000; // 1111 0000 0000 0000
	unsigned short msk2 = 0x0f00; // 0000 1111 0000 0000
	unsigned short msk3 = 0x00f0; // 0000 0000 1111 0000
	unsigned short msk4 = 0x000f; // 0000 0000 0000 1111 
	printf("결과 1 = %#.4x \n", data | msk1);
	printf("결과 2 = %#.4x \n", data | msk2);
	printf("결과 3 = %#.4x \n", data | msk3);
	printf("결과 4 = %#.4x \n", data | msk4);
	return 0;
}	// 비트열의 특정부분을 변경시킬 수 있다.

// &연산은 특정비트를 0으로
// |연산은 특정비트를 1로
// ^연산은 특정비트를 반전