/**
 * @author: aaditkamat
 * @date: 21/02/2019
 */
import java.util.List;
import java.util.LinkedList;
import java.util.Random;

public class Deque<T> {
  private class Node {
    T item;
    Node previous;
    Node next;
    Node(T item) {
      this.item = item;
    }
  }
  private Node front;
  private Node last;

  private void insertFront(T item) {
    if (front == null) {
      front = new Node(item);
      last = front;
    }
    else {
      Node curr = front;
      front = new Node(item);
      front.next = curr;
      curr.previous = front;
    }
  }

  private void insertLast(T item) {
    if (last == null) {
      insertFront(item);
    }
    else {
      Node curr = last;
      curr.next = new Node(item);
      curr.next.previous = curr;
      last = curr.next;
    }
  }

  private void deleteFront() {
    if (front == null) {
      return;
    }
    System.out.println(front.item + " deleted from the front");
    if (front.next != null) {
      front = front.next;
      front.previous = null;
    } else {
      front = null;
      last = front;
    }
  }

  private void deleteLast() {
    if (last == null) {
      return;
    }
    System.out.println(last.item + " deleted from the back");
    if (last.previous != null) {
      last = last.previous;
      last.next = null;
    } else {
      deleteFront();
    }
  }

  public static void main(String[] args) {
    Deque<Integer> deq = new Deque<Integer>();
    for (int i = 0; i < 5; i++) {
      Random rng = new Random();
      int choice = rng.nextInt(2);
      int num = rng.nextInt(10000);
      if (choice == 0) {
        deq.insertFront(num);
        System.out.println("Inserted " + num + " at the front of the deque.");
      } else {
        deq.insertLast(num);
        System.out.println("Inserted " + num + " at the back of the deque.");
      }
    }
    while(deq.front != null) {
      Random rng = new Random();
      int choice = rng.nextInt(2);
      if (choice == 0) {
        deq.deleteFront();
      } else {
        deq.deleteLast();
      }
    }
  }
}
