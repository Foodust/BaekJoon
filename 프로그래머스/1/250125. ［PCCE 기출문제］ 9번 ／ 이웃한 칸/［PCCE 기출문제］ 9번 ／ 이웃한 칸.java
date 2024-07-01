import java.util.ArrayList;
import java.util.List;

class Solution {
    public int solution(String[][] board, int height, int width) {
        int answer = 0;
        String color = board[height][width];
        int length = board.length;
        List<Integer> heightList = new ArrayList<>(List.of(0, 1, -1, 0));
        List<Integer> widthList = new ArrayList<>(List.of(1, 0, 0, -1));
        for (int i = 0; i <= 3; i++) {
            int realHeight = height + heightList.get(i);
            int realWidth = width + widthList.get(i);
            if ((realHeight >= 0 && realWidth >= 0) && (realHeight < length && realWidth < length)) {
                if (color.equals(board[realHeight][realWidth])) {
                    answer++;
                }
            }
        }
        return answer;
    }
}