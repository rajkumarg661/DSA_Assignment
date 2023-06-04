class Solution():
    def MovesZero(self,arr):
        curr_idx=0
        for i in range(len(arr)):
            if arr[i]!=0:
                arr[i],arr[curr_idx]=arr[curr_idx],arr[i]
                curr_idx+=1
        return arr


obj=Solution()
print(obj.MovesZero([0,1,0,3,12]))
print(obj.MovesZero([0]))



    
