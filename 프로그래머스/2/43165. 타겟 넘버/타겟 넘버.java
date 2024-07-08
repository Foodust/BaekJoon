class Solution {
    int answer = 0;

    public void cal(int[] numbers, int target, int sum, int index) {
        if (index == numbers.length) {
            if (sum == target) {
                answer++;
            }
            return;
        }
        cal(numbers, target, sum + numbers[index], index + 1);
        cal(numbers, target, sum - numbers[index], index + 1);
    }

    public int solution(int[] numbers, int target) {
        cal(numbers, target, 0, 0);
        return answer;
    }
}