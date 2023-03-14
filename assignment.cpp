#include <bits/stdc++.h>
using namespace std;
 
double median(vector<int>& nums1, vector<int>& nums2) {
   int n1 = nums1.size(), n2 = nums2.size();
   if (n1 > n2) {
       nums1.swap(nums2);
       swap(n1, n2);
   }
 
   int left = 0, right = n1;
   while (left <= right) {
       int i = (left + right) / 2;
       int j = (n1 + n2 + 1) / 2 - i;
 
       int max_left_nums1 = (i == 0) ? INT_MIN : nums1[i-1];
       int min_right_nums1 = (i == n1) ? INT_MAX : nums1[i];
       int max_left_nums2 = (j == 0) ? INT_MIN : nums2[j-1];
       int min_right_nums2 = (j == n2) ? INT_MAX : nums2[j];
 
       if (max_left_nums1 <= min_right_nums2 && max_left_nums2 <= min_right_nums1) {
           if ((n1 + n2) % 2 == 0) {
               return (max(max_left_nums1, max_left_nums2) + min(min_right_nums1, min_right_nums2)) / 2.0;
           } else {
               return max(max_left_nums1, max_left_nums2);
           }
       } else if (max_left_nums1 > min_right_nums2) {
           right = i - 1;
       } else {
           left = i + 1;
       }
   }
 
   return -1;
}
 
int main() {
   FILE*fp;
   fp = fopen("median.txt","r");   int i , j;
   vector<int> nums1;
   vector<int> nums2;
   cin >> i >>j;
   for(int t=0;t<i;t++){
    int j;
    cin >>j;
    nums1.push_back(j);
   }
   for(int t=0;t<j;t++){
    int j;
    cin >>j;
    nums2.push_back(j);
   }
   double m = median(nums1, nums2);
 
   cout << "Median = " << m << endl;
 
   return 0;
}
