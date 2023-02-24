#pragma once
#include <string.h>
#include <stdio.h>

//abstract class
class Car
{
protected:
	char model[50], collor[20];
	int max_speed = 0;
	int passagers_count = 0;

	char pass[6][250];
	char driver[250];

public:
	virtual void refuel(float capacity) = 0;
	virtual char* get_model() = 0;
	virtual char* get_color() = 0;
	virtual int get_speed() = 0;

	
	void set_driver(char* name)
	{
		strcpy_s(driver, name);
	}

	

};

class Electric : Car
{
	float battery;

public:

	void refuel(float capacity)
	{
		this->battery = capacity;
	}

	void refuel(int liters)
	{
		printf("Wind shild wiper fluid refuled!\n");
	}

	void set_battery(float capacity)
	{
		this->battery = capacity;
	}
	char* get_model()
	{
		return this->model;
	}
	char* get_color()
	{
		return this->collor;
	}
	int get_speed()
	{
		return this->max_speed;
	}
	void add_pass(const char* name)
	{
		strcpy_s(pass[passagers_count++], name);
	}
	char* get_driver()
	{
		return driver;
	}

	void print_pass()
	{
		printf("Pasageri:\n");
		for (int i = 0; i < passagers_count; i++)
		{
			
			printf("%s\n", pass[i]);
		}
	}

	Electric(const char* model, const char* culoare, int max_speed,const char* driver, float capacity)
	{
		strcpy_s(this->model, model);
		strcpy_s(this->driver, driver);
		strcpy_s(this->collor, culoare);
		this->max_speed = max_speed;
		set_battery(capacity);
		
	}
};

class Internal : Car
{
	float reservoir;

public:
	void refuel(float capacity)
	{
		this->reservoir = capacity;
	}

	void refuel(int liters)
	{
		printf("Wind shild wiper fluid refuled!\n");
	}

	void set_reservoir(float capacity)
	{
		this->reservoir = capacity;
	}
	char* get_model()
	{
		return this->model;
	}
	char* get_color()
	{
		return this->collor;
	}
	int get_speed()
	{
		return this->max_speed;
	}
	void add_pass(const char* name)
	{
		strcpy_s(pass[passagers_count++], name);
	}
	char* get_driver()
	{
		return driver;
	}

	void print_pass()
	{
		printf("Pasageri:\n");
		for (int i = 0; i < passagers_count; i++)
		{
			
			printf("%s\n", pass[i]);
		}
	}

	Internal(const char* model, const char* culoare, int max_speed, const char* driver, float capacity)
	{
		strcpy_s(this->model, model);
		strcpy_s(this->driver, driver);
		strcpy_s(this->collor, culoare);
		this->max_speed = max_speed;
		set_reservoir(capacity);

	}
};