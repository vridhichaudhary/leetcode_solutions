import javafx.util.Pair;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

class TwoSumUsingSort{
    public int[] twoSum(int[] nums, int target){
        //Approach2: Using Sorting -> O(NlogN)
        
        //store the indices of each element to retain it for future use
        List<Pair<Integer, Integer>> output = new ArrayList<>();
        for(int i = 0; i < nums.length; ++i){
            output.add(new Pair<>(nums[i], i));
        }
        output.sort(Comparator.comparingInt(Pair::getKey));

        int[] ans = new int[2];
        //applying two pointer approach
        int start = 0, end = nums.length - 1;
        while(start < end){
            Pair<Integer, Integer> p1 = output.get(start);
            Pair<Integer, Integer> p2 = output.get(end);
            int first = p1.getKey(), second = p2.getKey();
            if(first + second == target){
                ans[0] = p1.getValue();
                ans[1] = p2.getValue();
                return ans;
            }else if(first + second > target){
                end--;
            }else{
                start++;
            }
        }
        return ans;
    }
}