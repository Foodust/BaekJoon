class Solution {
    public int solution(int[] bandage, int maxHealth, int[][] attacks) {
        int currentHealth = maxHealth;
        int time = attacks[attacks.length - 1][0];
        int temp = 0;
        int adder = 0;
        for (int i = 0; i <= time; i++) {
            if (attacks[temp][0] == i) {
                currentHealth -= attacks[temp][1];
                if (currentHealth <= 0) {
                    return -1;
                }
                temp++;
                adder = 0;
            } else {
                currentHealth += bandage[1];
                adder++;
                if (adder == bandage[0]) {
                    currentHealth += bandage[2];
                    adder = 0;
                }
            }
            currentHealth = Math.min(currentHealth, maxHealth);
        }
        return currentHealth;
    }
}