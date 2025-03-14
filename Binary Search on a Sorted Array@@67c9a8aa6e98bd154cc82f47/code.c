int binarySearch(int a[], int n, int target){
    int low = 0, high = n-1, mid;
    while (low<=high){
        mid = low + (high-low)/2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) low = mid+1;
        if (a[mid] > target) high = mid-1;
    }
    if (!target) return -1;
}