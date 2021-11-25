#include "middle_str.h"

string itc_maxCharWord(string str) { // 6
    int lenText = 0, times = 0;
    string resText = "", text = "";
    bool isWord = false;
    char ch1 = ' ';
    str += " ";
    if (str == "")
        return "error";
    while (times < itc_len(str)) {
        ch1 = str[times];
        if (ch1 == ' ') {
            if (itc_len(text) > itc_len(resText))
                resText = text;
            text = "";
        }
        else if ((ch1 >= 'a' && ch1 <= 'z') || (ch1 >= 'A' && ch1 <= 'Z'))
            text += ch1;
        times++;
    }
    if (itc_len(str) == itc_len(resText))
        return "error";
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
    if (find_str(str2, str1) == true)
        return true;
    else if (str2 == str1)
        return true;
    else if (str2 == "")
        return true;
    return false;
}


string itc_Cezar(string str, int change) {
    string textRes = "";
    int times = 0; 
    char test = ' ';
    while (str[times] != '\0') {
        if (str[times] >= 'a' && str[times] <= 'z') {
            test = 25 - ('z' - str[times]) + change;
            if (test > 25)
                test -= 26;
            else if (test < 0)
                test += 26;
            textRes += 'a' + test;
        }
        else if (str[times] >= 'A' && str[times] <= 'Z') {
            test = 25 - ('Z' - str[times]) + change;
            if (test > 25)
                test -= 26;
            else if (test < 0)
                test += 26;
            textRes += 'A' + test;
        }
        times++;
    }
    if (str == "")
        return "";
    return textRes;
}




string itc_rmFreeSpace(string str) {
    bool isWord = false, isStart = true, moreThenOne = false;
    int times = 0;
    string resText = "", test = "";
    if (str == "")
        return "";
    while (str[times] < itc_len(str)) {
        if (str[times] != ' ') {
            resText += str[times];
            moreThenOne = false;
            isStart = false;
        }
        else if (isStart == false && str[times] == ' ' && moreThenOne == false) {
            resText += str[times];
            moreThenOne = true;
        }
        times++;
    }
    times = 0;
    if (resText[itc_len(resText) - 1] == ' ') {
        while (times < itc_len(resText) - 1) {
            test += resText[times];
            times++;
        }
        return test;
    }
    return resText;
}