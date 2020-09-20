// Author: Siddhant ; trial 1 with swift


class Solution {
    func reorderSpaces(_ text: String) -> String {
        var result = text
        //counter 
        
        let count = text.count
        guard count > 0 else {
            return result
        }
        // spaces and words
        
        var spaceNumber = 0, wordCount = 0
        var words = [String]()
        var wordStart = true
        
        // characters space logic 
        
        for char in text{
            
            
            
            if char == " "{
                spaceNumber += 1
                wordStart = true
            }
            
            // other cond .
            
            else{
                let str = String(char)
                if wordStart{
                    wordStart = false
                    wordCount += 1
                    words.append(str)
                }
                else{
                    words[words.count - 1].append(str)
                }
                //end
                
            }
            //end
        }
        //end
        
        
        // appending finally
        
        guard wordCount > 1 else {
            if wordCount == 1{
                let final = [String](repeating: " ", count: spaceNumber).joined(separator: "")
                result = words.joined(separator: "")
                
                return result.appending(final)
            }
            else{
                return result
            }
            
        }
        
        // merge with given formyla 
        
        
        let stdSpace = spaceNumber / (wordCount - 1)
        let extraSpace = spaceNumber % (wordCount - 1)
        
        // spliting 
        
        let split = [String](repeating: " ", count: stdSpace).joined(separator: "")
        let final = [String](repeating: " ", count: extraSpace).joined(separator: "")
        result = words.joined(separator: split)
        
        //exit
        
        return result.appending(final)
        
    }
    
    //end
}
//STOP