#ifndef worker_h
#define worker_h
#include "taxID.h"
struct worker
{
  struct taxID id;
  double hours;
  double wage;
};
#endif