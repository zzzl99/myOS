#include<stdio.h>
public single{
	public:
		public single* getinstance(){
			if(instance == nullptr){
				instance = new single();
			}
			return instance;
		}
	private:
		simgle(){};
		static single* instance;
}

single* single::instance == nullptr;
int main(){
	single* single::instance == nullptr;
	single* single1 = single::getinstance();
	single* single2 = single::getinstance();
	return 0;
}
