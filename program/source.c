#include <stdio.h>

void main ()
{
#pragma region 산술 연산자

     // 1. = 변수 + 변수
	// 2. 변수= 변수 - 리터럴 상수
	// 3. 변수 = 변수 + 심블릭 상수
	// 4. 
	
#pragma endregion

#pragma region 비트

	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의 조합으로
	// 논니 계산을 수행하는 단계입니다.


#pragma region 10진수를 2진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.
	
	// 23 -> 10111  계산한 다음에 밑에서 위로 
#pragma region 2진수를 10진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다

	// 각각의 비트에 1이 있다면 1과 1의 제곱의 위치를 계산한
	// 다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.

#pragma endregion


#pragma endregion



#pragma endregion

#pragma region 비트 연산자

	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.

#pragma region and 연산자
	// 두 개의 피연산자가 모두 1이면 1을 변환하는 연산자입니다.

	//int storage1 = 10;
	//int storage2 = 6;


	//printf("storage1 & storage2 = %d\n", storage1& storage2);



#pragma endregion

#pragma region 

#pragma endregion or 연산자
	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 변환하는 연산자 입니다.

	//int storage3 = 8; // 0000 1000
	//int storage4 = 12; // 0000 1100

	//printf("storage3 &  storage4 = %d\n", storage3 & storage4);

#pragma region xor 연산자
	// 두 개의 피연산자가 서로 같으면 0을 변환하고, 서로 다르면 
	// 1을 변환하는 연산자입니다.

	//int storage5 = 6;
	//int storage6 = 15;

	//printf("storage5 ^ storage6 = %d\n", storage5 ^ storage6);
#pragma endregion

#pragma region not 연산자
	// 하나의 비트를 반전시키는 연산자입니다.

	//int storage7 = 13;

	//printf("~storage7: %d\n", storage7);

	// 첫번째 비트는 부호를 나타내며, 첫번째 비트에 
	// 1이 있다면 값은 음수입니다.

#pragma endregion


#pragma endregion


}