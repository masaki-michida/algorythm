#include <iostream>
using namespace std;

struct Card{
    char suit;
    int value;
};

void bubbleSort(Card cards[],int n){
    for(int i = 0; i< n ; i++){
        for(int j = n-1;i<j;j--){
            if(cards[j].value<cards[j-1].value){
                swap(cards[j],cards[j-1]);
            }
        }
    }
}

void selectionSort(Card cards[],int n){
    int minj = 0;
    for(int i = 0;i<n;i++){
        minj = i;
        for(int j = i;j<n;j++){
            if(cards[j].value<cards[minj].value){
                minj = j;
            }
        }
        swap(cards[i],cards[minj]);
    }
}

bool isStable(Card cards[],Card cards2[],int n){
    for(int i = 0; i<n; i++){
        if(cards[i].suit!=cards2[i].suit){
            return false;

        }
    }
    return true;
}


int main() {
    int n = 0;
    cin >> n;
    Card c1[n], c2[n];
    
    for(int i = 0;i<n;i++){
        cin>>c1[i].suit>>c1[i].value;
    }

    for(int i = 0; i< n;i++) c2[i] = c1[i]; 

    bubbleSort(c1,n);
    selectionSort(c2,n);

    for(int i = 0;i<n;i++){
        cout<<c1[i].suit<<c1[i].value;
        if(i != n-1) cout<<' ';
    }
    cout<<'\n'<<"Stable"<<'\n';

    for(int i = 0;i<n;i++){
        cout<<c2[i].suit<<c2[i].value;
        if(i != n-1) cout<<' ';
    }

    if(isStable(c1,c2,n)){
        cout<<'\n'<<"Stable"<<'\n';
    }else{
        cout<<'\n'<<"Not stable"<<'\n';
    }
}