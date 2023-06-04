arr=[0,1,0,3,12]
curr_index=0
for i in range(len(arr)):
    if arr[i]!=0:
        arr[i],arr[curr_index]=arr[curr_index],arr[i]
        curr_index+=1
for i in range(len(arr)):
    print(arr[i])

    
