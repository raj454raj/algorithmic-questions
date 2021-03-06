#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
using namespace std;
int readnum() {
    int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

string tostring(int n) {
    ostringstream ss;
    ss << n;
    return ss.str();
}
string multiply(string num1, string num2) {
    vector<int> fin;
    reverse(num1.begin(), num1.end()); 
    reverse(num2.begin(), num2.end()); 
    int carry = 0, tmp;
    int start = 0, pro;
    int j;
    for(int i = 0 ; num2[i] ; ++i) {
        for(j = 0 ; num1[j] ; ++j) {
            tmp = ((int)(num1[j] - '0') * (num2[i] - '0') + carry);    
            pro = tmp % 10;
            carry = tmp / 10;
            if((start + j) >= fin.size())
                fin.push_back(pro);
            else
                fin[start + j] += pro;
        }
        if(carry) {
            if((start + j) >= fin.size()) 
                fin.push_back(carry);
            else
                fin[start + j] += carry;
        }
        carry = 0;
        start++;
    }
    carry = 0;
    for(int i = 0 ; i < fin.size() ; ++i) {
        tmp = fin[i] + carry;
        fin[i] = tmp % 10;
        carry = tmp / 10;
    }
    if(carry)
        fin.push_back(carry);
    string final_string = "";
    for(vector<int>::iterator it = fin.end() - 1 ; it != fin.begin() - 1 ; --it) {
        final_string += tostring(*it); 
    }
    final_string.erase(0, final_string.find_first_not_of('0'));
    if(final_string == "")
	final_string = "0"; 
    return final_string;
}

int main() {
    int t;
    string a, b;
    t = readnum();
    while(t--) {
        cin >> a;
        cin >> b;
        cout << multiply(a, b) << endl;
    }
    return 0;
}

