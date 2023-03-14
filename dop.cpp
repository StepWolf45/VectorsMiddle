#include "middle_list.h"
#include "middle_list.h"
#include <vector>
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

long long itc_len(string str) {
    long long kol = 0;
    for (int i = 0; str[i] != '\0'; ++i){
         kol++;
    }
    return kol;
}
int itc_max_lst(const vector <int> &lst){
    int max= -2147483647;
    if (lst.size() > 0){
        for(int i = 0; i < lst.size(); ++i){
            if (lst[i] > max){
                max= lst[i]; 
            }
        }
    }
    if (lst.size() == 0){
        max = 0;
    }
    return max;
}
int itc_min_lst(const vector <int> &lst){
    int min= 2147483647;
    if (lst.size() > 0) {
        for(int i = 0; i < lst.size(); ++i) {
            if (lst[i] < min){
                min = lst[i];
            } 
        }
    }
    if (lst.size() == 0){
        min = 0;
    }
    return min;
}