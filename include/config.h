#ifndef _H_CONFIG_CC
#define _H_CONFIG_CC

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

#define DEFAULT_FILE "etc/cc.config"


class Config {

private:
  char *file = NULL;

public:
  Config( char *file );
  ~Config( );
/*
  bool reload( void );

  char *get_value( char *key );
  char *get_value( char *key, char *def );



  char *as_string( void );
*/
};
#endif
