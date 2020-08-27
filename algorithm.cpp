// <algorithm>


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
