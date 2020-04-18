/*
Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).

For example,

{ true,  true,  true,  false,
  true,  true,  true,  true,
  true,  false, true,  false,
  true,  false, false, true,
  true,  true,  true,  true,
  false, false, true,  true }

The correct answer would be 17.

Hint: Don't forget to check for bad values like null/undefined

*/

#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count);

void main()
{
    //going to use as input to the function the given array in the sample test 
    const bool sheep[] = {
      true,  true,  true,  false,
      true,  true,  true,  true,
      true,  false, true,  false,
      true,  false, false, true,
      true,  true,  true,  true,
      false, false, true,  true
    };
    // I am going to use size_t count as the size of the array given 
    size_t count  = sizeof(sheep);
    size_t countOfSheep = count_sheep(&sheep, count);
    printf("The size of the array is %zd\n", countOfSheep);
}

size_t count_sheep(const bool *sheep, size_t count) 
{
    size_t counter;
    for(int i = 0; i < (int)count; i++){
        if(sheep[i])
            counter++;
    }
    return counter;
}
