//loops in c++
#include<iostream>

using namespace std;

int main () {
  int i = 0;
  int loop = 10;
  cout << "loop: " << loop << endl;
  for (int i = 0; i <= loop; i++){
    cout << "i: " << i << endl;
  }

//for loop for printing the numbers from 0 to 10
  //for(int i = 0 ; i <=10 ; i++){
    //cout<<i<<endl;
  //}
  
//while loop for the same output as above -- print numbers from 0 to 10
  //while(i<=10){
    //cout<<i<<endl;
    //i++;
  //}
  
//do while loop for the same output as above
  do {
    cout<<i<<endl;
    i++;
  }while(i<=10);

  return 0;
}
