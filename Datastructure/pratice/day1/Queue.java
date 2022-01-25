package work;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Queuefun {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Queue<Integer> que = new LinkedList<>();

        System.out.println("Add  Queue elements");
        que.add(sc.nextInt());
        que.add(sc.nextInt());
        que.add(sc.nextInt());
        que.add(sc.nextInt());
        que.add(sc.nextInt());

        System.out.println("top element is");
        System.out.println(q.peek());

        System.out.println(" Elements Dequeued are");
        System.out.println(que.remove());
        System.out.println(que.remove());
    }
}
