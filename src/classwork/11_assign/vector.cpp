#include "vector.h"
#include<iostream>

//
template<typename T>
Vector<T>::Vector()
	:size{0}, nums{nullptr}, space{0}
{

}
template<typename T>
Vector<T>::Vector(size_t sz)
	:size{sz}, nums{new T[sz]}, space{sz}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}
template<typename T>
Vector<T>::Vector(const Vector<T> & v)
	:size{ v.size }, nums{ new T[v.size] }, space{v.size}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T> & v) //copy assignment
{
	if (this == &v)//if object is trying to copy itself, don't change anything, just return pointer
	{
		return *this; //avoids self copy
	}

	if (v.size <= space)
	{
		for (size_t i = 0; i < v.size; ++i)
		{
			nums[i] = v.nums[i];
		}

		size = v.size;

		return *this;
	}

	T* temp = new T[v.size]; //creating temporary array (copy) of same size and values
	
	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}

	delete[] nums;
	nums = temp;
	size = v.size;
	space = v.size; //could also do size=space=v.size;
	
	return *this; //returning this instance of object at this instant
}
template<typename T>
Vector<T>::Vector(Vector<T> && v)//move constructor
	:size{v.size}, nums{v.nums}
{
	v.size = 0;
	v.nums = nullptr;
}
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v)//move assignment
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;

	return *this;
}
template<typename T>
void Vector<T>::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}

	T* temp = new T[new_allocation];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];
	}

	delete[] nums;
	nums = temp;
	
	space = new_allocation;

}
template<typename T>
void Vector<T>::Resize(size_t new_size)
{
	Reserve(new_size);

	for (size_t i = size; i < new_size; ++i)
	{
		nums[i] = 0;
	}

	size = new_size;
}
template<typename T>
void Vector<T>::Push_Back(T value)
{
	if (space == 0)
	{
		Reserve(RESERVE_DEFAULT_SIZE);
	}
	else if (size == space)
	{
		Reserve(RESERVE_SPACE_MULTIPLIER*space);
	}

	nums[size] = value;
	++size;
}
template<typename T>
Vector<T>::~Vector()
{
	std::cout << "delete array...";
	delete[] nums;
}

template class Vector<int>;
template class Vector<double>;