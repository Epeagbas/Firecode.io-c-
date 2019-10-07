#include<iostream>
#include<string>

bool are_all_characters_unique(std::string str){
	for(int i=0; i<str.size(); i++){
		for(int j=0; j<=str.size(); j++){
			if(i==j){
				continue;
			}
			if(str[i]==str[j]){
				return false;
			}
		}
	}
return true;
}
int main(){
	std::string eval_s;
	std::cout<<"enter the string you want to evaluate: ";
	std::cin>>eval_s;
	bool evaluation=are_all_characters_unique(eval_s);
	if(evaluation==0){
		std::cout<<"string is not unique"<<std::endl;
	}else{
		std::cout<<"string is unique"<<std::endl;
	}
	return 0;
}
