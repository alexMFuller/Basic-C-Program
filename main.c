#include "worker.h"
#include <stdio.h>
#include "rate.h"

int main()
{
  struct worker w;
  printf("Enter tax ID: ");
  scanf("%d", &(w.id.ss));
  printf("ID = %d. Enter hours: ", w.id.ss);
  scanf("%lf", &(w.hours));
  printf("Hours = %.2lf. Enter wage: ", w.hours);
  scanf("%lf",&(w.wage));
  printf("Wage = $%.2lf.\n",w.wage);
  printf("Earnings = $%.2lf.\n",w.wage*w.hours);
  double t = taxes(w);
  printf("Tax is $%.2lf.\n", t );
  return 0;
}