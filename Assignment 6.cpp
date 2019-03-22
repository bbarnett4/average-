#include <iostream>
using namespace std;

int main( ){
   int* array;
   //assume max number entered is 1000
   array = new int[1000];

   int size;
   readUserInput(array,&size);
   cout<<"User entered "<<size<<" numbers"<<endl;
   calcualteAndPrintAverage(array,size);
   return 0;
}

void readUserInput(int *array,int *size){
   cout<<"Enter positive number below"<<endl;
   *size = 0;
   int num;
   while(true){
       cout<<"Enter number "<<*size+1<<" : ";
       cin>>num;
       if(num<0){
           break;
       }else{
           array[*size] = num;
           *size = *size+1;
       }
   }
}

void calcualteAndPrintAverage(int *array,int size){
   int total = 0;
   for(int i=0;i<size;i++){
       total+=array[i];
   }
   int average = total/size;
   cout<<"Total of the numbers is : "<<total<<endl;
   cout<<"Average of the numbers is : "<<average<<endl;

}
int main( ){
   int* array;
   //assume max number entered is 1000
   array = new int[1000];

   int size;
   readUserInput(array,&size);
   cout<<"User entered "<<size<<" numbers"<<endl;
   calcualteAndPrintAverage(array,size);
   return 0;
}
