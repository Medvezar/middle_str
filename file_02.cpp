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
        if (ch1 >= 97 && ch1 <= 122)
            txt += ch1;
        else
            txt = "";
        if(lenText < itc_len(txt)) {
            text = txt;
            lenText = itc_len(txt);
        }
    }
    if (itc_len(str) > lenText)
        return text;
    return "error";
}


char itc_sameChar(string str) { // 7
    long times = 0;
    long times2 = 0;
    int ch1Count = 0;
    char ch1 = str[times];
    char ch2 = str[times2];
    while (ch1 != '\0') {
        while (ch2 != '\0') {
            ch2 = str[times2];
            if (times != times2 && ch1 == ch2)
                return ch1;
            times2++;
        }
        times++;
    }
}
