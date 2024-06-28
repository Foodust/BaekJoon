import java.util.Arrays;
import java.util.HashMap;

class Solution {
    public long get(HashMap<Long, Long> room, long number) {
        long current = number;

        while (room.containsKey(current)) {
            current = room.get(current);
        }
        long next = current + 1;
        while (number != current) {
            long temp = room.get(number);
            room.put(number, next);
            number = temp;
        }
        room.put(current, next);
        return current;
    }

    public long[] solution(long k, long[] room_number) {
        long[] answer = new long[room_number.length];
        HashMap<Long, Long> room = new HashMap<>();
        int temp = 0;
        for (long number : room_number) {
            answer[temp++] = get(room, number);
        }
        return answer;
    }
}