#include <stdio.h>


void main()
{

#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	//두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	// 1 이라는 값으로 나타내는 연산자 입니다.

	// 관계 연산자는 조건이 맞을 때 1이라는 값으로 변환되며.
	// 조건이 틀릴 때 0이라는 값으로 반환됩니다.

	//int a1 = 10;
	//int a2 = 20;
   //
	//printf(" a1 < a2: %d\n", a1 < a2);
	//printf(" a1 > a2: %d\n", a1 > a2);
	//printf("a1 <= a2: %d\n", a1 <= a2);
	//printf("a1 >= a2: %d\n", a1 >= a2);
	//printf("a1 != a2: %d\n", a1 != a2);
	//printf("a1 == a2: %d\n", a1 == a2);
   




#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	// 명령문입니다.

	//    int health = 0;
	//	if (health >= 0;)
	//{
	//	
	//		printf("destroy\n");
	//}



	// if문은 1일 때 실행되며, 0일때 실행되지 않습니다.
#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이
	// 맞다면 실행되는 명령문 입니다.

	

	//int health = 99;
	//
	//if (health <= 100)
	//{
	//	printf("health\n");
	//}
	//
	//else if (health < 100)
	//{
	//	printf("health\n");
	//}

	// else if 문은 여러번 정의할 수 있으면. if문이
	// 존재할 때 사용할 수 있습니다.



#pragma endregion

#pragma region else문
    // if 문과 else if 문이 조건이 다 틀리면
	//실행되는 명령문입니다.


	//int a1 = 0;
	//
	//if (a1 > 0)
	//{
	//	printf("변수 양수\n");
	//}
	//
	//else if (a1 < 0)
	//{
	//	printf("변수 음수\n");
	//}
	//
	//else
	//{
	//	printf("양수도 음수도 아님\n");
	//}
	//




	//if문에 연결된 모든 조건이 맞을 때
	//가장 위에 있느느 조건문만 실행됩니다.



#pragma endregion

#pragma region swich문
        // 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.


//char grade = 'B';

 // swich문은 해당 조건이 완료되었을 때, break문이 없으면
 // 나머지 밑에 있는 case 문까지 계속 실행시키다가 종료합니다.

//swich(grade)
{
	//case 'A': printf("100점 ~ 90점 입니다. \n");
	//	break;
	//case 'B': printf("89점 ~ 80점 입니다. \n");
	//	break;
	//case 'C': printf("79점 ~ 70점 입니다. \n");
	//	break;
	//case 'D': printf("69점 ~ 50점 입니다. \n");
	//	break;
	//case 'E': printf("49점 ~ 0점 입니다. \n");
	//	break;
	//
	//
	//default: printf("ex\n");
}	//


        // swixch문의 경우 조건에 해당하는 값에 따라 조건의 위치가 이동합니다
#pragma endregion


#pragma region 논리 연산자





#pragma region and 연산자

//int score = 70;
//char rank = 'C';
//
//if (score >= 69 && rank == 'C')
//{
//	printf("good\n");
//}





#pragma endregion

#pragma region or 연산자
// 두개의 조건 중에서 하나라도 조건이 성립될 때 실행된은 연산자입니다.

//nt age = 10;
//nt weight = 50;
//
//f (age >= 10 || weight > 50)
//
//	printf("나이는 10세이고, 몸무게는 50kg 이하입니다.\n");
//



#pragma endregion

#pragma region not 연산자
// 하나의 조건을 반전시키는 연산자입니다.

//int power = 0;
//if (!power)
//{
//	printf("off");
//}


#pragma endregion

#pragma region 사분면

//int x = 0;
//int y = 0;
//
//if (x > 0 && y > 0)
//{
//	printf("1사분면\n");
//
//}
//else if (x < 0 && y > 0)
//{
//	printf("2사분면\n");
//
//}
//else if (x < 0 && y < 0)
//{
//	printf("3사분면\n");
//
//}
//else if (x > 0 && y < 0)
//{
//	printf("4사분면\n");
//
//}
//else if (x != 0 && y == 0)
//
//{
//	printf("x절편\n");
//
//
//}
//else if (x == 0 && y != 0)
//{
//	printf("y절편\n");
//}
//else
//{
//	printf("원점\n");
//}

#pragma endregion


#pragma endregion
//pull request

#pragma endregion


}
