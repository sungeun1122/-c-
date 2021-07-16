#include <stdio.h>

/*
*	문자열의 길이(문자의 개수)를 반환
*		strlen(문자열포인터);
*		strlen(문자배열);
*
*	문자열 비교 결과를 반환
*		strcmp(문자열1, 문자열2);
*		int strcmp(char const *_Str1, char const *_Str2);
*
*		-1: ASCII 코드 기준으로 문자열2(s2)가 클 때
*		0: ASCII 코드 기준으로 두 문자열이 같을 때
*		1: ASCII 코드 기준으로 문자열1(s1)이 클 때
*
*	문자열 복사
*		strcpy(대상문자열, 원본문자열);
*		char *strcpy(char *_Dest, char const *_Source);
*		대상문자열의 포인터를 반환
*
*	문자열 붙이기
*		strcat(최종문자열, 붙일문자열);
*		char *strcat(char *_Destination, char const *_Source);
*		최종 문자열의 포인터를 반환
*
*	문자열 안에서 '문자'로 검색
*		strchr(대상문자열, 검색할문자);
*		char *strchr(char * const _String, int const _Ch);
*		문자를 찾았으면 문자로 시작하는 문자열의 포인터를 반환, 문자가 없으면 NULL을 반환
*
*	문자열 안에서 '문자열'로 검색
*		strstr(대상문자열, 검색할문자열);
*		char *strstr(char * const _String, char const * const _SubString);
*		문자열을 찾았으면 문자열로 시작하는 문자열의 포인터를 반환, 문자열이 없으면 NULL을 반환
*
*  문자열 대소문자 변환
*		strupr(대상문자열)  : 주어진 대상문자열을 전부 대문자로 변환
*		strlwr(대상문자열)  : 주어진 대상문자열을 전부 소문자로 변환
*       원본문자열 변화됨 (주의!)
*/


int main()
{
	// TODO

	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}