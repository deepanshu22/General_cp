package selfpractice;

import java.util.Scanner;

public class linkedlist {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        
        
        addlastLL st= new addlastLL();

        
        while(n-->0){
        int a = s.nextInt();
            st.addlast(a);           
        }
        int x = s.nextInt();
         while(x-->0)
       {
         int i = s.nextInt();  
             st.removeat(i);
       }        
        st.display();      
                
    }

public static class addlastLL {
	
	
	
	private class Node {
		int data;
		Node next;
	}

	Node head;
	Node tail;
	int size;

	public void addlast(int val)// o(1)
	{
		if (this.size == 0) {
			handleaddwhensize0(val);
			return;
		}
		Node node = new Node();
		node.data = val;

		tail.next = node;
		tail = node;
		size++;
	}

	private void handleaddwhensize0(int val) {
		Node node = new Node();
		node.data = val;
		head = node;
		tail = node;
		size++;
	}
    public int removefirst() {
		if (size == 0) {
			// System.out.println("list empty");
			return -1;
		} else if (size == 1) {
			int x = handlewhensize1();
			return x;
		}
		int rv = head.data;
		Node second = head.next;
		head = second;
		size--;
		return rv;
	}

	public int removelast()// o(n)
	{
		if (size == 0) {
			// System.out.println("list empty");
			return -1;
		} else if (size == 1) {
			int x = handlewhensize1();
			return x;
		}
		int rv = tail.data;
		Node secondlast = getNodeAt(size - 2);
		tail = secondlast;
		tail.next = null;
		size--;
		return rv;
	}
    private int handlewhensize1() {
		int rv = head.data;
		head = tail = null;
		size = 0;

		return rv;
	}

	public void display()// o(n)
	{
		for (Node node = head; node != null; node = node.next) {
			System.out.print(node.data + " ");
		}
	}

	public int removeat(int idx) {
		if (idx < 0 || idx >= size) {
			// System.out.println("linked list out of bound");
			return -1;
		} else if (idx == 0) {
			return this.removefirst();
		} else if (idx == size - 1) {
			return this.removelast();
		}

		Node nm1 = getNodeAt(idx - 1);
		Node n = nm1.next;
		Node np1 = n.next;
		int rv = n.data;
		nm1.next = np1;
		size--;

		return rv;
	}    
	private Node getNodeAt(int idx){
		if (size == 0){
			// System.out.println("list is empty");
			return null;
		}else if (idx < 0 || idx >= size){
			// System.out.println("index out of bound");
			return null;
		}
		Node node = head;
		for (int i = 0; i < idx; i++){
			node = node.next;
		}
		return node;
	}
 }
	}
