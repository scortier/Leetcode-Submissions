class Solution {
public:
    string numtoword(int digit) //this function return number < 100 to string
	{
    if (digit == 1) return "One";
    if (digit == 2) return "Two";
    if (digit == 3) return "Three";
    if (digit == 4) return "Four";
    if (digit == 5) return "Five";
    if (digit == 6) return "Six";
    if (digit == 7) return "Seven";
    if (digit == 8) return "Eight";
    if (digit == 9) return "Nine";
    if (digit == 10) return "Ten";
    if (digit == 11) return "Eleven";
    if (digit == 12) return "Twelve";
    if (digit == 13) return "Thirteen";
    if (digit == 14) return "Fourteen";
    if (digit == 15) return "Fifteen";
    if (digit == 16) return "Sixteen";
    if (digit == 17) return "Seventeen";
    if (digit == 18) return "Eighteen";
    if (digit == 19) return "Nineteen";
    if (digit >= 90) return "Ninety";
    if (digit >= 80) return "Eighty";
    if (digit >= 70) return "Seventy";
    if (digit >= 60) return "Sixty";
    if (digit >= 50) return "Fifty";
    if (digit >= 40) return "Forty";
    if (digit >= 30) return "Thirty";
    if (digit >= 20) return "Twenty";
    return{};
        
}
     string numberToWords(int num) {
        string str;
    if(num==0) //check if the input is 0
    {
        str="Zero";
        return str;
    }
     if(num/1000000000>0) // check the billion then return the function itself to return < 1000000000;
     {
         int a=num/1000000000;
         str=numberToWords(a)+" Billion ";
         num=num-a*1000000000;
     }
    if(num/1000000>0) // check the million then return the function itself to return < 1000000;
    {
        int b=num/1000000;
        str=str+numberToWords(b)+" Million ";
        num=num-b*1000000;
    }
    if(num/1000>0) // check the thousand then return the function itself to return < 1000;
    {
        int c=num/1000;
        str=str+numberToWords(c)+" Thousand ";
        num=num-c*1000;
        
    }
    if(num/100>0) //hundred, we use the above function to return < 999 value
    {
        int d=num/100; 
        str=str+numtoword(d)+" Hundred ";
        num=num-d*100;
     
    }
    if(num>20)
    {
        int e=num/10;
        str=str+numtoword(num);
        if(num%10 != 0)
        {
        num=num-e*10;
        str=str+' '+numtoword(num);
        }
    }
    else str=str+numtoword(num);
    int last=str.size()-1; 
    if(str[last]==' '){
        str.erase(last,1);  // delete the space of the string
    }
    return str;
}
};
