#include "middle_str.h"

long long itc_len(string text) {
    long long times = 0;
    while (text[times] != '\0') {
        times++;
    }
    return times;
}


long itc_pow(double num1, double num2) { //
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
}


long long abs1(long long num) {
    if (num < 0)
        return num * -1;
    return num;
}

string to_strInt(int num) {
    string textRes = "";
    int times = 0, num1 = num, count = 0;
    while (num1 > 0) {
        times++;
        num1 /= 10;
    }
    while (num != 0) {
        textRes += num + 48;
        num %= itc_pow(10, times);
        count++;
    }
    return textRes;
}

int to_intStr(string text) {
    int numRes = 0;
    int times = 0, len = 0;
    while (text[len] != '\0')
        len++;
    while (text[times] != '\0') {
        numRes += (text[times] - 48) * itc_pow(10, len - times);
        times++;
    }
    return numRes / 10;
}

string reverse1(string text) {
    string textRes = "";
    int len = 0, times = 0;
    while (text[times] != '\0')
        times++;
    len = times;
    for (int n1 = len - 1; n1 >= 0; n1--)
        textRes += text[n1];
    return textRes;
}

string to_bin(string num) {
    string numRes = "";
    char ch1;
    int num1 = to_intStr(num), times = 0;
    while (num1 > 0) {
        ch1 = num1 % 2 + 48;
        numRes += ch1;
        num1 /= 2;
    }
    numRes = reverse1(numRes);
    return numRes;
}
