#include "rate.h"
const double rate = .12;
double taxes(struct worker w) 
{
  return w.wage*w.hours*rate;
}

