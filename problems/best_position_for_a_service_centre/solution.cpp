// DS 


struct Point { 
    
    // decimal 
    
    double x, y; 
}; 


// SOLUTION

class Solution {
public:
    double lower_limit = 0.000001;
    
    // deciamla 
    

    double helper(Point p,Point arr[], int n) { 
        double sum = 0;
        
        /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */
        for (int i = 0; i < n; i++) { 
            double dx = abs(arr[i].x - p.x); 
            double dy = abs(arr[i].y - p.y); 
            sum += sqrt((dx * dx) + (dy * dy)); 
    } 
        
        // exit 
        
    return sum; 
} 
    
     /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */

    double geometricMedian(Point arr[], int n) 
{ 
    Point pp; 
  Point initial[] = { { -1.0, 0.0 }, 
                       { 0.0, 1.0 }, 
                       { 1.0, 0.0 }, 
                       { 0.0, -1.0 } }; 
        
        // for looping 
        
    for (int i = 0; i < n; i++) { 
        pp.x += arr[i].x; 
        pp.y += arr[i].y; 
    } 
         /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */

    pp.x /= n; 
    pp.y /= n; 

    double minimum_distance =  
       helper(pp, arr, n); 

    int k = 0;
        
        // while loop 
        
    while (k < n) { 
        
         /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */
        
        for (int i = 0; i < n, i != k; i++) { 
            Point newpoint; 
            newpoint.x = arr[i].x; 
            newpoint.y = arr[i].y; 
            double newd =  
                   helper(newpoint, arr, n); 
            
            // looping 
            
            if (newd < minimum_distance) { 
                minimum_distance = newd; 
                pp.x = newpoint.x; 
                pp.y = newpoint.y; 
            } 
        } 
        
        // incr
         
        k++; 
    } 

    double test_distance = 900; 
    int flag = 0; 
        
         /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */

    while (test_distance > lower_limit) { 

        flag = 0; 
        
         /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */
        
        for (int i = 0; i < 4; i++) { 
            Point newpoint; 
            
             /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */
            
            newpoint.x = pp.x 
                 + (double)test_distance * initial[i].x; 
            newpoint.y = pp.y 
                 + (double)test_distance * initial[i].y; 
            double newd = helper(newpoint, arr, n); 
            
             /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */

            if (newd < minimum_distance) { 
                minimum_distance = newd; 
                pp.x = newpoint.x; 
                pp.y = newpoint.y; 
                flag = 1; 
                
                // cont 
                
                break; 
            } 
        } 
        
        // if loop 
        
        if (flag == 0) 
            test_distance /= 2; 
    }
        
        
        
        // exit
         

    return minimum_distance;
} 
    
     /*
        
        for(; r < n; r++){
            char c = s[r];
            if (c != '1') l = r + 1;
            else{
                res = (res + r - l + 1) % mod;
            }
            */
    

    double getMinDistSum(vector<vector<int>>& positions) {
        
        // new func
        
        const int N = positions.size();
        Point p[N];
        
        // for loop 
        
        for(int i = 0; i< N; i++){
            p[i].x = positions[i][0];
            p[i].y = positions[i][1];
        }
        
        // decimal
        
        double res = geometricMedian(p,N);
        
        // exit result 
        
        return res;

    }
    
    //  end
     
}; 

// exit 
