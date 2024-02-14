public class LeftMax{
    public static void main(String [] args){
        int arr[] = {1,24,32,3,6,6,2,8};
        int left[8];
        for(int i;i<n;i++){
            if(arr[i]>left[i-1]){
                left[i] = arr[i];
            }else{
                left[i] = left[i-1];
            }
        }
        int right[] = new int[n];
        right[n-1] = arr[n-1];
        for(int i= n-2; i<n ;i--){
            if(arr[i]>right[i+1]){
                right[i] = arr[i];
            }else{
                right[i] = right[i+1];
            }
        }
    } 
}
