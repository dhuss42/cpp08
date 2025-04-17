
#include "Span.hpp"

/*--------------------------------------------------*/
/* - Counts elements to add 						*/
/* - makes sure there is enough space				*/
/* - inserts them at the end of _spn				*/
/* std::distance 									*/
/* 	- returns distance between two iterators		*/
/* insert() 										*/
/* 	- inserts the values ranging from begin 		*/
/* 		to end at _spn.end()  						*/
/*--------------------------------------------------*/
template <typename It>
void	Span::addNumberRange(It begin, It end)
{
	if (std::distance(begin, end) + _spn.size() > _N)
		throw (SpanFull());
	_spn.insert(_spn.end(), begin, end);
}
