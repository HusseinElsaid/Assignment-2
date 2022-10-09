template <class type>
class que
{
private:
	type *q;
	int size;
	int front;
	int back;
public:
	que(int s);
	void push(type x);
	void pop();
};
