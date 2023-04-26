#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if문
//int main() {
//	int num = 0;		// 변수를 선언 및 초기화, 지역변수
//
//	printf("숫자를 입력하세요 ");
//	scanf("%d", &num);
//
//	if (num<5)
//	{
//		printf("입력하신 숫자는 5보다 작습니다 \n");
//	}
//
//	if (num==5)
//	{
//		printf("입력하신 숫자는 5입니다 \n");
//	}
//
//	if (num>5)
//	{
//		printf("입력하신 숫자는 5보다 큽니다 \n");
//	}					// break 문이 없기 때문에 절차적으로 한번씩 진행
//
//	return 0;
//}

//int main() {
//	int num = 0;		// 변수를 선언 및 초기화, 지역변수
//
//	printf("숫자를 입력하세요 ");
//	scanf("%d", &num);
//
//	if (num < 5)
//	{
//		printf("입력하신 숫자는 5보다 작습니다 \n");
//	}
//	
//	else 
//	{
//		if (num == 5)
//		{
//			printf("입력하신 숫자는 5입니다 \n");
//		}
//		else
//		{
//			if (num > 5)
//			{
//				printf("입력하신 숫자는 5보다 큽니다 \n");
//			}
//		}
//	}					// 절차적으로 진행하지만, 참이면 아래 과정 생략
//	return 0;
//}

//// if else if  else
//int main() {
//	int num = 0;
//
//	printf("숫자를 입력하시오 \n");
//	scanf("%d", &num);
//	
//	if (num<5)
//	{
//		printf("입력한 숫자는 5보다 작습니다");
//	}
//
//	else if (num == 5)
//	{
//		printf("입력한 숫자는 5입니다");
//	}
//
//	else
//	{
//		printf("입력하신 숫자는 5보다 큽니다");
//	}
//
//	return 0;
//}

//// 연습일세~~ 중첩 if 문 // if문은 두단계까지만 떨어지게끔 쓰라
//int main() {
//	int pm;
//	printf("미세먼지 농도를 입력하시오 : ");
//	scanf("%d", &pm);
//
//	if (pm > 0)
//	{
//		if (pm <= 30)
//		{
//			printf("미세먼지 농도가 좋으므로 마스크 쓰지 마라");
//		}
//		else if (pm > 30 && pm <= 80)
//		{
//			if (pm <= 80)
//			{
//				printf("미세먼지 농도가 보통이므로 마스크 쓰라");
//			}
//			else (pm <= 130)
//			{
//				printf("미세먼지 농도가 나쁨이므로 나가지 마라");
//			}
//		}
//	}
//}

//// switch case 문
//// 형식
//switch (정수식)		// 값이 정수여야 함
//{
//case 정수값1:
//	문장1;
//	break;
//case 정수값2:
//	문장2;
//	break;
//	.
//	.
//	.
//default:			// 어떤 case 에도 해당하지 않을경우
//	break;			// break 생략 가능
//}

//int main() {
//	int num;
//
//	printf("미세먼지 농도 선택 \n");
//	printf("1 : 좋음\n");
//	printf("2 : 보통\n");
//	printf("3 : 나쁨\n");
//	printf("4 : 매우나쁨\n");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("미세먼지 농도가 좋다 마스크 쓰지마라 \n");
//		break;
//
//	case 2:
//		printf("미세먼지 농도가 보통이다 마스크 쓰라 \n");
//		break;
//
//	case 3:
//		printf("미세먼지 농도가 나쁘다 고급마스크 쓰라 \n");
//		break;
//
//	case 4:
//		printf("미세먼지 농도가 매우 나쁘다 방독면 쓰라 \n");
//		break;
//
//	default:	// 예외처리
//		printf("번호 잘보고 넣어라 \n");
//		break;
//	}				// case 정수값에 문자를 입력할 수도 있다
//}

//// 반복문 (while)
//while (조건식)	// loop statement 조건식이 참이면 계속 돌아가고, 거짓이면 다음코드
//{
//	반복할 코드;
//	변화식;
//}

//int main() {
//	int weight = 80;
//	int count = 0;
//	
//	while (weight > 50) // 조건문 설정에 주의 (무한루프)
//	{
//		printf("매일 빡시게 운동해서 1kg 뺀다 \n");
//
//		weight--;
//		count++;
//	}
//	printf("축하합니다. 운동 안해도 됩니다 \n");
//	printf("%d 일 운동했습니다 \n", count);
//	return 0;
//}

//// do while
//do
//{
//	반복할 코드;	// 조건식에 관계없이 무조건 한번 실행
//	변화식;
//} while (조건식);

//int main() {
//	int weight = 80;
//	int count = 0;
//	int select;
//
//	do
//	{
//		printf("빡시게 운동해서 1kg 뺀다 \n");
//		
//		weight--;
//		count++;
//		
//		printf("운동을 더 할끄야? \n");
//		printf("1 : Yes,    2 : NO (숫자를 입력하시오) \n");
//		scanf("%d", &select);
//
//		if (select == 2) break;	// do while 반복문을 빠져나간다
//	} while (weight > 50);
//	printf("축하합니다 운동 안해도 됨 \n");
//	printf("%d 일 운동했네 \n", count);
//	return 0;
//}

//// for 문
//for (초기화; 조건식; 증감식)
//{
//	반복할 코드;
//}

//int main() {
//	int weight = 80;
//	int count = 0;
//
//	for (weight = 80; weight > 50; weight--)
//	{
//		printf("빡시게 운동해서 1kg 뺐다 \n");
//		count++;
//	}
//	printf("축하합니다 운동 안해도 됨 \n");
//	printf("%d 일 운동했네 \n", count);
//	return 0;
//}

//// for 무한루프
//for (size_t i = 0; i < length; i++)
//{
//	printf("무한루프 \n");
//}
//while (1)
//{
//	printf("무한루프 \n");
//}

//int main() {
//	int sum = 0;
//	for (unsigned i = 0; i < 100 && sum < 2000; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//}

//int main() {
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		printf("외부 시작 %d\n", i);
//		for ( j = 0; j < 3; j++)
//		{
//			printf("내부 수행 %d\n", j);
//		}
//		printf("외부   끝 %d \n\n", i);
//	}
//	return 0;
//}

//// 제어변수 여러개 가능
//for (i = 0, j = 0; i < 100 && j > 0; i++, j++);
//
//// 초기식, 조건식, 증감식, 반복 문장의 일부를 생략 가능
//for (; i<10; i++)
//for (i = 0; ; i++)
//for (i = 0; i < 10; )
//for (i = 0; i < 10)
//{
//	;
//}
//for (i = 0; i < 10; printf("%d\n", i++)){}

//int main() {
//	int i, j;
//	for ( i = 0; i < 5; i++)
//	{
//		for ( j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for ( i = 4; i > 0; i--)
//	{
//		for ( j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//// 구구단
//int main() {
//	int n;
//	int i = 1;
//
//	printf("출력 하고싶은 단수는? : \n");
//	scanf("%d", &n);
//
//	while (i <= 9)
//	{
//		printf("%d * %d = %d \n", n, i, n * i);
//		i++;
//	}
//	return 0;
//}

// 팩토리얼 (오버플로우)
int main() {
	long fac = 1;
	int i, n;
	printf("정수 입력 : \n");
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		fac = fac* i;
	}
	printf("%d! 은 %d 입니다 \n", n, fac);
	return 0;
}