#include "search.h"

/*
*  Programmer: Onat Calik
*  Date : September 19, 2016
*
*  Honor Code : I have neither given nor received any unauthorized assistance with this program.
*/

template <typename T>
SearchResultType<T> linear_search(const std::vector<T> &list, const T &value)
{
	bool result = false; //bool to be stored in struct
	long i = 0;    //used to count
	long size = list.size();  //size of the list
	T v = list[0];  // value to be stored in struct

	while (i < size)
	{
		if (list[i] == value)
		{
			result = true;
			v = list[i];
			break;
		}

		else
		{
			v = list[i];
			i++;
		}
	}

	if (i == size)
	{
		i--;
	}
	return SearchResultType<T>(result, v, i);
}


template <typename T>
SearchResultType<T> iterative_binary_search(const std::vector<T> &list, const T &value)
{
	bool result = false; //bool to be stored in struct
	T v;				//value to be stored in struct
	long lo = 0;		// beginning of the list
	long hi = list.size() - 1;  // end of the list
	long mid = 0; // middle of the list 

	while (lo <= hi)
	{
		mid = lo + (hi - lo) / 2;
		if (value < list[mid])
		{
			hi = mid - 1;
			v = list[mid];
		}

		else if (value > list[mid])
		{
			lo = mid + 1;
			v = list[mid];
		}

		else
		{
			result = true;
			v = list[mid];
			return SearchResultType<T>(result, v, mid);
			
		}
	}

	return SearchResultType<T>(result, v, mid);
	

}
template <typename T>
SearchResultType<T> rSearch(const std::vector<T> &list,
	const T &value, long lo, long hi)
{
	bool result = false; //bool to be stored in struct
	long mid = lo + (hi - lo) / 2;// middle of the list
	T v = list[0];	//value to be stored in struct

	if (lo > hi)
	{
		if (mid == list.size())
		{
			mid--;
		}
		v = list[mid];
		return SearchResultType<T>(result, v, mid);
	}

	if (value < list[mid])
	
	{
		return rSearch(list, value, lo, mid - 1);
	}

	else if (value > list[mid])
	{
		return rSearch(list, value, mid + 1, hi);
	}

	else
	{
		result = true;
		v = list[mid];
		return SearchResultType<T>(result, v, mid);		
	}


	return SearchResultType<T>(result, v, mid);
}


template <typename T>
SearchResultType<T> recursive_binary_search(const std::vector<T> &list, const T &value)
{
	long hi = list.size() - 1;
	long lo = 0;
	return rSearch(list, value, lo, hi);
}

