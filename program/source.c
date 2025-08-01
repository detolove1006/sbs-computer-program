#include <stdio.h>


void a1()
{


	printf("a1\n");


}


int a2()
{
	return 100;

	


}
float a3()
{
	return 36.5f;


}

void a4(int x, int y)
{
	printf(" x = %d y = %d\n", x, y);
}


void a5(char grade, int height, float temperature)
{
	printf("등급 : %c\n", grade);
	printf("키 : %d\n", height);
	printf("채온 : %f\n", temperature);
}



 
void main()
{




	
	
	


#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설게된 코드의 집합입니다.

	//a1();



#pragma endregion




#pragma region 반환형

	// 함수가 실행을 끝내고 돌려주는 결과의 자료형입니다.

	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다.

	
	//printf("a2의 값 : %d\n", a2());
	//printf("a3의 값 : %f\n", a3());


#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.


	//a4(10, 20); 
	

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 해제됩니다.

	//하나의 함수에 서로 다흔 자료형의 매개 변수를 함께
	//정의할 수 있으며. 여러 개의 매개 변수를 생성할 수 있습니다.



#pragma endregion
	

	a5('1', 120, 36.5);
	





}
