class TreeNode:
    ## tree 
    
    def __init__(self, name, children):
        self.name = name
        self.alive = True
        self.children = children

class ThroneInheritance:

    
    # new defs 
    
    def __init__(self, kingName: str):
        self.dict = dict()
        self.root = TreeNode(kingName, [])
        self.dict[kingName] = self.root

## birth 


    def birth(self, parentName: str, childName: str) -> None:
        curr = self.dict[parentName]
        
        # dict 
        
        succ = TreeNode(childName, [])
        self.dict[childName] = succ
        curr.children.append(succ)

# death 


    def death(self, name: str) -> None:
        curr = self.dict[name]
        curr.alive = False
        return 

# ordering out 

    def getInheritanceOrder(self) -> List[str]:
        res = []
        # rootiing 
        
        curr = self.root
        stack = [curr]
        
        # stack 
        
        while stack:
            curr = stack.pop()
            # appending 
            
            if curr.alive:
                res.append(curr.name)
                
                # stack 
                
            stack += curr.children[::-1]
        return res



# Your ThroneInheritance object will be instantiated and called as such:
# obj = ThroneInheritance(kingName)
# obj.birth(parentName,childName)
# obj.death(name)
# param_3 = obj.getInheritanceOrder()