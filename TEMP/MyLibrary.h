#pragma once
#include<iostream>
using namespace std;

class PC {
protected:
	std::string name;
	std::string cpu;
	std::string gpu;
	std::string ssd;
	std::string ram;
	double price;
public:
	PC() = default;
	PC(std::string name, std::string cpu, std::string gpu, std::string ssd, std::string ram) 
		: name(name), cpu(cpu), gpu(gpu), ssd(ssd), ram(ram), price(0.0) {}

	virtual void print() {	
		std::cout << "name: " << name << std::endl;
		std::cout << "cpu: " << cpu << std::endl;
		std::cout << "gpu: " << gpu << std::endl;
		std::cout << "ram: " << ram << std::endl;
		std::cout << "ssd: " << ssd << std::endl;
	}

	virtual double getPrice() { return price; }
};

class Office : public PC {
private:
	std::string micro;
public:
	Office() = default;
	Office(std::string name, std::string cpu, std::string gpu, std::string ssd, std::string ram, std::string micro)
		: PC(name, cpu, gpu, ssd, ram), micro(micro) {
		price = 10000;
	}

	void print() override {
		PC::print();
		std::cout << "Micro: " << micro << std::endl;
	}

	double getPrice() override { return price; }
};

class GamePC : public PC {
private:
	std::string keyboard;
	std::string headphones;
public:
	GamePC() = default;
	GamePC(std::string name, std::string cpu, std::string gpu, std::string ssd, std::string ram, std::string keyboard, std::string headphones)
		: PC(name, cpu, gpu, ssd, ram), keyboard(keyboard), headphones(headphones){
		price = 20000;
	}

	void print() override {
		PC::print();
		std::cout << "Keyboard: " << keyboard << std::endl;
		std::cout << "Headphones: " << headphones << std::endl;
	}

	double getPrice() override { return price; }
};

class HomePC : public PC {
private:
	std::string camera;
public:
	HomePC() = default;
	HomePC(std::string name, std::string cpu, std::string gpu, std::string ssd, std::string ram, std::string camera)
		: PC(name, cpu, gpu, ssd, ram), camera(camera) {
		price = 30000;
	}

	void print() override {
		PC::print();
		std::cout << "Camera: " << camera << std::endl;
	}

	double getPrice() override { return price; }
};