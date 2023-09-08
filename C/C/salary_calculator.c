#include <stdio.h>

// ��� ����
#define N 5                      // ó���� ���� ��
#define OVERTIME_THRESHOLD 40    // �ʰ� �ٹ� �ð� ���� (�� �ð��� �ʰ��� ��� �ʰ����� ����)
#define OVERTIME_RATE 1.5        // �ʰ� �ٹ� ���� ���� (�⺻ �ñ޿� ���� ������ ����)
#define STANDARD_PAY_PER_HOUR 5000  // �⺻ �ñ�
#define HIGH_TAX_RATE 0.12       // ���� ���� (�� �޿��� Ư�� �Ӱ谪�� �ʰ��� ��� �����)
#define LOW_TAX_RATE 0.1         // ���� ���� (�� �޿��� Ư�� �Ӱ谪 ������ ��� �����)
#define HIGH_TAX_THRESHOLD 400000  // ���� ������ ����Ǵ� �޿� �Ӱ谪

// ���� ������ ���� ����ü ����
typedef struct
{
    char name[6];        // ���� �̸�
    long basicSalary;    // �⺻��
    int overtimeHours;   // �ʰ� �ٹ� �ð�
} Employee;

// ���޿� ������ ����ϴ� �Լ� ����
void printSalaryDetails(const Employee employees[], int count);

int main(void)
{
    // ���� ���� �ʱ�ȭ
    Employee employees[N] =
    {
        { "ö��", 450000, 44 },
        { "����", 390000, 35 },
        { "����", 520000, 42 },
        { "����", 510000, 39 },
        { "����", 335000, 47 }
    };

    // ���޿� ���� ���
    printSalaryDetails(employees, N);

    return 0;
}

void printSalaryDetails(const Employee employees[], int count)
{
    static long currencyUnits[10] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 }; // ȭ�� ���� �迭
    long totalSalary = 0, totalTax = 0, totalTakeHome = 0; // �ѱ޿�, �Ѽ���, �Ѽ��ɾ� �ʱ�ȭ

    printf("\t\t���޿� ����\n");
    printf("��ȣ\t�̸�\t�⺻��\t����\t�ѱ޿�\t����\t���ɾ�\n");

    for (int i = 0; i < count; i++)
    {
        // �ʰ����� ���
        long overtimePay = (employees[i].overtimeHours > OVERTIME_THRESHOLD)
            ? (long)employees[i].overtimeHours * STANDARD_PAY_PER_HOUR * OVERTIME_RATE
            : (long)employees[i].overtimeHours * STANDARD_PAY_PER_HOUR;

        long totalEarnings = employees[i].basicSalary + overtimePay; // �� �޿�
        float taxRate = (totalEarnings >= HIGH_TAX_THRESHOLD) ? HIGH_TAX_RATE : LOW_TAX_RATE; // ���� ����
        long tax = totalEarnings * taxRate; // ���� ���
        long takeHome = totalEarnings - tax; // ���ɾ� ���

        printf("%d\t%5s\t%ld\t%ld\t%ld\t%ld\t%ld\n", i + 1, employees[i].name, employees[i].basicSalary, overtimePay, totalEarnings, tax, takeHome);

        // �հ� ���
        totalSalary += totalEarnings;
        totalTax += tax;
        totalTakeHome += takeHome;
    }

    // �հ� ���
    printf("�հ�\t\t-\t-\t%ld\t%ld\t%ld\n\n", totalSalary, totalTax, totalTakeHome);

    // ȭ�� �ż� ���
    for (int i = 0; i < 10; i++)
    {
        int notes = totalTakeHome / currencyUnits[i];
        printf("%10ld ���� = %2d ��\n", currencyUnits[i], notes);
        totalTakeHome %= currencyUnits[i];
    }
}
