class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target >= mat[mid][0] &&
                target <= mat[mid][mat[0].size() - 1]) {

                int s = 0, e = mat[0].size() - 1;

                while (s <= e) {
                    int m = s + (e - s) / 2;

                    if (mat[mid][m] == target)
                        return true;
                    else if (mat[mid][m] > target)
                        e = m - 1;
                    else
                        s = m + 1;
                }

                return false;
            }
            else if (target < mat[mid][0]) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return false;
    }
};