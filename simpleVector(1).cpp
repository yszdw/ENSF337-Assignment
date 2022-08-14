/*
* File Name: simpleVector(1).cpp
* Assignment: Lab 4 Exercise D
* Lab section: (B01)
* Completed by: Shanzi Ye
* Submission Date: June 8, 2022
*/

#include "simpleVector.h"
#include <cassert>
using namespace std;

SimpleVector::SimpleVector(const TYPE* arr, int n) {
   storageM = new TYPE[n];
   sizeM = n;
   capacityM = n;
   for (int i = 0; i < sizeM; i++)
       storageM[i] = arr[i];
}

TYPE& SimpleVector::at(int i) {
   assert(i >= 0 && i < sizeM);
   return storageM[i];
}

const TYPE& SimpleVector::at(int i)const {
   assert(i >= 0 && i < sizeM);
   return storageM[i];
}


void SimpleVector::push_back(TYPE val) {

   if (sizeM < capacityM) {
       storageM[sizeM++] = val;
   }
   else {
       TYPE* temp = storageM;
       capacityM *= 2;
       storageM = new TYPE[capacityM];
       for (int i = 0; i < sizeM; i++) {
           storageM[i] = temp[i];
       }
       storageM[sizeM++] = val;
   }
}


SimpleVector::SimpleVector(const SimpleVector& source) {
   sizeM = source.sizeM;
   capacityM = source.capacityM;
   storageM = new TYPE[capacityM];
   for (int i = 0; i < sizeM; i++) {
       storageM[i] = source.storageM[i];
   }
}

SimpleVector& SimpleVector::operator= (const SimpleVector& rhs){
   sizeM = rhs.sizeM;
   capacityM = rhs.capacityM;
   for (int i = 0; i < sizeM; i++) {
       storageM[i] = rhs.storageM[i];
   }
   return *this;
}