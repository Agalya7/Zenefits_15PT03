#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main() {
    int n, count=1;     //the sorted string would be the first word in the dictionary
    cin>>n;             //number of letters
    char arr[n];
    string word;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>word;
    string temp;
    temp = word;

    sort(temp.begin(), temp.end());

    while(1) {              //to find rank of the given permutation
        if(temp == word) {
            break;
        }
        next_permutation(temp.begin(), temp.end());
        count++;
        //cout<<'\n'<<"->"<<temp<<count;
    }

    cout<<count<<'\n';

    return 0;
}
