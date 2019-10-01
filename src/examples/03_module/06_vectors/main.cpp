#include <string>
#include "vec.h"

int main() 
{
	loop_vector_w_index();
	std::vector<int> result = ret_vec_int();
	std::vector<int> nums = { 99, 55, 1, 3, 66 };
	// std::vector<int> nums (9,1); //initializes nums vector to nine number 1s
	std::vector<std::string> strs(9, " "); //this initializes list to 9 empty strings (spaces) but can initialize to anything in quotes

	loop_vector_w_index(nums);

	loop_vector_w_index_ref(nums);

	loop_vector_w_index_const(nums);

	loop_vector_w_for_ranged(nums);
	
	return 0;
}