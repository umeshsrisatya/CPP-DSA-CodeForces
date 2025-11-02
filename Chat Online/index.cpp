#include<bits/stdc++.h>
using namespace std;
int main(){
    int p, q, l, t;
    cin >> p >> q >> l >> t;
    // Prefer using vectors instead of sets because all schedules are already sorted.
    // Sets are prefered if not sorted.
    vector<pair<int,int> > Z(p); 
    vector<pair<int,int> > X(q);

    for(int i = 0; i < p; i++) cin >> Z[i].first >> Z[i].second; 
    for(int i = 0; i < q; i++) cin >> X[i].first >> X[i].second;
    
    bitset<1001> Tset = 0;
    // iterate z wakeup timelines
    for(int i = l; i <= t; i++){
        for(pair<int,int> z : Z){
            int a = z.first;
            int b = z.second;
            for(pair<int, int> x: X){
                int c = x.first;
                int d = x.second;
                //overlaping intervals (max of first element) <= (min of second element) 
                if(max(a,c+i) <= min(b,d+i)){
                    // If t is valid, we don't need to check further occurrences.
                    Tset[i] = 1;
                    break;
                }
            }
            if(Tset[i] == 1) break;
        }
    }
    cout << Tset.count() << endl;
    return 0;
}