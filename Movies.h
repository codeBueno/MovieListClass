

/* 
 * File:   Movie.h
 * Author: Dan
 *
 * Created on March 17, 2019, 2:08 PM
 */

#ifndef MOVIES_H
#define MOVIES_H

#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

class Movies {
    public:
        Movies();
        void AskForTopTitles();
        void Print();   
    private:
        vector<string> topTitles;
        vector<int> topTitleYears;
        vector<string> topTitleRatings;     

};
    

#endif /* MOVIES_H */

