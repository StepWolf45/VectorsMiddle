#include "middle_list.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector <char> itc_strtlist(string str)
{
	vector<char> result;
	for (long long i = 0; i < str.size(); ++i){
        result.push_back(str[i]);
    }
	return result;
}

string itc_join(vector <char> lst, string sep){
    string tmp = "";
    if (lst.size() > 0){
        for(int i = 0; i < lst.size() - 1; i++){
            tmp += lst[i];
            tmp += sep;
        }
        tmp += lst[lst.size()-1];
    }
    return tmp;
}

string itc_rmstrspc(string str){
    string tmp = "";
    for(long long i = 0; i < itc_len(str); ++i){
        if (str[i] != 32) tmp += str[i];
    }
    return tmp;
}


string itc_rmstrchar(string str, string less){
    string new_str = "";
    int flag= 0;
    for (long long i = 0; str[i] != '\0'; ++i) {
        for(long long j = 0; less[j] != '\0'; ++j){
             if (less[j] == str[i]) {
                flag = 1;
             }
        }
        if (flag == 0){
            new_str += str[i];
        }
        flag = 0;
    }
    return new_str;
}
long itc_sumlst(const vector <int> &lst){
    long long sum = 0;
    if (lst.size() != 0) {
        for(long long i = 0; i < lst.size(); ++i) {
            sum += lst[i];
        }
    }
    return sum;
}