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
                times++;
            }
        }
    }
    return ' ';
}

bool itc_isFirstInSecond(string str2, string str1) { // 8
    bool isCorrect = true;
    int numTest;
    for (int n1 = 0; n1 < itc_len(str1); n1++) {
        if (n1 > itc_len(str2))
            return false;
        else if (str1[n1] == str2[0]) {
            isCorrect = true;
            numTest = n1;
            for (int n2 = 0; n2 < itc_len(str2); n2++) {
                numTest += n2;
                cout << str1[numTest] << endl << str2[n2] << endl;
                if (str1[numTest] != str2[n2])
                    isCorrect = false;
            }
            if (isCorrect == true)
                return true;
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
    bool isWord = false, isStart = true, moreThenOne = false;
    int times = 0;
    string resText = "";
    if (str == "")
        return "";
    while (str[times] != '\0') {
        if (str[times] != ' ') {
            resText += str[times];
            moreThenOne = false;
            isStart = false;
        }
        else if (isStart == false && str[times] == ' ' and moreThenOne == false) {
            resText += str[times];
            moreThenOne = true;
        }
        times++;
    }
    return resText;
}
