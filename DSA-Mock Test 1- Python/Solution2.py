class Solution():
    def FirstUniqchar(self,s):
        dic={}
        for i in s:
            if i not in dic:
                dic[i]=1
            else:
                dic[i]+=1
        for i in range(len(s)):
            if(dic[s[i]]==1):
                return i
        return -1

obj=Solution()
print(obj.FirstUniqchar("leetcode"))
print(obj.FirstUniqchar("loveleetcode"))
print(obj.FirstUniqchar("aabb"))



    

