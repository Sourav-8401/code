class maxProfit{
    public static void main(String []args){
        //1st method
        int arr[]  = new arr(5);
        arr[] = {7,1,5,3,6};
        int max = 0;
        int min=arr[0];
        for(int i=0;i<5;i++){
            if(arr[i]<min){
                min = arr[i];
            }else{
                max = max + (arr[i] - min);
                min = arr[i];
            }
        }
        System.out.println(max);
        //2nd method
        max2 = 0;
        int min2 = arr[0]; 
        for(int i=0;i<arr.length;i++){
            int pr = arr[i+1] - arr[i];
            if(pr>0){
                max2 +=pr;
            }
        }
    }
}