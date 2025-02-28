public class BinarySearch {
    public static void main(String[] args) {
        
        int Arr[] = {10,20,30,40,50,60,70};
        int target = 70;
        int left= 0; 
        int right = Arr.length-1;

        int res = binarySearch(Arr,target,left,right);

        if(res==-1){
            System.out.println("Target is not Found");
        }
        System.out.println("Target is :"+res);

    }
    static int binarySearch(int []Arr,int target,int left,int right ){
        
        if(left>right){
            return -1;
        }
            
        int mid = left+(right - left )/2;

        if(Arr[mid] == target)
            return mid;

        if(target < Arr[mid])
            return binarySearch(Arr, target, left, mid-1);

        return binarySearch(Arr, target, mid+1, right);

    }
}
