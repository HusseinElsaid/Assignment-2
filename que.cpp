#include "que.h"
template <class type>
que<type>::que(int s) {
	size = s;
	q = new type[s];
	front = 0;
	back = -1;
}
template <class type>
void que<type>::push(type x) {
	back = (back + 1) % size;
	q[back] = x;
}
template <class type>
void que<type>::pop() {
	front = (front + 1) % size;
}