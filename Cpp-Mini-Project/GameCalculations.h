#ifndef __GAMECALCULATIONS_H
#define __GAMECALCULATIONS_H

#include<string>
#include<cstdint>
#include<tuple>


class GameCalculate
{
protected:

	std::string name;std::string platform;std::string year;std::string genre;std::string publisher;std::string dev;std::string rating;
	double naSales;double euSales;double jpSales;double otherSales;double globalSales;double criticScore;double criticCount;double userScore;double userCount;
	

public:
	GameCalculate();
	GameCalculate(std::string,std::string,std::string,std::string,std::string,double,double,double,double,double,double,double,double,double,std::string,std::string);
	double getMaxSalesInNA();
	double getMinSalesInNA();
};

#endif

