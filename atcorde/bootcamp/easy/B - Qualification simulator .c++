
#include<iostream>
using namespace std;

int main(){
  int total,a,abr;
  cin >> total>>a>>abr;
  int pass_limit = a+abr;
  
  string join;
  
  cin >> join;
  
  for(char j: join){
    if(j == 'a'){
      if(0<pass_limit){
        cout<<"Yes"<<endl;
        pass_limit--;
      }else{
        cout << "No"<<endl;
      }
    }else if(j == 'b'){
      if(0 < pass_limit&&0<abr){
        cout<<"Yes"<<endl;
        pass_limit--;
        abr--;
      }else{
        cout << "No"<<endl;
      }
    }else{
      cout << "No"<<endl;
    }
  }
}