public void swap(int[] arr,int a,int b)
{
  
int temp=arr[a];
arr[a]=arr[b];
arr[b]=temp;

}
public int[] reverseArray(int[] arr){
int size=arr.length-1;

for(int i=0;i<size;i++){

swap(arr,i,size--);

}

return arr;
}
