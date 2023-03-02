#ifndef STACK_HPP
# define STACK_HPP
#include "vector.hpp"
#include <iostream>

namespace ft
{
	template <class T, class Container = ft::vector<T> >
	class stack
	{
	    public:
			typedef Container container_type;
			typedef typename Container::value_type value_type;
			typedef typename Container::size_type size_type;
			typedef typename Container::reference reference;
			typedef typename Container::const_reference	const_reference;

			Container stack_cont;
			explicit stack(const Container &cont = Container())
			{
				this->stack_cont = cont;
			}
			~stack() {}
			stack &operator=(const stack &other)
			{
				this->stack_cont = other.c;
			}
			reference top()
			{
				return (this->stack_cont.back());
			}
			const_reference top() const
			{
				return (this->stack_cont.back());
			}
			bool empty() const
			{
				return (this->stack_cont.empty());
			}
			size_type size() const
			{
				return (this->stack_cont.size());
			}
			void push(const value_type& value)
			{
				this->stack_cont.push_back(value);
			}
			void pop()
			{
				this->stack_cont.pop_back();
			}
	};
	template <class T, class Container>
	bool operator==(const stack<T, Container> &lhs, const ft::stack<T, Container> &rhs) { return (lhs.stack_cont == rhs.stack_cont); }
	template <class T, class Container>
	bool operator!=(const stack<T, Container> &lhs, const ft::stack<T, Container> &rhs) { return (lhs.stack_cont != rhs.stack_cont); }
	template <class T, class Container>
	bool operator<(const stack<T, Container> &lhs, const ft::stack<T, Container> &rhs) { return (lhs.stack_cont < rhs.stack_cont); }
	template <class T, class Container>
	bool operator<=(const stack<T, Container> &lhs, const ft::stack<T, Container> &rhs) { return (lhs.stack_cont <= rhs.stack_cont); }
	template <class T, class Container>
	bool operator>(const stack<T, Container> &lhs, const ft::stack<T, Container> &rhs) { return (lhs.stack_cont > rhs.stack_cont); }
	template <class T, class Container>
	bool operator>=(const stack<T, Container> &lhs, const ft::stack<T, Container> &rhs) { return (lhs.stack_cont >= rhs.stack_cont); }
};

#endif