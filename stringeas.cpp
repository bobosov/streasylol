#include"easy.h"
string itc_hello_str(string name)
{
    string a  = "<<Hello, " + name + ">>";
    return a;
}
long long itc_len(string str)
{
    long long len = str.size();
    return len;
}
void itc_print_copy_str(string str, int number)
{
    for (int i = 0; i != number; i ++){
    cout << str;
    }
 }
void itc_first_end_three(string str)
{
      char a = str[0];
  if (str.size() >=  5){
  cout << str[0] << str[1] << str[2] << str[str.size()-3] << str[str.size()-2] << str[str.size()-1];
  }
  else{
   itc_print_copy_char(a, str.size());
  }
}
int itc_count_char_in_str(char ch, string str)
{
    int count = 0;
    for (int i = 0; i != str.size(); i ++){
        cout << str[i];
        if (ch == str[i]){
            count ++;
        }
    }
return count;
}
string itc_even_place(string str)
{
    return 0;
}
double itc_percent_lower_uppercase(string str)
{
    return 0;
}
string itc_reverse_str(string str)
{
    return 0;
}
string itc_slice_str(string str, int start, int end)
{
    return 0;
}
bool itc_equal_reverse(string str)
{
    return 0;
}
string itc_cmp_str(string str1, string str2, int num)
{
    return 0;
}
int itc_find_str(string str1, string str2)
{
    return 0;
}
string itc_three_str(string str1, string str2, string str3)
{
    return 0;
}
int itc_max_char_on_end(string str)
{
    return 0;
}
