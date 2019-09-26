#include<string>
#include<vector>

/*
Write function prototype for function loop_vector_w_index with no parameters.

*/
void loop_vector_w_index(); //vector is created within function


/*
Write function prototype for function loop_vector_w_index with a vector of int pass by value parameter.

*/
void loop_vector_w_index(std::vector<int> nums); //vector is most likely created in main
//will create copy of vector when function is called bc it's pass by value and not reference


/*
Write function prototype for function loop_vector_w_index with a vector of int pass by reference parameter.
*/
void loop_vector_w_index_ref(std::vector<int>& nums);

/*
Write function prototype for function loop_vector_w_index with a vector of int const pass by reference parameter.
*/

void loop_vector_w_index_const(const std::vector<int>& nums);

/*
Iterate vector with a for ranged loop (use auto)
*/

void loop_vector_w_for_ranged(std::vector<int>& nums);

void loop_vector_w_for_ranged_ref_var(std::vector<int>& nums);


