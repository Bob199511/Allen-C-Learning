////д���㷨����2��С��1000000000�����룬������ ����˷�������123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
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

////���鱨���ݹ����У�Ϊ�˷�ֹ�鱨���ػ�������Ҫ���鱨��һ���ķ�ʽ���ܣ��򵥵ļ����㷨��Ȼ��������ȫ�����鱨�����룬����Ȼ�ܷ�ֹ�鱨�����׵�ʶ�����Ǹ���һ�����ĵļ��ܷ������Ը�����һ���ַ����������д�a-y,A-Y����ĸ��������ĸ�������z��Z��a��A�������ɵõ�һ���򵥵ļ����ַ�����
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

////KY90 ������
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	string flag, str;
//	getline(cin, flag);
//	while(flag == "START"){
//		getline(cin, str);//ע��cin��getline()�������׳������⣬cin����س���getline��Ĭ��cin��һ��Ϊ���룬��˷�����Ծ�������������
//		getline(cin, flag);
//		if(flag == "END"){
//			//���
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

////ͳ��һ�������ַ�����ָ�����ַ����ֵĴ���
//#include<iostream>
//#include<string>
//using namespace std;
//string str, test;
//int sum;
//int main(){
//	getline(cin, str);
//	while(str != "#"){
//		getline(cin, test);
//		//����ѭ��ʱ�䳬ʱ
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

//��������ʱ��Ҫ��
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
//		//memset(ASCII_Count, 0 , //sizeof(ASCII_Count));//ÿ��ѭ����ʼ��������
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

////����һ���ַ�������������A-Z��д��ĸ���ֵĴ���
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
