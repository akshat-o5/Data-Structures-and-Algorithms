void sort012(int *arr, int n)
{
      int l = 0;
    int r = n-1;
    int m = 0;
    while(m<=r){
        switch(arr[m]){
            case 0: swap(arr[l++],arr[m++]);
                    break;
            case 1: m++;
                    break;
            case 2: swap(arr[m],arr[r--]);
        }
    }
}