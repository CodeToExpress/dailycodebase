/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 11/02/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class Stack {
    static int st[]=new int[5];
    static int top=0;
    public static void push(int n)
    {
        if(top<5)
        {
            st[top]=n;
            top++;
        }
        else
            isFull();
    }
    public static void pop()
    {
        if(top<=5 && top>0)
        {
            top--;
            System.out.println("Popped element is "+st[top]);
        }
        else
            isEmpty();
    }
    public static void isEmpty()
    {
        if(top<=0)
            System.out.println("Stack is empty");
    }
    public static void isFull()
    {
        if(top>=5)
            System.out.println("Stack is full");
    }
    public static void peek()
    {
        if(top-1>=0 && top-1<5)
            System.out.println("The topmost element of the stack is "+st[top-1]);
        else
          System.out.println("Stack is empty");  
    }
    public static void display()
    {
        System.out.println("All the elements present in the stack are:");
        for(int i=0;i<top;i++)
            System.out.print(st[i]+" ");
        System.out.println();
    }
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int ch;int c=0;
        do
        {
            c=0;
            System.out.println("Enter choice ");
            System.out.println("1. Add new element"
                    + "\n"+"2. Remove topmost eleemnt"
            +"\n3. To view the topmost element"+"\n4. To view all the elements");
            ch=sc.nextInt();
            switch(ch)
            {
                case 1:
                    System.out.println("Enter element to be added to stack ");
                    int n=sc.nextInt();
                    push(n);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    peek();
                    break;
                case 4:
                    display();
                    break;
                default:
                    System.out.println("Invalid choice :");
            }
            System.out.println("Enter 1 if you wish to continue");
            c=sc.nextInt();
        }
        while(c==1);
    }
}
