#include "middle_list.h"
#include "middle_list.h"
#include <vector>
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

long itc_sum_even_lst(const vector <int> &lst){
    long long sum = 0;
    for (long long i = 0; i < lst.size(); i += 2){
         sum += lst[i];
    }
    return sum;
}
long itc_sum_even_part_lst(const vector <int> &lst){
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0){
             sum += lst[i];
        }
    }
    return sum;
}
void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){
    if(lst.size() > 0) {
        for(long long i = 0; i < lst.size(); i++){
            if(lst[i] % 2 == 0) {
                lst1.push_back(lst[i]);
            }else {
                lst2.push_back(lst[i]);
            }
        }
    }
}
void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){
    if(lst.size() > 0){
        for(long long i = 0; i < lst.size(); i++){
            if (lst[i] < 0){
                lst1.push_back(lst[i]);
            }else if (lst[i] == 0){
                lst2.push_back(lst[i]);
            }else {
                lst3.push_back(lst[i]);
            }
        }
    }
}
void itc_odd_even_analysis_lst(const vector <int> &lst){
    setlocale(LC_ALL, "Rus");
    vector <int> lst1, lst2;
    itc_odd_even_separator_lst(lst, lst1, lst2);
    cout << "Анализ списка:" << endl;
    cout << "Количество четных чисел: " << lst1.size() << "," <<endl; 
    cout << "Количество нечетных чисел: " << lst2.size() << "\n";
    cout << "Максимальная четная цифра: " << itc_max_lst(lst1) << "," << endl; 
    cout << "Максимальная нечетная цифра: " << itc_max_lst(lst2) << "," << "\n";
    cout << "Минимальная четная цифра: " << itc_min_lst(lst1) << "," <<endl;
    cout << "Минимальная нечетная цифра: " << itc_min_lst(lst2) << "," << "\n";
    cout << "Сумма четных чисел: " << itc_sumlst(lst1) << "," << endl;
    cout<< "Сумма нечетных чисел: " << itc_sumlst(lst2) << "," << "\n";
}