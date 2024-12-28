#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    
    cin >> a >> b >> c >> d;
    if(a==b&a==c&a==d){
        cout <<"No"<<endl;
    }else if(a ==b&&c==d){
        cout <<"Yes"<<endl;
    }else if(a==c&&b==d){
        cout <<"Yes"<<endl;
    }else if(a==d&&b==c){
        cout <<"Yes"<<endl;
    }else if(a==b&&a==c){
        cout <<"Yes"<<endl;
    }else if(b==c&&b==d){
        cout <<"Yes"<<endl;
    }else if(c==d&&c==a){
        cout <<"Yes"<<endl;
    }else if(d==a&&d==b){
        cout <<"Yes"<<endl;
    }
    else {
        cout <<"No"<<endl;
    }
    
}