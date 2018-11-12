#include "animals.h"
void animals::print(animals a)
{
	std::cout<< "name: " << a.name << endl;
	std::cout<< "species: " << a.species << endl;
	std::cout<< "life_expectancy: " << a.life_expectancy << endl;
	std::cout<< "continent: " << a.continent << endl;
	std::cout<< "food: " ;
	for(int i=0; i<strlen(a.food);i++)
		std<< cout << a.food[i] << endl;
	std::cout<< "speed: " << a.speed << endl;	
}
//----------------------
float lion::du_pregnancy(){
	return 5.5;	
	}
int lion::young_born(){
	return 2;
}
string lion::species(){
	return "afrikn";
}
int lion::life_expectancy(){
	return 60;
}
vactor<string> lion::continent(){
	static vactor<string> v = {"AFRIKA","America"};
	return v;
}
string lion::food(){
	return "meat";
}
float lion::speed(){
	return 140;	
}
//-------------------------
float monkey::du_pregnancy(){
	return 4;	
	}
int monkey::young_born(){
	return 1;
}
string monkey::species(){
	return "dex";
}
int monkey::life_expectancy(){
	return 40;
}
int monkey::continent(){
	return "ASIA";
}
string monkey::food(){
	return "vat";
}
float monkey::speed(){
	return 50;	
}
//-------------------
float goose::lowest_depth(){
	return 55;
}
string goose::species(){
	return "dex";
}
int goose::life_expectancy(){
	return 40;
}
int goose::continent(){
	return "America";
}
string goose::food(){
	return "vat";
}
float goose::speed(){
	return 15;	
}
//-----------------------
float snowy_owl::lowest_depth(){
	return 44;
}
string snowy_owl::species(){
	return "dex";
}
int snowy_owl::life_expectancy(){
	return 15;
}
int snowy_owl::continent(){
	return "America";
}
string snowy_owl::food(){
	return "vat";
}
float snowy_owl::speed(){
	return 77;	
}
//-----------------------
float dog::du_pregnancy(){
	return 1;	
	}
int dog::young_born(){
	return 1;
}
string dog::species(){
	return "boldog";
}
int dog::life_expectancy(){
	return 8;
}
int dog::continent(){
	return "Asia";
}
string dog::food(){
	return "all";
}
float dog::speed(){
	return 45;	
}
//--------------------

