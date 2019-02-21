![cover](./cover.png)

# Day 45 - Implement a priority queue

Implement the Priority Queue data structure

### Priority Queue

Priority Queue is an extension of queue with following properties

1. Every item has a priority associated with it.
2. An element with high priority is dequeued before an element with low priority.
3. If two elements have the same priority, they are served according to their order in the queue.

A typical priority queue supports following operations.

1. **insert(item, priority):** Inserts an item with given priority.
2. **getHighestPriority():** Returns the highest priority item.
3. **deleteHighestPriority():** Removes the highest priority item

[Read More (Geeks4Geeks)](https://www.geeksforgeeks.org/priority-queue-set-1-introduction/)

## Solution

## JavaScript Implementation

### [Solution](./JavaScript/priorityQueue.js)

```js
// To Be Added
```

## Java Implementation

### [Solution](./Java/PriorityQueue.java)

```java
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
```
