#include "middle_str.h"

long long itc_len(string text) {
    long long times = 0;
    while (text[times] != '\0') {
        times++;
    }
    return times;
}


long long abs1(long long num) {
    if (num < 0)
        return num * -1;
    return num;
}

string to_strInt(int num) {
    string textRes = "";
    int times = 0;
    while (num != 0) {
        textRes += num + 48;
    }
    return textRes;
}

int to_intStr(string text) {
    int numRes = 0;
    int times = 0;
    while (text[times] != '\0') {
        numRes += (text[times] - 48) * itc_pow(10, times);
        times++;
    }
    return numRes;
}

double itc_pow(double num1, double num2) { // 
    int num3;
    num3 = num1;
    for (int n1 = 1; n1 < abs1(num2); n1++) {
        num3 *= num1;
    }
    if (num2 > 0)
        return num3;
    if (num2 == 0)
        return 1;
    return 1 / num3;