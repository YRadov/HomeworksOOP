#include "Point.h"
#include "Pets.h"
#include "Counter.h"
#include "Student.h"
#include <iostream>
using namespace std;

//показ текущего состояния счетчика
void ShowCounter(Counter a);
//выполнить выбранное действие со счетчиком
void Choice(int flag, Counter& a);
//показ адреса студента
void ShowAdress(Student& stud);

void main()
{
//*********************************************************************	
//                   1  Класс Point
//*********************************************************************	
//	cout << "---------TASK 1----------------\n";
//	int x, y;
//	//конструктор по-умолчанию
//	Point a1;
//	cout << "Default constructor\n";
//	cout << "a1.x = " << a1.GetX() << endl;
//	cout << "a1.y = " << a1.GetY() << endl;
//	cout << "-------------------------------\n";
//	//конструктор с параметрами
//	cout << "Constructor this params\n";
//	cout << "Enter the coordinates of a new point:\n";
//	cout << "x = ";
//	cin >> x;
//	cout << "y = ";
//	cin >> y;
//	Point a2(x, y);
//	cout << "a2.x = " << a2.GetX() << endl;
//	cout << "a2.y = " << a2.GetY() << endl;
//	cout << "-------------------------------\n";
//	//работа сеттеров
//	cout << "Setters work:\n";
//	cout << "Enter new coordinates for point1:\n";
//	cout << "x = ";
//	cin >> x;
//	cout << "y = ";
//	cin >> y;
//	a1.SetX(x);
//	a1.SetY(y);
//	cout << "a1.x = " << a1.GetX() << endl;
//	cout << "a1.y = " << a1.GetY() << endl;
//	cout << "-------------------------------\n";
//	//перемещение точки
//	cout << "Point movement\n";
//	cout << "Enter offsets for point1:\n";
//	cout << "dx = ";
//	cin >> x;
//	cout << "dy = ";
//	cin >> y;
//	a1.Move(x, y);
//	cout << "New coordinates for point1:\n";
//	cout << "a1.x = " << a1.GetX() << endl;
//	cout << "a1.y = " << a1.GetY() << endl;
//	cout << "-------------------------------\n";
//	cout << "-------------------------------\n";
//
//
////*********************************************************************	
////                   2  Класс Pets
////*********************************************************************	
//	cout << "---------TASK 2----------------\n";
//	Pets pet1(DOG,"Viva",4,false, LONG);
//	cout << "pet1 is a " << pet1.GetType(pet1.type)
//		<< "; \nit`s nickname is " << pet1.nickname
//		<< "; \nit has " << pet1.legs << " legs;"
//		<< "\nit " << pet1.HasWings(pet1.wings) << " wings;"
//		<< "\nit can "<< pet1.CanFly(pet1.wings)<<"."<< endl;
//	cout << "-------------------------------\n";
//	Pets pet2(PARROT, "Chak", 2, true, LONG);
//	cout << "pet2 is a " << pet2.GetType(pet2.type)
//		<< "; \nit`s nickname is " << pet2.nickname
//		<< "; \nit has " << pet2.legs << " legs;"
//		<< "\nit " << pet2.HasWings(pet2.wings) << " wings;"
//		<< "\nit can " << pet2.CanFly(pet2.wings) << "." << endl;
//	cout << "-------------------------------\n";
//	cout << "-------------------------------\n";
//
//
//*********************************************************************	
//                   3  Класс Counter
//*********************************************************************	
	//int temp;	
	//Counter counter;
	//ShowCounter(counter);
	//cout << "-------------------------------\n";
	//test constructors(all is ok:) )
	//Counter counter2(2,99999,8,2);
	//ShowCounter(counter2);
	//cout << "-------------------------------\n";
	//Counter counter3(3, 99999, -10);
	//ShowCounter(counter3);
	//cout << "-------------------------------\n";
	//Counter counter4(-4, 999999);
	//ShowCounter(counter4);
	//cout << "-------------------------------\n";
	//Counter counter5(5);
	//ShowCounter(counter5);
	//cout << "-------------------------------\n";

	//cout << "Enter parametrs:\n";
	//cout << "Min: ";
	//cin >> temp;
	//counter.SetMin(temp);
	//cout << "Max: ";
	//cin >> temp;
	//counter.SetMax(temp);
	//cout << "Current: ";
	//cin >> temp;
	//counter.SetCurrent(temp);
	//cout << "Shift: ";
	//cin >> temp;
	//counter.SetShift(temp);
	//ShowCounter(counter);
	//cout << "-------------------------------\n";
	//int flag = 1;
	//while (flag)
	//{
	//	cout << "\nSelect the action:\n1 - Change shift\n2 - Move counter\n";
	//	cout << "3 - Reset counter\n4 - Exit from this action\n";
	//	cin >> flag;
	//	if (flag != 4)
	//	{
	//		Choice(flag, counter);
	//		ShowCounter(counter);
	//	}
	//	else
	//		flag = 0;
	//}
	//cout << "-------------------------------\n";
	//cout << "-------------------------------\n";


	//cout << counter.point.GetX() << endl;
	//counter.point.SetX(10);
	//cout << counter.point.GetX() << endl;

//*********************************************************************	
//                   4  Класс Student
//*********************************************************************	
	Student student;
	//cout << "Not initialized student:\n";
	//ShowAdress(student);//валится прога????????????????????????
	cout << "\n********************************************\n";

	student.SetName("Yurii");
	student.SetLastName("Radov");
	student.SetPhone(775566);
	student.SetAdress("Odessa", "Vysotzky", 3, 21);
	cout << "Initialized student:\n"<<"-------------------\n";
	ShowAdress(student);
	cout << "\n********************************************\n";
	/**
	*Проверка класса Adress
	*/
	//Adress adress;// валится прога??????????????????????????????????????
	//Adress adress("Odessa", "Vysotzky", 3, 21);
	//cout << adress.GetCity() << endl;
	//cout << adress.GetStreet() << endl;
	//cout << adress.GetHouse() << endl;
	//cout<<adress.GetRoom()<<endl;
	//cout << "\n********************************************\n";

	student.SetName("Petr");
	student.SetLastName("Petrov");
	student.SetPhone(332244);
	student.SetAdress("Odessa", "Lenina", 1, 22);
	cout << "The student with the changed data:\n" << "----------------------------------\n";
	ShowAdress(student);
	cout << "\n********************************************\n";
	//char*name = "Ivan";
	//char*lastname = "Ivanov";
	//Student student2(name, lastname);//валится прога????????????????????
	//cout << student2.GetLastName() << endl;
	//cout << student2.GetName() << endl;
	cout << "\n********************************************\n";

	//Student student3 = student;//валится прога???????
	Student student3;
	student3.SetName("Ivan");
	student3.SetLastName("Ivanov");
	student3.SetPhone(111111);
	student3.SetAdress("Odessa", "Levitana", 1, 22);
	cout << "The new student:\n" << "----------------------------------\n";
	ShowAdress(student3);//валится прога???????
	
	//оценки за экзамены
	student.SetExams(5);
	student.SetExams(4);
	student.SetExams(5);
	student.ShowExams();


}//main
//***************************************************
//***************************************************
//***************************************************

void ShowCounter(Counter a)
{
	cout << "\n**********************************\n";
	cout << "\nNew state of the counter:\n"
		<< "min: "    << a.GetMin()     << endl
		<< "carrent:" << a.GetCurrent() << endl
		<< "max: "    << a.GetMax()     << endl
		<< "shift: "  << a.GetShift()   << endl;
	cout << "\n**********************************\n";

}
//***************************************************
void Choice(int flag, Counter& a)
{
	switch (flag)
	{
	case 1://изменить шаг
		cout << "Enter new shift: ";
		cin >> flag;
		a.ChangeShift(flag);
		break;
	case 2://сдвинуть счетчик
		cout << "Enter the shift value('+' - forward, '-' - back): ";
		cin >> flag;
		a.MoveCounter(flag);
		break;
	case 3://сбросить на ноль
		a.ResetCounter();
		break;
	default:
		cout << "Incorrect data! Try again.\n\n";
		break;
	}
}
//***************************************************
void ShowAdress(Student& stud)
{
	//cout << "\n**********************************\n";
		cout << stud.GetLastName() << " ";
		cout << stud.GetName() << endl;
		cout << "Phone nomber: "<< stud.GetPhone() << endl;
		cout << "City: " << stud.GetAdress().GetCity() << endl
			<< "Street: " << stud.GetAdress().GetStreet() << endl
			<< "House: " << stud.GetAdress().GetHouse() << endl
			<< "Room: " << stud.GetAdress().GetRoom() << endl;
	//cout << "\n**********************************\n";

}
