#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <vector>

/*
*  Struct: SearchResultType
*  Purpose: Stores the data for the search result.
*  found - Stores true if the word is found.
*  value - Stores the found item.
*  index - Stores the index of the found item.
*
*/
template <typename T> struct SearchResultType {
  SearchResultType(bool f, T &v, long i) : found(f), value(v), index(i){};
  bool found;
  T value;
  long index;
};

/*
*  Function: linear_search
*  Purpose: Search for the given value starting from
*  the beginning of a given list if possible.
*  list - The vector to be searched for value.
*  value - The value to be searched.
*/
template <typename T>
SearchResultType<T> linear_search(const std::vector<T> &list, const T &value);


/*
*  Function: iterative_binary_search
*  Purpose: Search for the given value iteratively
*  from a given list if possible.
*  list - The vector to be searched for value.
*  value - The value to be searched.
*/
template <typename T>
SearchResultType<T> iterative_binary_search(const std::vector<T> &list,
                                            const T &value);
/*
*  Function: recursive_binary_search
*  Purpose: Search for the given value recursively
*  from a given list if possible.
*  list - The vector to be searched for value.
*  value - The value to be searched.
*/
template <typename T>
SearchResultType<T> recursive_binary_search(const std::vector<T> &list,
                                            const T &value);
/*
*  Function: rSearch
*  Purpose: A helper function for recursive_binary_search function.
*  list - The vector to be searched for value.
*  value - The value to be searched.
*  lo - The beginning of the list.
*  hi - The end of the list.
*/
template <typename T>
SearchResultType<T> rSearch(const std::vector<T> &list,
	const T &value, long lo, long hi);

#include "search.txx"

#endif // _SEARCH_H_
