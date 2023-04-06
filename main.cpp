//
//  main.cpp
//  Csis123 7-11
//
//  Created by Justin Brown on 12/3/22.
//
#include <iostream>
#include <string>

using namespace std;

int sum(std::string a) {
    
    int i = 0;
    int sum = 0;
    char currentnum;
    while (i<a.size()) {
        currentnum = a[i];
        sum += currentnum;
        i++;
    }
    return sum;
}


int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    cout << "your ascii sum is: " << sum(word) << endl;
    return 0;
}
