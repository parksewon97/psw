

#include <iostream>

using namespace std;

int main()
{
    /*
    int tA = 3;
    int tB = 2;
    int tResult = 0;

    //더하기
    tResult = tA + tB;

    cout << tResult << endl;      //endl 개행. cpp문법


    //빼기
    tResult = tA - tB;

    cout << tResult << endl;


    //곱하기
    tResult = tA * tB;
    cout << tResult << endl;



    //나누기
    tResult = tA / tB;
    cout << tResult << endl;
    */












    //case 0 해당 정수의 나눗셈의 결과까지 고려하려
    // 해당 변수들을 모두 '실수 real number '로 디자인(계산)하자.
    // 
    //변수이름은 tA,타입은 정수, 초기값은 3
    //변수이름은 tB,타입은 정수, 초기값은 2
    //변수이름은 tResult, 타입은 정수, 초기값은 0
    /*
    float tA = 3.0f;//상수    f:리터럴 상수문자
    float tB = 2.0f;
    float tResult = 0.0f;

    //더하기
    tResult = tA + tB;
    
    cout << tResult << endl;      //endl 개행. cpp문법


    //빼기
    tResult = tA - tB;
    
    cout << tResult << endl;


    //곱하기
    tResult = tA * tB;
    cout << tResult << endl;



    //나누기
    tResult = tA / tB;
    cout << tResult << endl;
    */



    //case1 '형변환 type cast'을 하자
    int tA = 3;
    int tB = 2;
    int tResult = 0;
    float tResult_0 = 0.0f;

    //더하기
    tResult = tA + tB;

    cout << tResult << endl;      //endl 개행. cpp문법

    //빼기
    tResult = tA - tB;
    cout << tResult << endl;

    //곱하기
    tResult = tA * tB;
    cout << tResult << endl;

    //나누기
  tResult_0 = (float)tA / (float)tB;  //명시적 형변환
    cout << tResult_0 << endl;































    return 0;
}

