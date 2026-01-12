int findElem(int arr[], int k){
	int len = sizeof(arr)/sizeof(arr[0]);
    if(len  < 1) return -1;
    for(int i = 0 ; i < len ; i++){
        if(arr[i] == k) return i;
    }
    return -1;
}