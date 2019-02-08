# Reverse

WAP to reverse the given array

## Solution

### [Java Implementation](./Reverse.java)

```java
public static void reverse (int arr[], int num) {
    int temp;
    for (int i=0; i<=num/2; i++) {
        temp = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i-1] = temp;
    }
}
```