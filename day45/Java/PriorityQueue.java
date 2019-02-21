/**
 * @author: aaditkamat
 * @date: 21/02/2019
 */
import java.util.List;
import java.util.LinkedList;
import java.util.Random;

public class PriorityQueue<T> {

  private class Pair {
    T item;
    int priority;
    Pair(T item, int priority) {
      this.item = item;
      this.priority = priority;
    }
  }

  private int maxPriority;
  private T maxPriorityItem;
  private List<Pair> itemPriorityPairs;

  public PriorityQueue() {
    itemPriorityPairs = new LinkedList<Pair>();
    maxPriority = Integer.MIN_VALUE;
  }

  private void obtainMaximumPriorityItem() {
    if (!itemPriorityPairs.isEmpty()) {
      maxPriority = itemPriorityPairs.get(0).priority;
      maxPriorityItem = itemPriorityPairs.get(0).item;
      for (int i = 1; i < itemPriorityPairs.size(); i++) {
        int currPriority = itemPriorityPairs.get(i).priority;
        T currPriorityItem = itemPriorityPairs.get(i).item;
        if (currPriority > maxPriority) {
          maxPriority = currPriority;
          maxPriorityItem = currPriorityItem;
        }
      }
    }
    else {
      maxPriorityItem = null;
      maxPriority = Integer.MIN_VALUE;
    }
  }

  public void insert(T item, int priority) {
    Pair itemPriorityPair = new Pair(item, priority);
    itemPriorityPairs.add(itemPriorityPair);
    obtainMaximumPriorityItem();
  }

  public T getHighestPriority() {
    if (itemPriorityPairs.isEmpty()) {
      return null;
    }
    return maxPriorityItem;
  }

  public void deleteHighestPriority() {
    for (Pair priorityItemPair: itemPriorityPairs) {
        if (priorityItemPair.item.equals(maxPriorityItem) && priorityItemPair.priority == maxPriority) {
        itemPriorityPairs.remove(priorityItemPair);
        obtainMaximumPriorityItem();
        break;
      }
    }
  }

  public static void main(String[] args) {
    PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
    System.out.println(pq.getHighestPriority());
    pq.deleteHighestPriority();
    for (int i = 1; i < 10; i++) {
      Random rng = new Random();
      int num = rng.nextInt(1000), priority = rng.nextInt(100);
      pq.insert(num, priority);
      System.out.println("Inserted " + num + " with priority " + priority);
    }
    while(pq.getHighestPriority() != null) {
      System.out.println("Number deleted: " + pq.getHighestPriority());
      pq.deleteHighestPriority();
    }
  }
}