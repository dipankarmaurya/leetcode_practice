#include <bits/stdc++.h>
using namespace std;

int allPossibleSubset(vector<long int>& arr, int n,vector<long int>&vect)

{
	set<int>st;
    for(auto x:arr)
    st.insert(x);
    // The outer for loop will run 2^n times to print all subset .
    // Here variable i will act as a binary counter
    for (int i = 0; i < n; i++) {
    	int x=arr[i];
        // The inner for loop will run n times , 
        // As the maximum number of elements a set can have is n
        // This loop will generate a subset
        for (int j = 0; j < n; j++) {
            // This if condition will check if jth bit in 
            // binary representation of  i  is set or not
            // if the value of (i & (1 << j)) is not 0 , 
            // include arr[j] in the current subset
            // otherwise exclude arr[j]
            
            x|=arr[j];
            st.insert(x);
                //cout << x << " ";
        }
        //cout << "\n";
    }
    //for(auto x:st)
    //cout<<x<<" ";
    //cout<<endl;
    st.insert(0);
    auto m=st.end();
    for(auto x:vect){
    	for(auto i=st.begin();i!=m;i++){
    		st.insert(x&(*i));
		}
	}
    return st.size();
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		vector<long int >vect1;
		vector<long int >vect2;
		
		long n,m,x,y;
		cin>>n>>m;
		while(n--){
			cin>>x;
			vect1.push_back(x);
		}
		while(m--){
			cin>>y;
			vect2.push_back(y);
		}
		int val=allPossibleSubset(vect1, vect1.size(),vect2);
		cout<<val<<endl;
 
	}
}


