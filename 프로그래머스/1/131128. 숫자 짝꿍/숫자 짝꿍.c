#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* X, const char* Y)
{
    int countX[10] = {0};
    int countY[10] = {0};

    for (int i = 0; X[i] != '\0'; i++) countX[X[i] - '0']++;
    for (int i = 0; Y[i] != '\0'; i++) countY[Y[i] - '0']++;

    int common[10];
    int total = 0;
    for (int i = 0; i < 10; i++)
    {
        common[i] = countX[i] < countY[i] ? countX[i] : countY[i];
        total += common[i];
    }

    char* answer;

    if (total == 0)
    {
        answer = (char*)malloc(3);
        answer[0] = '-';
        answer[1] = '1';
        answer[2] = '\0';
        return answer;
    }

    if (common[0] == total)
    {
        answer = (char*)malloc(2);
        answer[0] = '0';
        answer[1] = '\0';
        return answer;
    }

    answer = (char*)malloc(total + 1);
    int idx = 0;
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < common[i]; j++)
        {
            answer[idx++] = '0' + i;
        }
    }
    answer[idx] = '\0';
    return answer;
}