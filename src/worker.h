#include <string>
#include <vector>
#include <map> 
#include <iostream>
#include "handlers.h"

#ifndef WORKER_H
#define	WORKER_H
using namespace std;

typedef int (*pfunc)(vector<string> arg, table tbl);

class worker {
public:
    virtual int run(vector<string> arg) { cout << "worker";  return 0; }
};

#endif