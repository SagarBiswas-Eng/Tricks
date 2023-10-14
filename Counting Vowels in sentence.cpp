// Take a string as input and find how many vowels appears in it.

#include<iostream>

using namespace std;

int main(){

    string input;
    int count = 0;

    cout << "Enter the string\t\t\t: ";
    getline(cin, input);

    for(int i = 0; i < input.length(); i++){ // because of string, we use forLoop for converting to lowercase.
        input[i] = tolower(input[i]);
    }

    /*for(int i = 0; i < input.length(); i++) {
        if(input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + 32; // A(65)+32 = 97(a);
        }
    }*/

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
            count ++;
        }
    }
    cout << "Total number of vowel in the string\t: " << count;
    return 0;
}



/*#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string input;
    int count = 0;

    cout << "Enter the string\t\t\t: ";
    getline(cin, input);

    transform(input.begin(), input.end(), input.begin(), ::tolower);

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
            count ++;
        }
    }
    cout << "Total number of vowel in the string\t: " << count;
    return 0;
}*/
