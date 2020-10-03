class ParkingSystem {
    // pvt class
    private:
        int big=0;
        int medium=0;
        int small=0;
    // public class 
    
public:
    ParkingSystem(int big, int medium, int small) {
        // classify 
        
            this->big=big;
            this->medium=medium;
            this->small=small;
    }
    
    // 0 1 
    
    bool addCar(int carType) {
        if(carType==1)
        {
            // decr -- 
            
           if(this->big)
           {
               this->big--;
               return true;
           }
            
            // next condioton 
            
           else
           {
               return false;
           }
           
        }
        
        // second condition 
        
        else if(carType==2)
        {
            // class 2 
            
             if(this->medium)
           {
                 // decr 
                 
               this->medium--;
               return true;
           }
            // next condition 
            
           else
           {
               return false;
           }
        }
        else
        {
            // class 3
            
             if(this->small)
           {
                 // decr 
                 
               this->small--;
               return true;
           }
            // false condition 
            
           else
           {
               
               // 0 
               
               return false;
           }
            // end
        }
        // end
        
    }
    // end 
    
};


/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */