//QUESTION: https://www.hackerrank.com/challenges/hackerland-radio-transmitters/problem
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    int num_of_transmitter = 0;
    int i = 0;
    cin >> n >> k;
    int x[n];
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }
    
    sort(x, x+n);
    
    while(i<n)
    {
        num_of_transmitter++;
        int transmitter = x[i] + k;
        while (i < n && x[i] <= transmitter) i++;
        transmitter = x[--i] + k; // this is where we place the transmitter
        //now go to the right of x[i] by k because transmitter at x[i] covers houses to its right as well. 
        while (i < n && x[i] <= transmitter) i++;
    }
    
    cout<<num_of_transmitter<<endl;
    
    return 0;
}

