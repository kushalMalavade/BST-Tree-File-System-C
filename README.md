#  File System Representation using Tree (C Program)

##  Overview
This project demonstrates how a **Tree data structure** can be used to represent a file system hierarchy.

---

##  Scenario
In a computer, files and folders are organized in a hierarchical manner where each folder can contain multiple subfolders and files.

---

##  Justification
- Represents hierarchical relationships  
- Efficient traversal of directories  
- Flexible structure  

---

## Algorithm

### Insertion
1. Select parent node  
2. Add child node  

### Traversal
1. Print node  
2. Recursively print children  

---

## Time Complexity
Insertion: O(n)  
Traversal: O(n)  

---

##  Code
file_system.c

---

##  Sample Output
File System Structure:
Root
  Documents
    Notes.txt
    Assignments
  Downloads
    Movies

---

##  How to Run
gcc file_system.c -o fs  
./fs  

---

##  Conclusion
Tree structures are widely used in file systems to efficiently manage hierarchical data.

---

##  Author
Kushal K Malavade
