#include <stdio.h>
int main(){

float w_item1, w_item2, n_item1, n_item2, item1, item2, avg;

printf("Item 1 value and no. of sales seperated by space: ");
scanf("%f %f", &w_item1, &n_item1);

printf("Item 2 value and no. of sales seperated by space: ");
scanf("%f %f", &w_item2, &n_item2);

item1 = w_item1 * n_item1;
item2 = w_item2 * n_item2;

avg =  (item1 + item2)/(n_item1 + n_item2);

printf("Average Value = %f\n", avg);
return 0;
}
