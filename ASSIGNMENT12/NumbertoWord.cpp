#include <iostream>
#include <string>
using namespace std;
string one_nineteen[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten","Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string twenty_hundred[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string thousand[] = {"", "Thousand","Million","Billion"};

string convertLessThanThousand(int num) {
    if (num == 0) {
        return "";
    } else if (num < 20) {
        return one_nineteen[num] + " ";
    } else if (num < 100) {
        return twenty_hundred[num / 10] + " " + convertLessThanThousand(num % 10);
    } else {
        return one_nineteen[num / 100] + " Hundred " + convertLessThanThousand(num % 100);
    }
}

string numberToWords(int num) {
    if (num == 0) {
        return "Zero";
    }

    string result = "";
    int i = 0;

    while (num > 0) {
        if (num % 1000 != 0) {
            result = convertLessThanThousand(num % 1000) + thousand[i] + " " + result;
        }
        num /= 1000;
        i++;
    }

   
    
    return result;
}

int main() {
    int num ;
    cout<<"Enter the Number:";
    cin>>num;
    string words = numberToWords(num);
    cout << "Input: " << num << "\nOutput: " << words << std::endl;
    // cout << "\nOutput: " << words <<endl;
    
    // for(int i=0;i<=1000;i+=3){
        
    //     string words = convertLessThanThousand(i);
    // cout << "\nOutput: "<<i <<":"<< words <<endl;
    // }

    return 0;
}

