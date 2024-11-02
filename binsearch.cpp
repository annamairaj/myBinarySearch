using namespace std;
#include <iostream>
// Name: Anna Mairaj
// Compiler: g++
// --------------------------------------------
//Algorithm
//procedure binarySearch (int L[], x)
//repeat
//middle := floor ((first + last) / 2)
//if (x== L[middle]) then
//return middle;
//else if (x < L[middle]) then
//last := middle - 1;
//else if (x > L[middle]) then
//first := middle + 1;
//end if
//until first > last
//return -1
//end procedure 

// x is what we are looking for in L; first and last are slot numbers 
// This recursive function returns the slot number in which x was found
// or -1
int binarySearch(int L[], int x, int first, int last) 
{
  //  Be sure to check for first > last and
  //   first == last cases to
  //   end the recursion now
  // Check if the search bounds are valid
    if (first > last) {
        return -1; // Base case: element not found
    }

    // the mid is found...
    int middle = (first + last) / 2;
    //lets user know the input elem is being compared to new middle
    cout << "comparing against an element in slot " << middle << endl;


    if (L[middle] == x) {
        return middle; // Element found
    } else if (x < L[middle]) {
        return binarySearch(L, x, first, middle - 1); // Search left half
    } else {
        return binarySearch(L, x, middle + 1, last); // Search right half
    }
}



int main()
{ int A[10];
  int e;  // to look for this

  // fixed elements for A
  A[0] = 1; A[1]= 3; A[2]=5; A[3]= 7; A[4]=9; A[5]=11; A[6]=13;
  A[7] =15; A[8]= 17; A[9]= 19;

  cout << "What do you want to look for? ";
  cin >> e;

  // Call binarySearch here to look for e in A
    int respos = binarySearch(A, e, 0, 9);

  if (respos == -1){
   cout << "Element not found" << endl; 
  }else{
     cout << "Found it in position " << respos+1 << endl;
  }
  return 0; 
}

