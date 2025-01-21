#include <iostream>
#include <algorithm>
using namespace std;
void fill_to_1000(int arr[], int size, int th[]) {
    int q = 0; 
    for (int i = 0; i <= 1000; i++) {
        bool found = false;
        for (int j = 0; j < size; j++) {
            if (i == arr[j]) { 
                found = true;
                break; 
            }
        }
        if (!found) { 
            th[q] = i; 
            q++;
        }
    }
    for (; q <= 1000; q++) {
        th[q] = -1; 
    }
}


int inte(int n, int i, string s){
    string q(s, n, i-n);
    int a;
    a = atoi(q.c_str());
    return a;
}

void san(string s, int arr[]){
    int n=0;
    int q=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            arr[q]=inte(n, i, s);
            n=i+1;
            q++;
        }
        if(i==s.size()-1){
            arr[q]=inte(n,s.size(), s);
        }
    }
}

int main(){
    int num=1;
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            num++;
        }
    }
    int arr[num];
    san(s, arr);
    int number;
    cin>>number;
    int th[1001];
    fill_to_1000(arr,num,th);
    cout<<th[number];
    return 0;
}