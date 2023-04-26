#include <stdio.h>

//#include <stdio.h> // 전처리기 표준입출력해더파일

// 한줄 주석 구간
/* 여러줄 주석 구간
*/

/// <summary>
/// hello(함수) 에 대한 요약 가능
/// </summary>
/// <returns></returns>
//int main() { // 슬래쉬 2개 이후 전부 주석, 반드시 main함수가 있어야 된다. 시작의 의미, 중괄호는 함수블록 함수의 시작과 끝
//	printf("Hello World !!!");	//printf는 stdio.h에 있는 표준입출력함수(모니터), ;(세미콜론) 문장의 끝을 알림.
//	return 0;	// 생략 가능, 메인함수의 리턴값은 운영체제에게 보내는 것(0은 프로그램의 정상적인 종료)
//}

//#include 문
//#define 문 //전처리기

//void main(void) {
//	명령문;
//	명령문;
//	.;
//	.;
//} ctrl+C,K

// C프로그램의 기본단위는 함수
// C언어로 구현되는 모든 프로그램은 반드시
// main()을 가지고 있어야 한다
// 반드시 ; 이 있어야 한다.. 문장의 끝을 알림
// C언어는 대.소문자를 구별한다
// C언어는 자유형식을 허용
// ;으로 끝나지 않으면 2줄로 쓰는것도 허용
// 들여쓰기 안해도 됨!! 그러나 해야함(가독성때문)

// 어휘, 원소, 연산자, C시스템
// 구문 : 프로그램 규칙
// 컴파일러 : C 프로그램이 구문에 맞는지 검사
// 컴파일과정 : C 프로그램 -> 토큰으로 분리 -> 목적코드로 변환
// 토큰의종류 : 키워드, 식별자, 상수, 문자열상수, 연산자, 구두점 등

// 식별자 : 사용자가 작성한 고유명사
// 오직 대문자 알파벳, 숫자, 언더스코어(_)
// 첫 단어는 오직 알파벳, 언더바 만 가능
// 대소문자 구별
// 키워드 사용불가
// 함수명, 변수명 이라고도 함 (myVariable)

// 문장 (statement)
// C프로그램을 이루는 기본단위
// 각 문장은 ; 로 끝

// 전처리기
// 컴파일 하기전에 소스파일을 처리하는 컴파일러의 한 부분
// 컴파일러에 포함되어 있다
// 자동으로 실행된다
/*
#include <stdio.h> // 컴파일러에 지정된 폴더에서 찾음
#include "abc.h" // 현재 프로젝트 폴더내에서 찾음
#include "C:\test\abc.h"
#include "..\abc.h" // 현재 폴더의 상위폴더에서 찾음
#define, #line, #prama
*/

//#include <stdio.h>
//#define APPLE 10
//#define NAME "사과" // 우측에서 좌측
//
//int main() {
//	printf("%s %d \n", NAME, APPLE); // s string d decimal \n 개행문자
//		return 0;
//}

//#include <stdio.h>
//#define APPLE 10
//#define NAME "사과" // 우측에서 좌측
//#define OUTPUT printf("%s %d \n", NAME, APPLE)
//
//int main() {
//	OUTPUT; // s string d decimal \n 개행문자
//	return 0;
//}

//#include <stdio.h>
//#define CALC(x,y) ((x)*(y)) // 인자값 두 개를 받아 곱함
//
//int main() {
//	printf("%d \n", CALC(2,4));
//	return 0;
//}

//조건처리
/*
#if 조건1
조건1이 참일 때
#elif 조건2
조건1이 거짓이고 조건2가 참일 때
#else
조건1, 조건2가 거짓일 때
#endif
*/

//#include <stdio.h>
//#define NUM 10
//int main() {
//#if NUM < 10
//	printf("NUM은 10보다 작다\n");
//#elif NUM > 10
//	printf("NUM은 10보다 크다\n");
//#else
//	printf("NUM은 10 이다\n");
//#endif
//	return 0;
//}

//#ifdef 매크로이름
//매크로가 정의되어 있을 때
//#else
//매크로가 정의되어 있지 않을 때
//#endif // 항상 필요
//
//#ifdef 매크로이름
//매크로가 정의되어 있지 않을 때
//#else
//매크로가 정의되어 있을 때
//#endif // 항상 필요

//#include <stdio.h>
//#define NUM 10
//int main() {
//#ifdef NUM // Tab키 누르면 endif 세트로 만들어 줌
//	printf("NUM은 %d 입니다\n", NUM);
//#else
//	printf("NUM은 정의되어 있지 않습니다\n"); // 이미 정의되어 있어서 흐릿하게 만들어 줌
//#endif
//	return 0;
//}


// 내장 매크로들
//#include <stdio.h>
//void fun();
//int main() {
//	printf("컴파일 날짜 : %s \n", __DATE__);
//	printf("컴파일 시간 : %s \n", __TIME__);
//	printf("컴파일 날짜, 요일, 시간 : %s \n", __TIMESTAMP__);
//	printf("라인 번호 : %d \n", __LINE__);
//	fun();
//	printf("현재 소스파일 위치 : %s \n", __FILE__);
//}
//void fun() {
//	printf("현재 함수 : %s \n", __FUNCTION__);
//}

//int main() {
//	int num; // 정수형
//	float x; // 실수형
//	char c;  // 문자형 (사용자 정의형 데이터)
//	num = 123;
//	x = 1.23;
//	c = 'A'; // '문자'는 외따옴표 "문자열"은 쌍따옴표
//	// 서식문자와 출력값의 개수가 같아야 함
//	printf("%d %x \n", num, num);	// 10진수, 16진수
//	printf("%f %e \n", x, x);		// 부동소수점, 지수
//	printf("%c \n", c);				// 문자
//	printf("%x \n", num);			// 소문자
//	printf("%X \n", num);			// 대문자
//	printf("%#x \n", num);			// #소문자
//	printf("%#X \n", num);			// #대문자
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int num = 12345;
//	printf("%d \n", num);
//	printf("%d \n", num*10);
//	printf("%d \n", num*100);
//	printf("%d \n\n", num*1000);
//	
//	printf("%8d \n", num); // 8문자 출력에 맞춤
//	printf("%8d \n", num * 10);
//	printf("%8d \n", num * 100);
//	printf("%8d \n\n", num * 1000);
//
//	printf("%8d \n", num * 100000); // 문자폭 보다 큼
//	printf("%08d \n", num); // 빈칸대신 0으로 채움
//	return 0;
//	
//}

// 정밀도
//#include <stdio.h>
//int main() {
//	float x = 12.34567;
//	printf("%f \n", x); // 폭과 정밀도 지정 않함
//	printf("%.2f \n", x); // 소수점이하 2자리
//	printf("%8.2f \n", x); // 폭과 정밀도 지정
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char name[20]; // 문자로 이루어진 배열, 크기는 20개
//	int age;
//	char gender;
//	printf("이름, 나이, 성별(M/F) 순으로 입력하시오 \n");
//	scanf("%s %d %c", name, &age, &gender); // & 필요(배열은 제외)
//	printf("이름 : %s \n", name);
//	printf("나이 : %d \n", age);
//	printf("성별 : %c \n", gender);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char c;
//	int num;
//	double x;
//	printf("char형의 바이트 크기 : %d \n", sizeof(char)); // sizeof는 바이트 크기를 나타내는 연산자 외워야됨
//	printf("short형의 바이트 크기 : %d \n", sizeof(short));
//	printf("long형의 바이트 크기 : %d \n", sizeof(long));
//	printf("long long형의 바이트 크기 : %d \n", sizeof(long long));
//	printf("float형의 바이트 크기 : %d \n", sizeof(float));
//	printf("double형의 바이트 크기 : %d \n", sizeof(double));
//	printf("long double형의 바이트 크기 : %d \n", sizeof(long double));
//	printf("c의 바이트 크기 : %d \n", sizeof(c));
//	printf("num의 바이트 크기 : %d \n", sizeof(num));
//	printf("x의 바이트 크기 : %d \n", sizeof(x));
//	return 0;
//}

// 변수의 선언과 사용
// 변수를 선언하려면 변수의 데이터형, 이름
// 반드시 영문자, 숫자, 언더스코어(_)
// 첫글자 영문자, 언더스코어, 대소문자 구별, 키워드 불가

////// 코딩 명명법
//// 카멜(Camel)표기법 낙타 등처럼 올라갔다 내려감(첫번째 단어는 소문자, 두번째 단어부터는 대문자)
//int manAge;	//변수명
//int womanAge;
//int kangMinJoon;
//int peopleAge(int man, int woman) { // 함수명
//	return 0;
//}
//
//// 파스칼표기법
//int ManAge;
//int WomanAge;
//
//// 스네이크표기법
//int man_age;
//int woman_age;
//
//// 헝가리안표기법 : 약자를 변수앞에 소문자로 붙여준다. C언어에선 잘 안씀
//String strName;
//char ch1;
//byte bAge;

/// <summary>
/// 변수의 초기화
/// </summary>
/// <returns></returns>
/// 초기화 되지 않은 변수는 쓰레기 값을 가진다
//int main() {
//	int price;			// 변수를 선언, 초기화는 하지 않음
//	price = 100;		// 초기화
//	
//	int a = 0;
//	int b = -5;
//	int c = 0;
//	printf("%d \n", price);
//	return 0;
//}

//int main() {
//
//	int amount = 0;
//	int price = 0;
//	int total_price = 0;
//
//	printf("amount = %d, price = %d \n", amount, price);
//
//	printf("수량?");
//	scanf("%d", &amount);
//
//	price = 2000;
//	
//	total_price = amount * price;
//
//	printf("합계 : %d원 \n", total_price);
//
//	return 0;
//}

// 상수
// 프로그램에서 값이 변경되지 않는 요소
// 리터럴상수 (literral Constant)
// 문자 상수 : 'A', '\xa
// 정수형 상수 : 0x12, 123u
// 실수형 상수 : 3.14, 1.23ㄷe1
// 문자열 상수 "hello", "A"

// 매크로 상수
// #define 로 정의된 상수

// const 상수
// ---- 값을 변경할 수 없는 변수
// ---- const 변수는 반드시 선언 시 초기화 해야 한다 기억

//int main() {
//	int amount = 0, price = 0;
//	const double VAT_RATE = 0.1; // 값 변경 X
//	int total_price = 0;
//	printf("수량? ");
//	scanf("%d", &amount);
//	printf("단가? ");
//	scanf("%d", &price);
//	total_price = amount * price * (1 + VAT_RATE);
//	printf("합계 : %d \n", total_price);
//	return 0;
//
//}