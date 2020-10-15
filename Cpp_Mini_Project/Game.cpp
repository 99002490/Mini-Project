#include<iostream>
#include<string>
#include <list>
#include <iterator>
#include"GameCalculations.h"
#include"Game.h"


void Game::addGame(std::string name,std::string platform,std::string year,std::string genre,std::string publisher,double naSales,double euSales,double jpSales,double otherSales,double globalSales,double criticScore,double criticCount,double userScore,double userCount,std::string dev,std::string rating){
game.push_back(GameCalculate(name,platform,year,genre,publisher,naSales,euSales,jpSales,otherSales,globalSales,criticScore,criticCount,userScore,userCount,dev,rating));
}
double Game:: highestSalesInNA(std::string sales)
{
    std:: list<GameCalculate> :: iterator iter = game.begin();
    auto maxproduction  = iter->getMaxSalesInNA();
    return maxproduction;

}
double Game:: lowestSalesInNA(std::string sales)
{
    std:: list<GameCalculate> :: iterator iter = game.begin();
    auto minproduction  = iter->getMinSalesInNA();
    iter++;
    for(;iter!=game.end();++iter)
    {
        if(minproduction < iter->getMinSalesInNA())
        {
            minproduction = iter->getMinSalesInNA();
        }

    }
    return minproduction;

}

int Game:: countAll()
{
	
    std:: list<GameCalculate> :: iterator iter ;/*
 for(iter=crop.begin();iter!=crop.end();++iter)
    
        std::cout<<&(*iter->display())<<"\n";*/
   return game.size();
}

