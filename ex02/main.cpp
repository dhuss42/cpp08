
#include "MutantStack.hpp"
#include "vector"

int main()
{
	std::cout << "\033[34m\n[----------Main Subject----------]\033[37m" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }
	std::stack<int> s(mstack);

	std::cout << "\033[34m\n[----------control with vector----------]\033[37m" << std::endl;
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(17);
	std::cout << vec.back() << std::endl;
	vec.pop_back();
	std::cout << vec.size() << std::endl;
	vec.push_back(3); vec.push_back(5); vec.push_back(737);

	std::vector<int>::iterator itVec = vec.begin();
	std::vector<int>::iterator iteVec = vec.end();
	++itVec;
	--itVec;
	while (itVec != iteVec)
	{
		std::cout << *itVec << std::endl;
		++itVec;
	}

	std::cout << "\033[34m\n[----------reverse iteration----------]\033[37m" << std::endl;
	MutantStack<int> revNum;
	revNum.push(4);
	revNum.push(8);
	revNum.push(16);
	revNum.push(32);
	revNum.push(64);
	MutantStack<int>::reverse_iterator rit = revNum.rbegin();
	MutantStack<int>::reverse_iterator rite = revNum.rend();
	for (; rit != rite; ++rit)
	{
		std::cout << *rit << std::endl;
	}
	return (0);
}

// int	main()
// {
// 	std::cout << "\033[34m\n[----------const iterator Tests----------]\033[37m" << std::endl;
// 	MutantStack<int> mstack;
// 	mstack.push(10);
// 	mstack.push(20);
// 	mstack.push(30);

// 	const MutantStack<int> constStack = mstack;
// 	std::cout << "ordinary const iteration" << std::endl;
// 	MutantStack<int>::const_iterator it = constStack.cbegin();
// 	MutantStack<int>::const_iterator ite = constStack.cend();
// 	for (; it != ite; ++it)
// 	{
// 		std::cout << *it << std::endl;
// 	}
// 	std::cout << "reverse const iteration" << std::endl;
// 	MutantStack<int>::const_reverse_iterator rit = constStack.crbegin();
// 	MutantStack<int>::const_reverse_iterator rite = constStack.crend();
// 	for (; rit != rite; ++rit)
// 	{
// 		std::cout << *rit << std::endl;
// 	}
// 	return (0);
// }
