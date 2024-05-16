import java.util.*;

class Arrays{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();

        //declare an array of size
        int arr[] = new int[size];
        System.out.println("arr is reference to array elements: " + arr);
        //taking elements as input from the user
        for(int i = 0; i < size; ++i){
            arr[i] = sc.nextInt();
            System.out.println("curr element is" + arr[i]);
        }
    }
}