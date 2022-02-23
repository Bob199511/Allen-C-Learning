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
