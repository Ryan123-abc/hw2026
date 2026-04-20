#include"fruit_products.h"
#include<string>
#include<cmath>
using namespace std;

bool is_in_stock(ProductInfo products[], int size, string input, ProductInfo *found, ProductInfo *recommend){
	int found_index = -1;
	for(int i=0; i<size; i++){
		if(input.find(products[i].name) != string::npos){
			found_index = i;
			*found = products[i];
			break;
		}
	}

	if(found_index == -1){
		return false;
	}
	
	int min_diff = -1;
	int best = -1;
	for(int i=0; i<size; i++){
		if(products[i].category == found->category && i != found_index){
			int current_diff = abs(products[i].price - found->price);
			if(min_diff == -1 || min_diff > current_diff){
				min_diff = current_diff;
				best = i;
			}
		}
	}

	if(best != -1){
		*recommend = products[best];
	}

	return true;
}

