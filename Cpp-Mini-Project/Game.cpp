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
/*
double Game:: highestSalesInEU(std::string sales)
{
    std:: list<GameCalculate> :: iterator iter = game.begin();
    auto maxarea  = iter->getmaxarea();
    iter++;
    for(;iter!=game.end();++iter)
    {
        if(maxarea < iter->getmaxarea())
        {
            maxarea = iter->getmaxarea();
        }

    }
    return maxarea;

}
double Game:: lowestSalesInEU(std::string sales)
{
    std:: list<GameCalculate> :: iterator iter = game.begin();
    auto minarea  = iter->getminarea();
    iter++;
    for(;iter!=game.end();++iter)
    {
        if(minarea < iter->getminarea())
        {
            minarea = iter->getminarea();
        }

    }
    return minarea;

}
double Game:: lowestCriticScore(std::string sales)
{
    std:: list<GameCalculate> :: iterator iter = game.begin();
    auto minyield = iter->getminyield();
    iter++;
    for(;iter!=game.end();++iter)
    {
        if(minyield < iter->getminyield())
        {
            minyield = iter->getminyield();
        }

    }
    return minyield;

}
double Game:: highestCriticScore(std::string sales)
{
    std:: list<GameCalculate> :: iterator iter = game.begin();
    auto maxyield  = iter->getmaxyield();
    iter++;
    for(;iter!=game.end();++iter)
    {
        if(maxyield < iter->getmaxyield())
        {
            maxyield = iter->getmaxyield();
        }

    }
    return maxyield;

}
*/
int Game:: countAll()
{
	
    std:: list<GameCalculate> :: iterator iter ;/*
 for(iter=crop.begin();iter!=crop.end();++iter)
    
        std::cout<<&(*iter->display())<<"\n";*/
   return game.size();
}

