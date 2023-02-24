#include <stdio.h>
#include <math.h>

double arithmetic_average(double sum, int total) {
  return sum / total;
}

double sum_arr(double *arr, int length) {
  float total = 0;

  for (int i = 0; i < length; i++)
  {
    total = total + arr[i];
  }
  
  return total;
}

double standard_deviation(double *arr, int length) {
  double total = 0;
  double arm_avg = arithmetic_average(sum_arr(arr, length), length);
  
  for (int i = 0; i < length; i++)
  {
    total = total + ((arr[i] - arm_avg)*(arr[i] - arm_avg));
  }
  
  return sqrt(total / length);
}

void main(void) {
  double array[] = {6.3, 2.1, 5.6, 9.0, 3.1, 5.33, 4.8, 1.12, 7.77, 0.6, 8.4};

  printf("Standard deviation: %lf\n", standard_deviation(array, 11));
}