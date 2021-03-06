#pragma once
class Adress
{
	char * city = nullptr;
	char * street = nullptr;
	int house;
	int room;

public:

	void SetCity(char* city);
	void SetStreet(char* street);
	void SetHouse(int house);
	void SetRoom(int room);

	char* GetCity();
	char* GetStreet();
	int   GetHouse();
	int   GetRoom();

	//Adress() :city(nullptr), street(nullptr), house(0), room(0){};
	Adress();
	
	Adress(char* city, char* street, int house,	int room);

	Adress(const Adress & original):Adress(original.city, original.street, original.house, original.room) {};
	~Adress();
};

