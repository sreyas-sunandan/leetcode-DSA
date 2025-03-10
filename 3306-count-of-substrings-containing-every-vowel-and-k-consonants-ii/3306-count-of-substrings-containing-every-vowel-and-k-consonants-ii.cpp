class Solution {
public:
    long long countOfSubstrings(string word, int k) {
     
        unordered_set<char> st={'a','e','i','o','u'};
        unordered_map<char,int> mp;
        long long consonant_count=0,ans=0;
        int start=0,left=0;
        for(int r=0;r<word.length();r++){
            if(st.count(word[r])){
                mp[word[r]]++;
            }else{
                consonant_count++;
            }
         
            while(left<r && consonant_count>k){
                if(st.count(word[left])){
                    mp[word[left]]--;
                    if(mp[word[left]]==0) mp.erase(word[left]);
                }else{
                    consonant_count--;
                }
                left++;
                start=left;
            }
         
            while(st.count(word[left]) && mp[word[left]]>1){
                mp[word[left]]--;
                left++;
            }
           
            if(mp.size()==5 && consonant_count==k){
                ans+=(left-start) + 1;
            }
        }
        
        return ans;
      
    }
};