#include <iostream>
#include <string>
using namespace std;
//void test01()
//{
//    //string字符串的构造
//    string s1;
//    const char * str = "heloo world";
//    string s2(str);
//    cout << "s2 = " << s2 << endl;
//    string s3(s2);
//    cout << "s3 = " << s3 << endl;
//    string s4(10, 'a');
//    cout << "s4 = " << s4 << endl;
//
//}
//void test01()
//{
//    string str1;
//    str1 = "hello owrld";
//    cout << "str1 = " << str1 << endl;
//    string str2;
//    str2 = str1;
//    cout << "str2 = " << str2 << endl;
//    string str3;
//    str3 = 'a';
//    cout << "str3 = " << str3 << endl;
//    string str4;
//    str4.assign("hello C++");
//    cout << "str4 = " << str4 << endl;
//
//    string str5;
//    str5.assign("hello C++", 5);
//    cout << "str5 = " << str5 << endl;
//    string str6;
//    str6.assign(str5);
//    cout << "str6 = " << str6 << endl;
//    string str7;
//    str7.assign(10, 'w');
//    cout << "str7 = " << str7 << endl;
//}

////string字符串拼接,在末尾进行追加
//void test01()
//{
//     string str1 = "我";
//
//     str1 += "爱玩游戏";
//     cout << "str1 = " << str1 << endl;
//
//     str1 += 'a';
//     cout << "str1 = " << str1 << endl;
//
//     string str2 = "LOL DNF";
//     str1 += str2;
//     cout << "str1 = " << str1 << endl;
//
//
//     string str3 = "I";
//     str3.append(" love ");
//     cout << "str3 = " << str3 << endl;
//
//     str3.append("game abcde", 4);
//     cout << "str3 = " << str3 << endl;
//
//     str3.append(str2);
//     cout << "str3 = " << str3 << endl;
//
//     str3.append(str2, 4, 3);
//     cout << "str3 = " << str3 << endl;
//}
//字符串查找
//void test01()
//{
//    string str1 = "abcdef";
//    int pos = str1.find("df");//没有则返回-1
//    cout << "pos = " << pos << endl;
//
//    //rfind 从右往左查找， find从左往右查
//    pos = str1.rfind("de");
//    cout << "pos = " << pos << endl;
//    //替换操作
//    str1.replace(1, 5, "1111") ;//会将字符串全部替换，3并不能限制个数，但能增加即使超过此字符串个数
//    cout << "str1 = " << str1 << endl;
//
//}
//string字符串比较

////string字符串存取
//void test01()
//{
//    string str = "hello";
//    cout << "str = " << str << endl;
//    //通过[]或at方式访问单个字符
//    for(int i = 0; i < str.size(); ++i){
//        cout << "str[i] = " <<str[i] <<endl;
//        cout << "str.at(i) = " << str.at(i) <<endl;
//    }
//
//}

////字符串的插入和删除insert,和，erase
//void test01()
//{
//    string str1 = "hello";
//    str1.insert(5, "world");
//    cout << "str1 = " << str1 << endl ;
//
//    str1.erase(5, 5);
//    cout << "str1.erase(5, 5) = " << str1 << endl ;
//
//}

//string容器子串获取
void test01(){
    string str = "hello world!";
    cout << "str = " << str << endl;
    string subStr = str.substr(6, 6);
    cout << "subStr = str.substr(6, 6) =  " << subStr << endl;
    //使用操作
    string email = "15620077535@163.com";
    //从邮箱中获取用户名
    int pos = email.find('@');

    string usrName = email.substr(0, pos);
    cout << "usrName = " << usrName << endl;
}

int main()
{
    test01();
    return 0;
}
