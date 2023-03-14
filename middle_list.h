#include <vector>
#include <string>
#include <ostream>
#include <iostream>

using namespace std;

vector <char> itc_strtlist(string str);
string itc_join(vector <char> lst, string sep);
string itc_rmstrspc(string str);
string itc_rmstrchar(string str, string less);                                                                       
long itc_sumlst(const vector <int> &lst);
long itc_sum_even_lst(const vector <int> &lst); 
long itc_sum_even_part_lst(const vector <int> &lst); 
void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2);
void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3);
void itc_odd_even_analysis_lst(const vector <int> &lst); 
void itc_pos_neg_analysis_lst(const vector <int> &lst);
long long itc_len(string str);
int itc_max_lst(const vector <int> &lst);
int itc_min_lst(const vector <int> &lst);
