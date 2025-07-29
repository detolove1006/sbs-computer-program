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


	
#pragma region 범용 컴퓨터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.


	

	//char a1 = 'A';
	//int a2 = 10;
	//float a3 = 3.14f;
	//
	//void* reference = NULL;
	//
	//
    //reference = &a1;
	//
	//// 범용 포인터는 메모리 주소에 접근해서 값을
	//// 변경할 수 없습니다.
	//
	//*(char *)reference = 'B';
	//
	//
    //printf("a1 변수의 값은 : %c\n",a1);
	//printf(" reference 변수의 값은 : %p\n\n", reference);
	//
	//reference = &a2;
	//
	//*(int *)reference = 50;
	//
	//
	//printf("a2 변수의 값은 : %d\n\n", a2);
	//printf(" reference 변수의 값은 : %p\n\n", reference);
	//
    // 
	//reference = &a3;
	//
	//*(float *)reference = 45.5f;
	//
	//printf("a3 변수의 값은 : %f\n\n", a3);
	//printf(" reference 변수의 값은 : %p\n\n", reference);
	//
	//// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가
	//// 가리키는 변수의 자료형으로 형 변환해주어야 합니다.
	

	

#pragma endregion



#pragma region 상수 지시 포인터
// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록 
// 지정되어 있는 포인터입니다.




//int a2 = 10;
//int a3 = 20;
//
//
//const int* a1 = &a2;
//
//    printf("a2의 주소 값 : %p\n", &a2);
//	printf("a1의 주소 값 : %p\n", &a1);
//
//
//
//
//a1 = &a3;
//
//   printf("a3의 주소 값 : %p\n", &a3);
//   printf("a1의 주소 값 : %p\n", &a1);(다시 고치기 전 영상 보기)








#pragma endregion

#pragma region 포인터 상수
 // 포인터 변수가 가리키고 있는 주소 값을 
 // 변경할 수 없는 포인터 입니다.

int* const a1 = NULL;

int a2 = 99;

int a3 = 555;

a1 = &a2

printf("a1 변수의 값은?: %d\n ", a1);(숙제)

//pull request


#pragma endregion




}
