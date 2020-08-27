// <algorithm>


/*Non-modifying sequence operations */

// Checks if unary predicate p returns true for all elements in the range [first, last).
template<typename InputIt, typename UnaryPredicate>
constexpr bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
	return std::find_if_not(first, last, p) == last;
}


/*Modifying sequence operations */

// Ignores all elements that are equal to value.
template<typename InputIt, typename OutputIt, typename T>
OutputIt remove_copy(InputIt first, InputIt last, OutputIt d_first, const T& value) 
{
	for (; first != last; ++first) {
		if (!(*first == value)) {
			*d_first++ = *first;
		}
	}
	return d_first;
}

// Ignores all elements for which predicate p returns true
template<typename InputIt, typename OutputIt,typename UnaryPredicate>
OutputIt remove_copy_if(InputIt first, InputIt last, OutputIt d_first, UnaryPredicate p)
{
	for (; first != last; ++first) {
		if (!p(*first)) {
			*d_first++ = *first;
		}
	}
	return d_first;
}
