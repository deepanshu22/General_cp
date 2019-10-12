package july30;

import java.util.ArrayList;
import java.util.HashMap;

public class patmatch {
	private class Node {
		char data;
		HashMap<Character, Node> children = new HashMap<>();
		boolean eow;
	}

	Node root;
	int words;
	int nodes;

	public patmatch() {
		root = new Node();
		root.data = '$';
		nodes = 1;
	}

	public boolean searchWord(String word) {
		return searchWord(root, word);
	}

	public boolean searchWord(Node node, String word) {
		if (word.length() == 0) {
			return node.eow;
		}
		char ch = word.charAt(0);
		String row = word.substring(1);
		Node child = node.children.get(ch);
		if (child == null) {
			return false;
		} else {
			return searchWord(child, row);
		}
	}

	public void add(String word) {
		if (searchWord(word)){
			return;
		} else {
			add(root, word);
		}
	}

	public void add(Node node, String word) {
		char ch = word.charAt(0);
		String row = word.substring(1);

		Node child = node.children.get(ch);
		if (child == null) {
			child = new Node();
			child.data = ch;
			child.eow = false;
			node.children.put(ch, child);
			nodes++;
		} else {
			add(child, row);
		}
	}

	public void removeWord(String word) {
		if (!searchWord(word)) {
			return;
		} else {
			removeWord(root, word);
		}
	}

	private void removeWord(Node node, String word) {
		if (word.length() == 0) {
			node.eow = false;
			node.children.remove(word);
			nodes--;
			return;
		}
		char ch = word.charAt(0);
		String row = word.substring(1);
		Node child = node.children.get(ch);
		removeWord(child, row);

		if (child.eow != true && child.children.size() == 0) {
			nodes--;
			node.children.remove(ch);
		}
	}

	public void displayWords(Node node) {
		displayWords(root, "");
	}

	public void displayWords(Node node, String wsf) {
		
		ArrayList<Character> keys = new ArrayList<>(node.children.keySet());
		for (char key : keys) {
			Node child = node.children.get(key);
			displayWords(child, wsf + key);
		}
	}
	public void displayTries(Node node) {
		displayTries(root,"");
	}
	private void displayTries(Node node , String wsf) {			
		
		if (node.eow == true) {
			System.out.println(wsf);
		}
		ArrayList<Character> keys = new ArrayList<>(node.children.keySet());
		for (char key : keys) {
			Node child = node.children.get(key);
			displayWords(child, wsf + key);
		}
	}

}
