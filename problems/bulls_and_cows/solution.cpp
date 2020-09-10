class Solution {
public:
    string getHint(string secret, string guess) {

        int n=guess.size();
        string answer;
        int cow=0,bull=0;

        for(int i=0;i<n;i++)
        {
            if(guess[i] == secret[i])
            {
                bull++;
                secret[i]= 'a';
                guess[i] ='x';

            }
        }

        for(int i=0;i<n;i++)
        {
            if(secret.find(guess[i])!= string::npos)
            {
                cow++;
                secret[secret.find(guess[i])]= 'a';

            }
        }
        cout<<bull<<" "<<cow;
         answer = to_string(bull) + "A" + to_string(cow)+"B";
        return answer;
    }
};