#include<iostream>
#include<string>
#include "GameCalculations.h"

GameCalculate::GameCalculate():name(""),platform(""),year(""),genre(""),publisher(""),naSales(0.0),euSales(0.0),jpSales(0.0),otherSales(0.0),globalSales(0.0),criticScore(0.0),criticCount(0.0),userScore(0.0),userCount(0.0),dev(""),rating(""){}
GameCalculate::GameCalculate(std::string name,std::string platform,std::string year,std::string genre,std::string publisher,double naSales,double euSales,double jpSales,double otherSales,double globalSales,double criticScore,double criticCount,double userScore,double userCount,std::string dev,std::string rating){}
double GameCalculate::getMaxSalesInNA(){
	double arr[5]={naSales,euSales,jpSales,otherSales,globalSales};
	double max=0;
	for(int i=0;i<5;i++){
		if(arr[i]<arr[i+1]){
			max=arr[i+1];
		}
		else{
			max=arr[i];
		}
	}
	return max;
}
double GameCalculate::getMinSalesInNA(){
	double arr[5]={naSales,euSales,jpSales,otherSales,globalSales};
	double min=0;
	for(int i=0;i<5;i++){
		if(arr[i]<arr[i+1]){
			min=arr[i];
		}
		else{
			min=arr[i+1];
		}
	}
	return min;
}

