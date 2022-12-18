#include <iostream>
#include "Solution.h"

int main()
{
  vector<int> test{2,7,11,15};

  int target = 9;

  Solution solver;
  vector<int> res = solver.twoSum(test, target);

  if(res.size())
  {
    cout << to_string(test[res[0]]) + "+" + 
            to_string(test[res[1]]) + "=" + 
            to_string(target) << endl;
  }
  else
  {
    cout << "Failed" << endl;
  }
  return 0;
}
