class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n)
    {
        vector<int> temp;

        int i = 0; // pointer for valid elements in num1
        int j = 0; // pointer for num2

        // Compare elements while BOTH arrays still
        // have valid elements remaining
        while(i < m && j < n)
        {
            if(num1[i] <= num2[j])
            {
                temp.push_back(num1[i]);
                i++;
            }
            else
            {
                temp.push_back(num2[j]);
                j++;
            }
        }

        // Copy remaining valid elements of num1
        while(i < m)
        {
            temp.push_back(num1[i]);
            i++;
        }

        // Copy remaining elements of num2
        while(j < n)
        {
            temp.push_back(num2[j]);
            j++;
        }

        // Copy merged result back into num1
        for(int k = 0; k < temp.size(); k++)
        {
            num1[k] = temp[k];
        }
    }
};
