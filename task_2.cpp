#include <bits/stdc++.h>
using namespace std;

int n;

int efficientJanitor(float arr[]){
    int tripsCount, singleBagTrips = 0, twoBagTrips;

    for(int i = 0; i < n; i++)
        if(arr[i] > 1.990001)
            singleBagTrips++;

    twoBagTrips = ceil((n - singleBagTrips)/(float)2);
    tripsCount = singleBagTrips + twoBagTrips;

    return tripsCount;
}

int main() {

    cin >> n;

    float arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << efficientJanitor(arr) << endl;

    return 0;
}
