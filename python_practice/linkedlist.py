class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class linked_list:
    def __init__(self):
        self.first = None

    def printlist(self, head):
        if head is None:  # Base case: If head is None, stop recursion
            return
        # print(head.data)  # Print the current node's data
        self.printlist(head.next)  # Recur for the next node
        print(head.data)

    def reverse(self):
        prev = None
        current = self.first
        while current is not None:
            next_node = current.next  # Store the next node
            current.next = prev  # Reverse the link
            prev = current  # Move prev to current node
            current = next_node  # Move to the next node
        self.first = prev  # Update the head of the list


# Create a linked list
linkedlist1 = linked_list()
linkedlist1.first = Node(1)
node2 = Node(2)
node3 = Node(3)
node4 = Node(4)

linkedlist1.first.next = node2
node2.next = node3
node3.next = node4

# Print the linked list using recursion
print("Original List:")
linkedlist1.printlist(linkedlist1.first)

# Reverse the linked list
# linkedlist1.reverse()

# Print the reversed linked list using recursion
# print("\nReversed List:")
# linkedlist1.printlist(linkedlist1.first)


    