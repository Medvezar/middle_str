#pragma once

#include <iostream>
#include <string>
using namespace std;


long long itc_len(string str1); // test func
long long abs1(long long num); // test func
string to_strInt(int num); // test func
int to_intStr(string text); // test func
string to_bin(string text); // test func
string reverse1(string text); // test func
bool find_str(string str1, string str2);
bool itc_isDigit(unsigned char ch1); // 1
unsigned char itc_toUpper(unsigned char ch1); // 2
unsigned char itc_changeCase(unsigned char ch1); // 3
bool itc_compare(string str1, string str2); // 4
int itc_countWords(string str); // 5
string itc_maxCharWord(string str); // 6
char itc_sameChar(string str); // 7
bool itc_isFirstInSecond(string str2, string str1); // 8
string itc_Cezar(string str, int change); // 9
string itc_rmFreeSpace(string str); // 10
bool itc_isIp(string str); // 11
string itc_DecToBin(string str); // 12
string itc_decToBase(int text, int base); // 13
