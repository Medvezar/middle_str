#include "middle_str.h"


bool itc_isDigit(unsigned char ch1) { // 1
    if (ch1 >= 48 && ch1 <= 57)
        return true;
    return false;
}


unsigned char itc_toUpper(unsigned char ch1) { // 2
    if (ch1 >= 97 && ch1 <= 122)
        return (ch1 - 32);
    return ch1;
}


unsigned char itc_changeCase(unsigned char ch1) { // 3
    if (ch1 >= 97 && ch1 <= 122)
        return itc_toUpper(ch1);
    else if (ch1 >= 65 && ch1 <= 91)
        return ch1 + 32;
    return ch1;

}


bool itc_compare(string str1, string str2) { // 4
    int times = 0;
    while (str1[times] != '\0' || str2[times] != '\0') {
        if (str1[times] != str2[times])
            return false;
        times++;
    }
    return true;
}


int itc_countWords(string str) { // 5
    int numTime = 0;
    int times = 0;
    bool test = false;
    str += ' ';
    while (str[times] != '\0') {
        if (test == true && ((str[times] >= 97 && str[times] <= 122) || (str[times] >= 65 && str[times] <= 90)))
            test = true;
        else if (test == true && str[times] == ' ')
            numTime++;
        else if (test == false && str[times] != ' ')
            test = true;
        else
            test = false;
        times++;
    }
    if (str == "")
        return 0;
    return numTime;
}
