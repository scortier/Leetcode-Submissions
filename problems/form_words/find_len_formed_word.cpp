class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        bool addit = 1;
        vector<int> freq (26);
        vector<int> checker (26);
       
        for(int i = 0; i < chars.length(); i++){
            freq[chars[i] - 'a'] += 1;
        }
       
        checker = freq;
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].length(); j++){
                
				if(checker[words[i][j] - 'a'])
                    checker[words[i][j] - 'a']--; 
				else{
                    addit = 0; 
                    break;
                }
            }   
            if(addit)
                sum += words[i].length();
            checker = freq;
            addit = 1;
        }
        return(sum);
    }
};
