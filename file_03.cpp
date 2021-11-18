#include "middle_str.h"

bool test12(string str) {
	int num = to_intStr(str);
	int res = 0;
	while (num != 0) {
		res += num % 10;
		num /= 10;
	}
	if (res <= 255)
		return true;
	return false;
}


bool itc_isIp(string str) {
	int times = 0, numDots = 0, numTest, numNum = 0;
	bool test = true;
	string text = "";
	while (str[times] != '\0') {
		if ((str[times] >= 48 && str[times] <= 57) && test == true) {
			numNum++;
			test = false;
		}
		if (str[times] >= 48 && str[times] <= 57)
			text += str[times];
		else if (str[times] == '.') {
			test = true;
			numTest = to_intStr(text);
			if (numTest > 255)
				return false;
			text = "";
			numDots++;
		}
		times++;
	}
	if (numNum == 4 && numDots == 3)
		return true;
	return false;
}

string itc_DecToBin(string str) {
	string textRes = "", text = "";
	int times = 0, len = 1;
	while (str[times] != '\0'){
        times++;
        len++;
	}
	times = 0;
	while (times < len) {
		if (str[times] >= 48 && str[times] <= 57)
			text += str[times];
		else {
		    if (to_bin(text) != "")
                textRes += to_bin(text);
            textRes += str[times];
			text = "";
		}
		times++;
	}
	return textRes;
}

string itc_decToBase(int num1, int base){
    string numRes = "";
    string num = to_strInt(num1;
    char ch1;
    long num1 = to_intStr(num), times = 0;
    while (num1 > 0) {
        if (num1 % base > 9){
            ch1 = 'A' + (num1 % base) - 10;
        }
        else
            ch1 = num1 % base + 48;
        numRes += ch1;
        num1 /= base;
    }
    numRes = reverse1(numRes);
    return numRes;
}
