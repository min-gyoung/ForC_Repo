#include <stdio.h>

int GetResult() {
    int result = 0;

    printf("����(0~100)�� �Է��ϼ���. : ");
    scanf_s("%d", &result);

    return result;
}

char GetGrade(int score) {
    if (score >= 90) {
        return "A";
    }
    else if (score >= 80) {
        return "B";
    }
    else if (score >= 70) {
        return "C";
    }
    else if (score >= 60) {
        return "D";
    }

    return "F";
}

int main() {
    int result = 0;

    result = GetResult();

    printf("����� ������ %c(%d)�Դϴ�.\n", GetGrade(result), result);

    return 0;
}