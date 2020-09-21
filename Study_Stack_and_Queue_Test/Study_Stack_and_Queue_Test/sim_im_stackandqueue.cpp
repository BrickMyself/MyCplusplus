#include<deque>
#include<iostream>
using namespace std;
template<class T, class Con = deque<T>> 
class Stack 
{
public:    
	Stack() {}
    void Push(const T& x) { _c.push_back(x); }
    void Pop() { _c.pop_back(); }
	T& Top() { return _c.back(); }
	const T& Top()const { return _c.back(); }
	size_t Size()const { return _c.size(); }
    bool Empty()const { return _c.empty(); } 
private:    
	Con _c;
};
void Test()
{
	Stack<int> s;
	s.Push(1);
	s.Pop();
	s.Push(2);
	cout << s.Size() << endl;
}
int main()
{
	Test();
	return 0;
}
