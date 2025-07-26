#include <stdio.h>



void main()
{

#pragma region 주소 연산자
	// 변수의 주소 값을 변환하는 연산자 입니다.

	//int data = 10;
	//
	//printf("data의 값: %p", & data);


	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리 공간은 1 byte의 크기로 나누어 표현합니다.
#pragma endregion

#pragma region scanf_s 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에
	// 맞추어 입력해주는 함수입니다.

	//int a1 = 0;
	//
	//printf("입력하세요\n");
	//
	//	//표준 입력 함수는 수행할떄 까지 다음 작업으로 넘어갈 수 없습니다. 
	//
	//	//버퍼는 데이터가 이동할때 임시로 저장되는 공간이며,
	//  // 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.
	//
	// 
	//
	//scanf_s("%d", &a1);
	//printf("a1 변수의 값 : %d\n", a1);

	//표준 입력 함수로 데이터를 입력하게 되면 버퍼
	//데이터를 보관하였다가 입력하는 순간 버퍼만의
	//내용을 프로그램에 전송합니다.
#pragma endregion


#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

 
	//int a1 = 10;
	
	//int * pointer = &a1;
	
	//포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
	// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다.
	
	
	//printf("a1 값은 : %d\n", a1);
	//printf("pointer 값은 : %p\n", pointer);
	//printf("pointer 변수의 주소: %p\n\n", &a1);
   	//
	//
	//
	//
	//*pointer = 99;
	//
	//printf("pointer 값은 : %d\n", a1);
	//printf("pointer 가리키는 값은 : %d\n", *pointer);
	//
	//
	//
	//
	//
	//int variable = 20;
	//pointer = &variable;
	//
	//*pointer = 60;
	//
	//printf("variable 변수 값은 : %d\n", variable);
	//printf("pointer 변수 값은 : %p\n", *pointer);
	//printf("pointer 변수가 가리키는 값 : %d\n\n", *pointer);
	//
	//// 포인터 변수도 자신의 메모리 공간을 가지고 있으면.
	//// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의
	//// 시작 주소를 가리키게 됩니다.
	//
	//printf("int 자료형의 크기 : %u\n", sizeof(int));
	//printf("pointer 변수의 크기 : %u\n", sizeof(pointer));

		// 포인터 변수의 크기는 중앙 처리 장치가 한 변에 처리할 수 
		// 있는 크기로 정해지며. 한번에 처리 할수 있는 크기는
		// 운영체제에 따라 크기가 결정됩니다.



#pragma endregion



	

	



}
