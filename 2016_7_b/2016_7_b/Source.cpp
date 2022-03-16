#include <iostream>
#include <string>
using namespace std;
int main() {

   string str;
   int i = 0, alphabet[26] = {0}, j;
   
   getline(cin, str);

   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
         j = tolower(str[i]) - 'a';
         ++alphabet[j];
      }
      ++i;
   }
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++)
   cout<< char(i + 'a') << " : " << alphabet[i] << endl;
   return 0;
}