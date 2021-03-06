/*
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

입력으로 주어진 숫자 N개의 합을 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int N, sum=0; // 정수형 변수 선언
    char num[100]; // 문자 배열 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    scanf("%s", &num); // 사용자로부터 문자열 입력받기

    for(int i=0;i<N;i++) // i가 0부터 N보다 작을 때까지 i에 1씩 더해가며 반복
    {
        sum+=num[i]-'0'; // sum에 sum + num[i]-'0' 대입
                         // 문자 num[i]의 아스키 코드 값에서 문자 '0'의 아스키 코드 값을 빼면 문자 num[i]를 숫자값으로 바꿀 수 있다.
                         // 예를 들어, 문자 '3' 빼기 문자 '0'('3'-'0')은 숫자 3이다.(아스키 코드 값으로 51-48은 3이다.)
    }
    
    printf("%d\n", sum); // sum 출력하기
    
    return 0;
}
