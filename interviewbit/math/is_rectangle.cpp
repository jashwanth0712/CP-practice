int Solution::solve(int A, int B, int C, int D) {
      if ((A == B && C == D) || (A == C && B == D) || (A == D && B == C)) {
        if (A != B || A != C || A != D) {
            return 1;  // Rectangle is possible
        }
    }
    return 0; 
}
