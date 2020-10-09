class Solution {
public:
    bool invaildinput=false;
    int myAtoi(string str) {
        if(str.length()<1){
            invaildinput=true;
            return 0;
        }

        bool minus=false;
        int index=0;
        
        while(str[index]==' ')
            index++;
            
        if(str[index]=='-'){
            minus=true;
            index++;
        }
        else if(str[index]=='+')
            index++;
        
        long long result=0;
        while(str[index]!='\0'){
            if(str[index]>='0'&&str[index]<='9'){
                result = result*10+(str[index]-'0');
                if(!minus&&result>INT_MAX){
                    invaildinput=true;
                    return INT_MAX;
                }
                else if(minus&&(0-result)<INT_MIN){
                    invaildinput=true;
                    return INT_MIN;
                }
                index++;
            }else{
                break;
            }
        }
        return minus?(0-result):result;
    }
};