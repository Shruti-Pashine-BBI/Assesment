#include <iostream>
#include <string>
using namespace std;
string one_nineteen[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten","Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string twenty_hundred[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string thousand[] = {"", "Thousand","Million","Billion"};

string convertLessThanThousand(int num) {
    if (num ==0) {
        return "";
    } 
    else if (num < 20) {
        return one_nineteen[num] + " ";
    } else if (num < 100) {
        return twenty_hundred[num / 10] + " " + convertLessThanThousand(num % 10);
    }
    else if (num < 1000) {
        return twenty_hundred[num / 100] + " Thousand " + convertLessThanThousand(num % 100);
    }
     else if (num < 1000) {
        return twenty_hundred[num / 100] + " Thousand " + convertLessThanThousand(num % 100);
    }
    else {
        return one_nineteen[num / 100] + " Hundred " + convertLessThanThousand(num % 100);
    }
}




int main() {
    int num;
    cout<<"Enter the Number:";
    cin>>num;
    string words = convertLessThanThousand(num);
    cout << "\nOutput: " << words <<endl;
    
    // for(int i=0;i<=1000;i+=3){
        
    //     string words = convertLessThanThousand(i);
    // cout << "\nOutput: " << words <<endl;
    // }

    return 0;
}

