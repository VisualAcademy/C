/*
	프로그램명 : 학점 계산 프로그램V0.3
*/
#include <stdio.h>

#define N 3	//상수

//[0] 구조체 설계
struct Record {
	int Num;			//번호
	int Eng;			//영어
	int Jap;			//일어
	int Tot;			//총점
	float Avg;			//평균
	char Grade;			//학점
};

//[!] 입력 전담용 함수 원형 : 참조형
void Input(
	struct Record* objInputData);
//[!] 처리 전담용 함수 원형 : 반환형
struct Record* MyProcess(
	struct Record InputData[]);
//[!] 출력 전담용 함수 원형 : 값형
void Output(
	struct Record objInputData[]);

//[!] 메인 함수
void main(void) {
	//[1] Init
	struct Record InputData[N];//입력
	//[2] Input(8.1.7) : 참조형 전달
	Input(InputData);//주소전달
	//[3] Process(8.1.8) : 참조형 전달
	memcpy(InputData, MyProcess(InputData));
	//[4] Output(8.1.6) : 값형 전달 
	Output(InputData);//구조체 넘기기
}

//[!] 입력 전담용 함수 선언
void Input(
	struct Record* objInputData) {
	int i;
	for (i = 0; i < 3; i++) {
		printf("\n학생번호 : _\b");
		scanf("%d", &objInputData[i].Num);
		printf("\n영어점수 : ___\b\b\b");
		scanf("%d", &objInputData[i].Eng);
		printf("\n일어점수 : ___\b\b\b");
		scanf("%d", &objInputData[i].Jap);
	}
}

//[!] 처리 전담용 함수 선언
struct Record* MyProcess(
	struct Record InputData[]) {
	int i;
	for (i = 0; i < N; i++) {
		//[i]총점
		{
			InputData[i].Tot =
				InputData[i].Eng
				+ InputData[i].Jap;
		}
		//[ii]평균
		{
			InputData[i].Avg =
				InputData[i].Tot / 2.0;
		}
		//[iii]학점
		{
			if (InputData[i].Avg > 90
				&& InputData[i].Avg <= 100) {
				InputData[i].Grade = 'A';
			}
			else if (InputData[i].Avg > 80) {
				InputData[i].Grade = 'B';
			}
			else if (InputData[i].Avg > 70) {
				InputData[i].Grade = 'C';
			}
			else if (InputData[i].Avg > 60) {
				InputData[i].Grade = 'D';
			}
			else {
				InputData[i].Grade = 'F';
			}
		}
		//[iv]평균 반올림 : 3.5 -> 4
		{
			InputData[i].Avg =
				(int)(InputData[i].Avg + 0.5);
		}
	}
	return InputData;
}

//[!] 출력 전담용 함수 선언
void Output(
	struct Record objInputData[])
{
	int i;
	printf("\n처리 데이터 출력\n");
	printf("번호 영어 일어 총점 평균 학점\n");
	for (i = 0; i < N; i++) {
		printf(
			"%4d %4d %4d %4d %4.1f %4c\n"
			, objInputData[i].Num
			, objInputData[i].Eng
			, objInputData[i].Jap
			, objInputData[i].Tot
			, objInputData[i].Avg
			, objInputData[i].Grade
		);
	}
	printf("\n원본 데이터 출력\n");
	for (i = 0; i < N; i++) {
		printf("%d %d %d\n"
			, objInputData[i].Num
			, objInputData[i].Eng
			, objInputData[i].Jap);
	}
}