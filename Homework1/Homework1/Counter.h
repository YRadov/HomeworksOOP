#pragma once
class Counter
{

	int min;
	int max;
	int current;
	int shift;

public:


	void SetMin(int min);
	void SetMax(int max);
	void SetCurrent(int current);
	void SetShift(int shift);

	int GetMin();
	int GetMax();
	int GetCurrent();
	int GetShift();

	Counter() : min(0), max(99999), current(0), shift(1) {};

	Counter(int min, int max, int current, int shift);

	Counter(int min, int max, int current) : Counter(min, max, current, 1) {};
	Counter(int min, int max) : Counter(min, max, 0, 1) {};
	Counter(int min) : Counter(min, 99999, 0, 1) {};


	~Counter();

	//увеличение счетчика на 1

	//увеличение на заданный сдвиг

	//обнуление счетчика

	//установка минимального значения

	//установка максимального значения


};

