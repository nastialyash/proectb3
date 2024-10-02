
#include <iostream>

using namespace std;

int string1(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char* insert(char* str, char a, int b) {
    int len = string1(str);  

    if (b< 0 || b > len) {
        cout << "Not good" << endl;
        return str;
    }

   
    char* newStr = new char[len + 2]; 

    
    for (int i = 0; i < b; i++) {
        newStr[i] = str[i];
    }

    
    newStr[b] = a;

  
    for (int i = b; i < len; i++) {
        newStr[i + 1] = str[i];
    }

    newStr[len + 1] = 0;

    return newStr;
}
int length(const char* str) {
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        return length;
    }
  char* remove(char* str, int pos) {
        int len = length(str);  
        if (pos < 0 || pos >= len) {
            cout << "Not good2 : " << endl;
            return str;
        }

        char* newStr = new char[len];  
        
        for (int i = 0, j = 0; i < len; i++) {
            if (i != pos) {
                newStr[j++] = str[i];
            }
        }

        
        newStr[len - 1] = 0;

        return newStr;
    }
int main() {
    char str[] = "Hello World";
    char ch = '!';
    int pos = 5;


    char* pstr = insert(str, ch, pos);


    cout << "New : " << pstr << endl;


    delete[] pstr;




  

    
        char str[] = "Hello World !";
        int pos = 5;

      
        char* pstr2 = remove(str, pos);

        
        cout << "New2 : " << pstr2 << endl;

        delete[] pstr2;


}