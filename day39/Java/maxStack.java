/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication3;

/**
 * @date 12/02/19
 * @author SPREEHA DUTTA
 */
import java.util.*;
public class maxStack {
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
    public static void max()
    {
        int max=0;
        for(int i=0;i<top;i++)
            if(max<st[i])
                max=st[i];
        System.out.println("Maximum element in the stack is "+max);
    }
    public static void reverse(int l,int h)
    {
        int t;
        if(l<=h)
        {
            t=st[l];
            st[l]=st[h];
            st[h]=t;
            reverse(l+1,h-1);
        }
        else
            return;
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
            +"\n3. To find the maximum element"+"\n4. To view all the elements"
            +"\n5. To reverse the stack");
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
                    max();
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    reverse(0,top-1);
                default:
                    System.out.println("Invalid choice :");
            }
            System.out.println("Enter 1 if you wish to continue");
            c=sc.nextInt();
        }
        while(c==1);
    }
}
