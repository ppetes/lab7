#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
string text;
string revtext;
string pali;

    cout << "Input text: ";
    cin >> text;
    
    cout << "Reversed text: " << func1(text) << endl;
    revtext = func1(text);
    
    if(func2(text) == func2(revtext)){
    pali = "Yes";
    }
    else{
    pali = "No";
    }
    cout << "Palindrome: " << pali;
    return 0;
}
