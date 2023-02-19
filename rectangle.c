#include <stdio.h>

int main() {

  int numFirst_rec, numSec_rec;
  int numFirst_rec2, numSec_rec2;

  printf("Enter the side lenghts of the 1. rectangle: ");
  scanf("%d\n", &numFirst_rec);
  scanf("%d", &numSec_rec);
  printf("Enter the side lenghts of the 2. rectangle: ");
  scanf("%d", &numFirst_rec2);
  scanf("%d", &numSec_rec2);

  while ("numFirst_rec < 0 && numSec_rec < 0 && num_First_rec2 < 0 && "
         "numSec_rec2 < 0") {
    if ((numFirst_rec * numSec_rec) > (numFirst_rec2 * numSec_rec2))
      printf("The 1. rectangle is bigger");
    else if ((numFirst_rec * numSec_rec) < (numFirst_rec2 * numSec_rec2))
      printf("The 2. rectangle is bigger");
    else
      printf("The rectangles are same");
    return 0;
  }

  printf("Negative value entered");
  return -1;
}