#include<iostream>
#include<string>
using namespace std;
class all
{
	public:
		static void PrintStrArrange(string str,int head,int tail)
		{
			char tmp;
			if(head == tail)
				cout<<str<<'\n'<<endl;
			else
			{
				for(int i = head;i < tail; i++)
				{
					tmp = str[head];
					str[head] = str[i];
					str[i] = tmp;
					PrintStrArrange(str, head+1,tail);
					tmp = str[head];
					str[head] = str[i];
					str[i] = tmp;
				}
			}
		}
};
int main()
{
	all a;
	a.PrintStrArrange("123",0,3);
	return 0;
}