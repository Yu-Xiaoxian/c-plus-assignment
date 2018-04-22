//回文子序列
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void sub_str_creator(string &str, int* combine, int n, int m, const int M, vector<string> &str_vector){
	if(m == 0){
		str_vector.push_back("");
		return;
	}
	for(int i = n; i>=m; i--){
		combine[m -1] = i - 1;
		if(m > 1){
			sub_str_creator(str, combine, i-1, m-1, M, str_vector);
		}
		else{
			string str_temp;
			for(int j = M-1; j >= 0; j--){
				str_temp += str[combine[j]];
			}
			str_vector.push_back(str_temp);
		}
	}
}

int main(){
	string str;
	vector<string> str_vector;
	int count = 0;
	getline(cin,str);

	//cout << "The input string is: " << str << ". Length is: " << str.length() << endl;

	for(int m = 0; m <= str.length(); m++){
		//cout << "----------Loop: " << m << "------------" << endl;
		str_vector.clear();
		//cout << "The size of string vector is: " << str_vector.size() << endl;
		int* combine = new int[m];
		sub_str_creator(str, combine, str.length(), m, m, str_vector);		//计算子字符串
		int i = 0;
		for(const auto s : str_vector){
			string sub_str_inv;
			//cout << "The length of sub string is: " << s.length() << endl;
			if(s.empty()){
				//cout << "Sub string is empty" << endl;
				continue;
			}
			//if(!sub_str.empty()) cout << "false" << endl;
			for(int k = s.length()-1; k >= 0; k--){		//回文子字符串
				sub_str_inv += s[k];
			}
			//cout << " comb" << i << "----------------" << endl;
			//cout << "Current sub string is: " << s << ". ";
			//cout << "The inversed sub string is: " << sub_str_inv << endl;
			if(s == sub_str_inv){
				count++;
			}
			i++;
			//cout << "The num is: " << count << endl;
		}
		delete combine;
	}
	
	cout << count << endl;

	return 0;
}