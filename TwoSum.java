// Time Complexity: O(N^2)
// Space Complexity: O(N^2)
class TwoSum{
   
    public int[] twoSum(int[] nums, int target){
         int [] output = new int[2];

        int first = -1, second = -1;
        for(int i = 0; i < nums.length; ++i){
            int elem1 = nums[i];
            for(int j = i + 1; j < nums.length; ++j){
                int elem2 = nums[j];
                if(elem1 + elem2 == target){
                    output[0] = i;
                    output[1] = j;
                    return output;
                }
            }
        }
        return output;
        
    }
}