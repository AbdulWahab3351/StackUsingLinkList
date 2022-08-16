#include<iostream>
using namespace std;
#include "Stack.h"
int main()
{
	try
	{
		Stack<int> st;
		/*st.push(5);
		st.push(6);
		st.push(7);
		st.push(8);
		st.push(9);*/
		Stack<int> s = st;
		cout <<'\n'<< st.pop();
		cout <<'\n'<< st.pop();
		cout <<'\n'<< st.pop();
		cout <<'\n'<< st.pop();
		cout << '\n' << st.stackTop();
		cout <<'\n'<< st.pop();
		cout << s.pop();
	}
	catch (string str)
	{
		cout << str;
	}
	return 0;
}