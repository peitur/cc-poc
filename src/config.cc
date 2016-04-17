#include "../include/config.h"


Config::Config( char *file ){

}

Config::~Config( ){
  if( this->file ){
    delete []this->file;
  }
}
