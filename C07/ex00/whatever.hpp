#include <iostream>

using std::cout;
using std::endl;

template<typename T>
void	swap(T &a, T &b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T	&min(const T &a, const T &b){
	if(a < b)
		return a;
	return b;
}

template<typename T>
const T	&max(const T &a, const T &b){
	if(a > b)
		return a;
	return b;
}