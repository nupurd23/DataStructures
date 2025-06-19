#include<iostream>
using namespace std;
const int CHAR = 256;

bool aresame(int CT[], int CP[]) {
    for (int i = 0; i < CHAR; i++) {
        if (CT[i] != CP[i]) {
            return false;
        }
    }
    return true;
}

bool ispresent(string &txt, string &pat) {
    int CT[CHAR] = {0}, CP[CHAR] = {0};
    
    if (pat.length() > txt.length()) return false;

    // Count for the pattern and the first window of text
    for (int i = 0; i < pat.length(); i++) {
        CP[pat[i]]++;
        CT[txt[i]]++;
    }

    // Slide over the text
    for (int i = pat.length(); i < txt.length(); i++) {
        if (aresame(CT, CP)) {
            return true;
        }
        CT[txt[i]]++; // Add next character to current window
        CT[txt[i - pat.length()]]--; // Remove the first character of previous window
    }

    // Check last window
    return aresame(CT, CP);
}

int main() {
    string txt = "ndang";
    string pat = "nad";
    cout << (ispresent(txt, pat) ? "True" : "False");
    return 0;
}
