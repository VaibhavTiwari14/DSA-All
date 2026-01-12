def findElem(arr, k) : 
    for i in range(len(arr)) : 
        if(arr[i] == k) : return i;

    return -1;

arr = [1, 2, 3, 4]
print(findElem(arr, 3))   
print(findElem(arr, 5)) 
