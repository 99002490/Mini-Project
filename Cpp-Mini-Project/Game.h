#ifndef __GAME_H
#define __GAME_H

#include<iostream>
#include<string>
#include<cstdint>
#include"GameCalculations.h"
#include <list>
#include <iterator>

class Game
{
protected:

	std::list <GameCalculate> game;

public:
	void addGame(std::string,std::string,std::string,std::string,std::string,double,double,double,double,double,double,double,double,double,std::string,std::string);
	double highestSalesInNA(std::string);
	double lowestSalesInNA(std::string);
	//double highestSalesInEU(std::string);
	//double lowestSalesInEU(std::string);
	//double highestCriticScore(std::string);
	//double lowestCriticScore(std::string);
	int countAll();
};


#endif