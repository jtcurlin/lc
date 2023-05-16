// author:  jacob curlin
// file:    lc/001.rs
// date:    05/16/23

// Leetcode 1. Two Sum 
// rust variant - learning rust syntax

// Notes 
// '&' creates a reference to a value, similar to c++ 

use std::collections::HashMap;

impl Solution 
{
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> 
    {
        // let [mutable?] var_name: [container type]<[val type], [val type]> = [container type]::new()
        let mut pairs: HashMap<i32, usize> = HashMap::new();    

        // .iter() - returns an interator over the contents of a collection
        // .enumerate() - takes iterator and gives current iteration count (starting at 0 )& next value
        for (index, &value ) in nums.iter().enumerate() {
            match pairs.get(&value) {
                // 'if value is some, destructure reference & bind inner value to the name prev_index' 
                Some(&prev_index) => {                              
                   return vec![prev_index as i32, index as i32]     // vec![(desired elements)] macro for vec initialization 
                }
                // 'if no value' 
                None => {
                    pairs.insert(target - value, index);
                }
            }
           
        }
        vec![]  // else return empty vector 
    }
}