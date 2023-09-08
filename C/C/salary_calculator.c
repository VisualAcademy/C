#include <stdio.h>

// 상수 정의
#define N 5                      // 처리할 직원 수
#define OVERTIME_THRESHOLD 40    // 초과 근무 시간 기준 (이 시간을 초과할 경우 초과수당 적용)
#define OVERTIME_RATE 1.5        // 초과 근무 수당 비율 (기본 시급에 대한 비율로 계산됨)
#define STANDARD_PAY_PER_HOUR 5000  // 기본 시급
#define HIGH_TAX_RATE 0.12       // 높은 세율 (총 급여가 특정 임계값을 초과할 경우 적용됨)
#define LOW_TAX_RATE 0.1         // 낮은 세율 (총 급여가 특정 임계값 이하일 경우 적용됨)
#define HIGH_TAX_THRESHOLD 400000  // 높은 세율이 적용되는 급여 임계값

// 직원 정보를 담을 구조체 정의
typedef struct
{
    char name[6];        // 직원 이름
    long basicSalary;    // 기본급
    int overtimeHours;   // 초과 근무 시간
} Employee;

// 월급여 명세서를 출력하는 함수 선언
void printSalaryDetails(const Employee employees[], int count);

int main(void)
{
    // 직원 정보 초기화
    Employee employees[N] =
    {
        { "철수", 450000, 44 },
        { "영희", 390000, 35 },
        { "병욱", 520000, 42 },
        { "지민", 510000, 39 },
        { "수진", 335000, 47 }
    };

    // 월급여 명세서 출력
    printSalaryDetails(employees, N);

    return 0;
}

void printSalaryDetails(const Employee employees[], int count)
{
    static long currencyUnits[10] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 }; // 화폐 단위 배열
    long totalSalary = 0, totalTax = 0, totalTakeHome = 0; // 총급여, 총세금, 총수령액 초기화

    printf("\t\t월급여 명세서\n");
    printf("번호\t이름\t기본급\t수당\t총급여\t세금\t수령액\n");

    for (int i = 0; i < count; i++)
    {
        // 초과수당 계산
        long overtimePay = (employees[i].overtimeHours > OVERTIME_THRESHOLD)
            ? (long)employees[i].overtimeHours * STANDARD_PAY_PER_HOUR * OVERTIME_RATE
            : (long)employees[i].overtimeHours * STANDARD_PAY_PER_HOUR;

        long totalEarnings = employees[i].basicSalary + overtimePay; // 총 급여
        float taxRate = (totalEarnings >= HIGH_TAX_THRESHOLD) ? HIGH_TAX_RATE : LOW_TAX_RATE; // 세율 결정
        long tax = totalEarnings * taxRate; // 세금 계산
        long takeHome = totalEarnings - tax; // 수령액 계산

        printf("%d\t%5s\t%ld\t%ld\t%ld\t%ld\t%ld\n", i + 1, employees[i].name, employees[i].basicSalary, overtimePay, totalEarnings, tax, takeHome);

        // 합계 계산
        totalSalary += totalEarnings;
        totalTax += tax;
        totalTakeHome += takeHome;
    }

    // 합계 출력
    printf("합계\t\t-\t-\t%ld\t%ld\t%ld\n\n", totalSalary, totalTax, totalTakeHome);

    // 화폐별 매수 출력
    for (int i = 0; i < 10; i++)
    {
        int notes = totalTakeHome / currencyUnits[i];
        printf("%10ld 원권 = %2d 장\n", currencyUnits[i], notes);
        totalTakeHome %= currencyUnits[i];
    }
}
