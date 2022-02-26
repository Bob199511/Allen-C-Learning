////写个算法，对2个小于1000000000的输入，求结果。 特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
//#include<iostream>
//#include<string>
//using namespace std;
//int sum_xy(int x, int y){
//	int str1[10] = {0};
//	int str2[10] = {0};
//	int i = 0, sum = 0;
//	while(x % 10 != 0 || x / 10 != 0){
//		str1[i++] = x % 10;
//		x /= 10;
//	}
//	i = 0;
//	while(y % 10 != 0 || y / 10 != 0){
//		str2[i++] = y % 10;
//		y /= 10;
//	}
//	for(i = 0; i < 10; ++i){
//		for(int j = 0; j < 10; ++j){
//			sum +=(str1[i]) * (str2[j]);
//		}
//	}
//	return sum;
//}
//int main(){
//    long int x = 0, y = 0;
//    while( scanf("%ld %ld", &x, &y) != EOF){
//		cout << sum_xy(x, y) << endl;
//    }
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//string str1, str2;
//int main(){
//	while(cin >> str1 >> str2){
//		int sum = 0;
//		for(int i = 0; i < str1.size(); ++i){
//			for(int j = 0; j < str2.size(); ++j)
//			{
//				sum += (str1[i] - '0') * (str2[j] - '0');
//			}
//		}
//		cout << sum << endl;
//	}
//}

////在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完全避免情报被破译，但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y,A-Y的字母用其后继字母替代，把z和Z用a和A替代，则可得到一个简单的加密字符串。
//
//#include<iostream>
//#include<string>
//using namespace std;
//string str1;
//int main(){
//	while(getline(cin, str1)){
//		for(int i = 0; i < str1.size(); ++i){
//			if(str1[i] == 'z')
//				str1[i] = 'a';
//			else if(str1[i] == 'Z')
//				str1[i] = 'A';
//			else if(str1[i] >= 'a' && str1[i] < 'z'
//					|| str1[i] >= 'A' && str1[i] < 'Z')
//				str1[i] += 1;
//			else
//				;
//		}
//		cout << str1 << endl;
//	}
//
//	return 0;
//}

////KY90 简单密码
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	string flag, str;
//	getline(cin, flag);
//	while(flag == "START"){
//		getline(cin, str);//注意cin和getline()连用容易出现问题，cin输入回车后，getline会默认cin那一行为输入，因此发生跳跃过本想输入的行
//		getline(cin, flag);
//		if(flag == "END"){
//			//输出
//			for(int i = 0; i < (int)str.size(); ++i){
//				if(str[i] >= 'A' && str[i] <= 'Z'){
//				str[i] = (str[i] - 'A' + 21) % 26 + 'A';
//				}
//			}
//			cout << str <<endl;
//		}
//		getline(cin, flag);
//		if(flag == "ENDOFINPUT"){
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

////统计一个给定字符串中指定的字符出现的次数
//#include<iostream>
//#include<string>
//using namespace std;
//string str, test;
//int sum;
//int main(){
//	getline(cin, str);
//	while(str != "#"){
//		getline(cin, test);
//		//二重循环时间超时
//		for(int i = 0; i < str.size(); ++i){
//			cout << str[i] << ' ';
//			sum = 0;
//			for(int j = 0; j < test.size(); ++j){
//				if(test[j] == str[i]){
//					++sum;
//				}
//			}
//			cout << sum << endl;
//		}
//		getline(cin, str);
//	}
//
//	return 0;
//}

//符合运行时间要求
//#include<iostream>
//#include<string>
//using namespace std;
//int main (){
//	string str;
//	int ASCII_Count[128];
//	string test;
//	while(getline(cin , str)){
//		if(str == "#"){
//			break;
//		}
//		//memset(ASCII_Count, 0 , //sizeof(ASCII_Count));//每次循环初始化计数器
//		for(int i = 0; i < 128; ++i){
//			ASCII_Count[i] = 0;
//		}
//		getline(cin, test);
//		for(int i = 0; i < test.size(); ++i){
//			ASCII_Count[test[i]]++;
//		}
//		for(int i = 0; i < str.size(); ++i){
//			cout << str[i] << ' ' << ASCII_Count[str[i]] << endl;
//		}
//	}
//	return 0;
//}

////输入一行字符串，计算其中A-Z大写字母出现的次数
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	string str;
//	int count_alpha[26];
//	while(getline(cin, str)){
//		for(int i = 0; i < 26; ++i){
//		count_alpha[i] = 0;
//		}
//		for(int i = 0; i < str.size(); ++i){
//			if(str[i] >='A' && str[i] <= 'Z'){
//				count_alpha[str[i] - 'A']++;
//			}
//		}
//		for(int i = 0; i < 26; ++i){
//			printf("%c:%d\n",i + 'A', count_alpha[i]);
//		}
//	}
//
//	return 0;
//}

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	string str;
	while(getline(cin, str)){
		int sum = 0;
		for(int i = str.size(), j = 0; j < str.size(); --i, ++j){
			if(str[j] != '0')
				sum += (str[j] - '0')*( pow(2, (float)i) - 1);
		}
		cout << sum << endl;

	}
	return 0;

}
