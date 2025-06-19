#include<iostream>
using namespace std;

void rabinkarp(string &pat , string &txt, int m , int n , int q, int d){
    int h = 1;
    for(int i = 1; i <= m - 1; i++){
        h = (h * d) % q;
    }

    int p = 0, t = 0;
    // Initial hash of pattern and first window
    for(int i = 0; i < m; i++){
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    // Slide pattern over text
    for(int i = 0; i <= n - m; i++){
        // If hash matches, do character by character comparison
        if(p == t){
            bool flag = true;
            for(int j = 0; j < m; j++){
                if(txt[i + j] != pat[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << "Pattern found at index " << i << endl;
            }
        }

        // Calculate hash for next window
        if(i < n - m){
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;
            if(t < 0){
                t += q;
            }
        }
    }
}

int main(){
    string txt = "GEEKS FOR GEEKS";
    string pat = "GEEK";
    int d = 256;      // Number of characters in input alphabet
    int q = 101;      // A prime number

    rabinkarp(pat, txt, pat.length(), txt.length(), q, d);
    return 0;
}
