#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

class Movie : public Media {
 public:
  Movie(int year, char* title, char* director, int duration, float rating);
  char* getDirector();
  int getDuration();
  float getRating();
 private:
  char* director;
  int duration;
  float rating;
  
};
