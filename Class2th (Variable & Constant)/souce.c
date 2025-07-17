//#include <stdio.h>

//void main()
{
#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

#pragma region 자료형
	//데이터를 저장하기 위해 데이터의 형태를 정해주는 것 입니다.
	// 자료형은 각각의 자료형마다 크기가 정해져 있으며, 자료형의
	// 크기는 바이트 단위로 이루어져 있고, 자료형에 따라 저장할
	// 수 있는 값의 종류와 범위가 결정됩니다.

#pragma region 서식 지정자

	// 변수의 값을 출력하기 위한 자료형의 정보를 명시적으로
	// 저장해주는 것 입니다.

	// 서식 지정자의 경우 하나의 표준 출력 함수에 여러개의
	//서식을 넣을 수 있으며, 서식 지정자의 순서는 안쪽에서
	//시작 합니다.

	//서식 지정자는 각각의 서식에 따라 원하는 데이터를 출력할
	// 수 있으며, 서식과 변수의 형태가 일치하지 않으면 원하는
	//값이 출력되지 않습니다.



	// char 1 byte 문자
	// int 4 byte 정수
	//float 4 byte 실수
	// double byte 실수

	//변수 = '값';

	//char alphabet = 'A';

	//int integer = 100;

	//float decimal = 36.5f;

	// printf( "%c", 변수명 )
	// char = %c
	// int = %d
	// float  = %f
	// double = %lf

	//printf("alphabet= %c\n", alphabet);
	//printf("integer = %d\n", integer);
	//printf(" decimal = %f\n", decimal);


#pragma endregion 



#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 대소문자를 구분합니다

	// ex) int health = 100;
	// ex) int Health = 20;

	// 2, 변수의 이름으로 예약어를 사용할 수 없습니다.

	//ex) int int;

	//3. 변수의 이름에는 공백이 포함될 수 없습니다.

	//ex) float time deata;

	//4.변수의 이름으로 특수 문자는 "_", "$"만 사용할 수 있습니다.

	//int under_score;
	//int currentRoom$;

	// 5. 변수의 이름은 숫자로 시작할 수 없습니다.

	//int 5error;
	//int error2022;

#pragma endregion




	//int experirnce = 100;

	//experience = 200;

	//printf("experience : %d\n", experience);


	// 변수는 프로그래이 실행되는 동안 값을 바꿀 수 있으며,
	// 원래 저장되어 있는 값은 새로 저장되는 값에 의해 지워집니다.

	// int exp; 가비지 값
	// int 100; 100



#pragma region 상수
	// 프로그램의 실행되는 동안 더 이상 변경 할 수 없는
	// 메모리 공간입니다.

	//const float pi = 3.141592f;

	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를
	// 리터럴 상수하고 하며, 메모리 공간을 가지고 있는
	// 상수를 심볼릭 상수라고 합니다.

	// ex) pi = 6.1243f;

	//printf("pi의 값 : %f\n", pi);

	//상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	// 한번 저장한 값은 더 이상 변경할 수 없습니다.

//#pragma endragion
//}