//回文子序列
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void sub_str_creator(int n, int m, string &str, vector<string> &str_vector){
	string temp_str;
}

int main(){
	string str;
	int count = 0;
	getline(cin,str);

	cout << "The input string is: " << str << ". Length is: " << str.length() << endl;

	for(int i = 0; i <= str.length(); i++){
		vector<string> str_vector;
		sub_str_creator(str.length(), i, str, str_vector);		//计算子字符串
		for(const auto s : str_vector){
			string sub_str_inv;
			cout << "Current sub string is: " << s << endl;
			cout << "The length of sub string is: " << s.length() << endl;
			if(s.empty()){
				cout << "Sub string is empty" << endl;
				continue;
			}
			//if(!sub_str.empty()) cout << "false" << endl;
			for(int k = s.length()-1; k >= 0; k--){		//回文子字符串
				sub_str_inv += s[k];
			}
			cout << "The inversed sub string is: " << sub_str_inv << endl;
			if(s == sub_str_inv){
				count++;
			}
			cout << "The num is: " << count << endl;
		}
	}
	
	cout << count << endl;

	return 0;
}