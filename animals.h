#ifndef __ANIMALS_H__
#define __ANIMALS_H__
#include <ostream>
#include<iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
class animals{
	protected:
	{
		char* name;
		//enum continent{America , Africa, Europe ,Asia, Antarctica};
		virtual string species()=0;
		virtual int life_expectancy()=0;
		virtual vector<string> continent()=0;
		virtual string food()=0;
		virtual double speed()=0;
		virtual viod print(ostream &os){
			os<< name << species() << life_expectancy()<<endl;
			 for (std::vector<string>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
				std::cout << ' ' << *it;
			 std::cout << '\n';
			os<< " "<< food() <<" " <<speed()<<" "<<endl;
		
	}
	public:
	{
		animals(string name)(this->name=name);
	}
};
class mammals: public animals{
	public:
		virtual float du_pregnancy()=0;
		virtual int young_born()=0;
};
class fish_sea_creatures:  public animals,public Iclownfish{
	public:
		virtual float lowest_depth()=0;	
};

class birds: public animals{
	public:
		virtual float typical_height();
		virtual float wing_span();
};
class lion: public mammals{
	float du_pregnancy();
	int young_born();
	string species();
	int life_expectancy();
	vactor<string> continent();
	string food();
	float speed();
public:
	lion(string name):mammals(name){}	
};
class monkey: public mammals{
	float du_pregnancy();
	int young_born();
	string species();
	int life_expectancy();
	vactor<string> continent();
	string food();
	float speed();
public:
	monkey(string name):mammals(name){}	
};
class goose: public birds{
	float lowest_depth();
	string species();
	int life_expectancy();
	vactor<string> continent();
	string food();
	float speed();
public:
	goose(string name):mammals(name){}	
};
class snowy_owl: public birds{
	float lowest_depth();
	string species();
	int life_expectancy();
	vactor<string> continent();
	string food();
	float speed();
public:
	snowy_owl(string name):birds(name){}
};
class dog: public mammals{
	float du_pregnancy();
	int young_born();
	string species();
	int life_expectancy();
	vactor<string> continent();
	string food();
	float speed();
public:
	dog(string name):mammals(name){}
};

class Iclownfish: public fish_sea_creatures{//in the  fish and in the sea creatures
	public:
		virtual void lowest_depth()=0;
};
#endif
