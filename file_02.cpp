#include "middle_str.h"

string itc_maxCharWord(string str) { // 6
    string text = "";
    long long lenText = 0;
    long times = 0;
    string txt = "";
    char ch1 = str[times];
    while (ch1 != '\0') {
        ch1 = str[times];
        times++;
        if (ch1 != ' ')
            txt += ch1;
        else{
            if(lenText < itc_len(txt)) {
                text = txt;
                lenText = itc_len(txt);
            }
            txt = ""
        }
    }
    if (itc_len(str) > lenText)
        return text;
    return "error";
}


char itc_sameChar(string str) { // 7
    long times = 0;
    long times2 = 0;
    char ch1 = str[times];
    char ch2 = str[times2];
    while (ch1 != '\0') {
        times2 = 0;
        ch1 = str[times2];
        while (ch2 != '\0') {
            ch2 = str[times2];
            if (times != times2 && ch1 == ch2)
                return ch1;
            times2++;
        }
        times++;
    }
    return ch1;
}

bool itc_isFirstInSecond(string str2, string str1) { // 8
    bool test = true;
    char text1 = 'a';
    char text2 = 'a';
    for (int n1 = 0; n1 < itc_len(str1); n1++) {
        if (str1[n1] == str2[0]) {
            test = true;
            if ((itc_len(str1) - (n1 + 1)) >= itc_len(str2) - 1) {
                for (int n2 = 1; n2 < itc_len(str2); n2++) {
                    text1 = str1[n1 + n2];
                    text2 = str2[n2];
                    if (text1 != text2)
                        test = false;
                }
                if (test == true)
                    return true;
            }
        }
    }
    return false;
}

string itc_Cezar(string str, int changeNum) {
    string textRes = "";
    int times = 0;
    int change;
    while (str[times] != '\0') {
        change = changeNum;
        if (str[times] >= 65 && str[times] <= 90) {
            if (str[times] + change > 90) {
                change = changeNum % 26;
                textRes += 64 + change;
            }
            else if (str[times] + change < 65) {
                change = changeNum % 26;
                textRes += change + 91;
            }
            else
                textRes += str[times] + change;
        }
        else if (str[times] >= 97 && str[times] <= 122) {
            if (str[times] + change > 122) {
                change = changeNum % 26;
                textRes += 96 + change;
            }
            else if (str[times] + change < 97) {
                change = changeNum % 26;
                textRes += 123 + change;
            }
            else
                textRes += str[times] + change;
        }
        times++;
    }
    return textRes;
}

string itc_rmFreeSpace(string str) {
    int times = 0;
    bool test = false;
    bool startCh = false;
    string textRes = "";
    while (str[times] != '\0') {
        if (test == false && str[times] == ' ' && startCh == true) {
            textRes += ' ';
            test = true;
        }
        else if (str[times] != ' ') {
            test = false;
            startCh = true;
            textRes += str[times];
        }
        times++;
    }
    return textRes;
}
