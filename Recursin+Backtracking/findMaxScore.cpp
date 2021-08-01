
/*You are given a list of words, a list of alphabets(might be repeating) and score of every alphabet 
     from a to z.
2. You have to find the maximum score of any valid set of words formed by using the given 
     alphabets.
3. A word can not be used more than one time.
4. Each alphabet can be used only once. 
5. It is not necessary to use all the given alphabets.


input format
  4
  dog cat dad good
  9
  a b c d d d g o o
  1 0 9 5 0 0 3 0 0 0 0 0 0 0 2 0 0 0 0 0 0 0 0 0 0 0
  */




#include<bits/stdc++.h>

using namespace std;

int maxPossibleSubsets( vector<string>&words, map<char,int>&freq,vector<int>&score,int idx){
    
    if(idx==words.size()){
        return 0;
    }
    
    int max1 = 0+ maxPossibleSubsets(words,freq,score,idx+1);//word not include in subset
    
    
    //lets add 
    string str = words[idx];
    bool canInclude=true;
    int currentWordScore=0;
    for(int i=0;i<str.size();i++){
        char ch= str[i];
        if(freq[ch]<0){
            canInclude=false;
        }
        freq[ch]--;
        currentWordScore+=score[ch-'a'];
    }
    int max2=0;
    if(canInclude){
         max2 =  currentWordScore+ maxPossibleSubsets(words,freq,score,idx+1);
    }
    for(int i=0;i<str.size();i++){
        freq[str[i]]++;
    }
    return max(max1,max2);
    
}
int main(){
    int n;
    cin>>n;
    
    vector<string>words;
    while(n--){
     string str;
     cin>>str;
     words.push_back(str);
    }
    
    int m;
    cin>>m;
    map<char,int>freq;
    while(m--){
        char ch;
        cin>>ch;
        freq[ch]+=1;
    }
    
    vector<int>score;
    for(int i=0;i<26;i++){
        int sc;
        cin>>sc;
        score.push_back(sc);
    }
    cout<<maxPossibleSubsets(words,freq,score,0);
}
