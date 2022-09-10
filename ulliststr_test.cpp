/* Write your test code for the ULListStr in this file */

#include <iostream>
#include "ulliststr.h"
using namespace std;

int main(int argc, char* argv[])
{
	ULListStr data;
	/*
	//Case 1: standard simple case. For only one Item, calls all 6 standard functions

	data.push_back("10");
		data.push_front("11");
		std::cout<<data.front()<<"\n"<<std::endl;//prints out front
		std::cout<<data.back()<<"\n"<<std::endl;//prints out back
	
	std::cout<<data.get(0)<<std::endl;
		std::cout<<data.get(1)<<std::endl;
			data.pop_front();
	std::cout<<data.get(0)<<std::endl;

		data.pop_back();
			
		*/
		
		/*
	//	Case 2: creates 3 Items, 1 partially filled, 1 completely filled, 1 partially filled, using both push_front and push_back

		data.push_front("a");
			data.push_front("b");
				data.push_front("c");
					data.push_front("d");
						data.push_front("e");
							data.push_front("f");
								data.push_front("g");
									data.push_front("h");
										data.push_front("i");
											data.push_front("j");
												data.push_front("k");
													data.push_front("l");
														data.push_front("m");
															data.push_front("n");
		data.push_back("a");
			data.push_back("b");
				data.push_back("c");
					data.push_back("d");
						data.push_back("e");
							data.push_back("f");
								data.push_back("g");
		for(int i=0; i<20; i++){
	cout<<data.get(i)<<endl;}
*/
/*
//case 3: calling pops on  starting empty arrays

data.pop_back();
data.pop_front();
*/

//case 4: calling pops on arrays that did not start as empty
/*data.push_front("a");
data.pop_back();// after this, we should really delete the Item
data.pop_front();

data.push_back("b");
data.pop_front();
data.pop_back();*/

							
	//runtime requirements [X]
	//edge cases: call pops on an empty array and a=have cases of multiple items that aren't completely full[ ]
	//arrsize=10?[ ]
}