#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void display3(char ch) {
    if(ch!='0')
        cout<<ch<<",";
}

void display2(string str) {
    //print if single char and not 0
    //else break down string and pass to same function
    if(str.size()==1) {
        display3(str[0]);
    } else {
        display3(str[2]);
        display3(str[0]);
        display3(str[4]);
    }
}

void display(vector<string> box) {
    //cout<<box[1]<<".";
    display2(box[1]);
    //cout<<box[0]<<".";
    display2(box[0]);
    //cout<<box[2]<<".";
    display2(box[2]);
}

int main() {
    int n;
    cin>>n;

    string tree[n];
    for(int i=0; i<n; i++) {
        cin>>tree[i];
    }

    for(int i=0; i<n; i++) {
        cout<<'\n';
        vector<string> box;
        //cout<<tree[i];

        //seperating based on {}
        for(int j=1; j<tree[i].size()-1; j++) {
            char t = tree[i][j];
            if(t=='{') {
                string stemp;
                j++;
                t =  tree[i][j];
                while(t!='}') {
                    stemp += t;
                    j++;
                    t =  tree[i][j];
                }
                //cout<<stemp<<'\n';
                box.push_back(stemp);
            } else if(t==',') {
            } else {
                //cout<<t<<'\n';
                string stemp = &t;
                box.push_back(stemp);
            }
        }

        //for inorder traversal
        display(box);
    }

    return 0;
}
