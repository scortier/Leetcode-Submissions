// defining new files

#define pb push_back

// defining new files

#define se second

// defining new files

#define fi first

// defining new files

#define all(v) v.begin(),v.end()

// defining new files

#define mp make_pair

class Solution {
public:
    // new define string of vector integer
    
    vector<string> simplifiedFractions(int n) {
        // double long integer
        
        set<double> d;
        vector<string> s;
        // new integers
        
        int i,j;
        // for looping 
        
        for(i=1;i<n;i++)
        {
            // for loop 
            
           for(j=i+1;j<=n;j++)
           {
               // result
               
               cout<<"d";
               
               // if-else logic 
               
               if(d.find(i/(double)j)==d.end())
                {   d.insert(i/(double)j);
                 
                 // output
                 
                 cout<<"s";
                      s.pb(to_string(i)+"/"+to_string(j));
                }
           }
        }
        // returning string
        return s;
        
    }
};