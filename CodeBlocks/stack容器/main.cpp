#include <iostream>
#include<stack>
#include<queue>
using namespace std;
//stack����
//void test01()
//{
//	stack<int>s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	cout << "s��СΪ��" << s.size() << endl;
//	while(!s.empty()){
//		cout << s.top() << endl;
//		s.pop();
//	}
//}

class Person{
public:
	Person(string name, int age){
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};
//queue����
void test01()
{
	queue<Person>q1;
	queue<Person>q2;
	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	q1.push(p1);
	q1.push(p2);
	q1.push(p3);
	q1.push(p4);
	q2 = q1;
	cout << "q2���д�СΪ��" << q2.size() << endl;
	while(!q2.empty()){
		cout << "q2��ͷ��" << q2.front().m_name << ':'
		<<q2.front().m_age <<endl;
		cout << "q2��β��" << q2.back().m_name << ':'
		<<q2.back().m_age <<endl;
		q2.pop();
	}

}
int main()
{
    test01();
    return 0;
}
