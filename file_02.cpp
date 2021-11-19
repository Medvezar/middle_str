#include "middle_str.h"

string itc_maxCharWord(string str) { // 6
    int lenText = 0, times = 0;
    string resText = "", text = "";
    bool isWord = false;
    str += " ";
    while (str[times] != '\0') {
        if (isWord == false && ((str[times] >= 97 && str[times] <= 122) || (str[times] >= 65 && str[times] <= 90))) {
            isWord = true;
            text += str[times];
        }
        else if (isWord == true && ((str[times] >= 97 && str[times] <= 122) || (str[times] >= 65 && str[times] <= 90)))
            text += str[times];
        else if (str[times] == ' ') {
            if (itc_len(text) > lenText) {
                lenText = itc_len(text);
                resText = text;
            }
            text = "";
        }
        else
            isWord = false;
        times++;
    }
    return resText;
}


char itc_sameChar(string str) { // 7
    char ch1 = ' ';
    int times;
    for (int n1 = 0; n1 < itc_len(str); n1++) {
        if (str[n1] != ' ') {
            ch1 = str[n1];
            times = 0;
            while (str[times] != '\0') {
                if (times != n1) {
                    if (str[times] == ch1)
                        return ch1;
                }
            }
        }
    }
    return ' ';
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

