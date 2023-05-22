int Solution::isPower(int num) {
    if(num==1)return true;
   for (int A = 2; A * A <= num; A++) {
        int temp = num;
        while (temp % A == 0) {
            temp /= A;
            if (temp == 1) {
                return true;
            }
        }
    }
    return false;
}
