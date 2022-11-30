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
void itc_print_copy_char(char str, int number)
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
