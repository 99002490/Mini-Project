#include "Game.h"
#include "Game.cpp"
#include "GameCalculations.h"
#include "GameCalculations.cpp"
#include <gtest/gtest.h>
#include <bits/stdc++.h>
using namespace std;
#include <list>
#include <iterator>

namespace {

class GameDbtest : public ::testing::Test {

protected:
  void SetUp() 
  { 
  
  			std::list<string> res;
     		std::list<string> ::iterator iter;
     		std::string name;std::string platform;std::string year;std::string genre;std::string publisher;std::string dev;std::string rating;
     		double naSales,euSales,jpSales,otherSales,globalSales,criticScore,criticCount,userScore,userCount;
    		std::string S, T;
    		fstream fin;
    		int count=1;
    		fin.open("Video_Game_Sales.csv", ios::in);
    		while(getline(fin, S))
    		{
    			stringstream X(S);
    			while (getline(X, T,'\n'))
   			 {
   	 			res.push_back(T);
    			 }
   	        }
    		iter=res.begin();
   		 	++iter;
    		for(;iter!=res.end();++iter)
    		{
    			//std::cout<<*iter<<endl;
    			stringstream ss(*iter); 
    			while (ss.good()) 
    			{ 
        			std::string substr; 
        			getline(ss, substr, ','); 
        			switch(count)
        			{
        				case 1:
        					name=substr;
        					break;
        				case 2:
        					platform=substr;
        					break;
					case 3:
        					year=substr;
        					break;
					case 4:
        					genre=substr;
        					break;
					case 5:
        					publisher=substr;
        					break;
					case 6:
        					naSales=stoi(substr);
        					break;
					case 7:
        					euSales=stoi(substr);
        					break;
					case 8:
        					jpSales=stoi(substr);
        					break;
					case 9:
        					otherSales=stoi(substr);
        					break;
					case 10:
        					globalSales=stoi(substr);
        					break;
					case 11:
        					criticScore=stoi(substr);
        					break;
        				case 12:
        					criticCount=stoi(substr);
        					break;
					case 13:
        					userScore=stoi(substr);
        					break;
					case 14:
        					userCount=stoi(substr);
        					break;
					case 15:
        					dev=substr;
        					break;
					case 16:
        					rating=substr;
        				c.addGame(name,platform,year,genre,publisher,naSales,euSales,jpSales,otherSales,globalSales,criticScore,criticCount,userScore,userCount,dev,rating);
        						name="";platform="";year="";genre="";publisher="";naSales=0.0;euSales=0.0;jpSales=0.0;otherSales=0.0;globalSales=0.0;criticScore=0.0;criticCount=0.0;userScore=0.0;userCount=0.0;dev="";rating="";
						
						break;
        			
        			}
        			++count;
        			
    			} 
  		}
    
  }
  void TearDown() {}
  Game c;
};

TEST_F(GameDbtest, DefaultConstructor1){
c.addGame("avacodo","GBA","2020","Sports","Nintendo",6700,100,120,150,140,180,10,11,12,"Nintendo","E");
EXPECT_EQ(1,c.countAll());
}
TEST_F(GameDbtest, highestSales){
EXPECT_DOUBLE_EQ(0,c.highestSalesInNA("NA_Sales"));

}
TEST_F(GameDbtest, lowestSales){
EXPECT_DOUBLE_EQ(0,c.lowestSalesInNA("JP_Sales"));

}

}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    } // namespace

