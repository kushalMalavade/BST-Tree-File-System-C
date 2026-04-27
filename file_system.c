#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[50];
    struct Node* child[5];
    int childCount;
};

struct Node* createNode(char name[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    newNode->childCount = 0;
    return newNode;
}

void addChild(struct Node* parent, char name[]) {
    if (parent->childCount < 5) {
        parent->child[parent->childCount++] = createNode(name);
    }
}

void display(struct Node* root, int level) {
    for(int i = 0; i < level; i++)
        printf("  ");
    printf("%s\n", root->name);

    for(int i = 0; i < root->childCount; i++)
        display(root->child[i], level + 1);
}

int main() {
    struct Node* root = createNode("Root");

    addChild(root, "Documents");
    addChild(root, "Downloads");

    addChild(root->child[0], "Notes.txt");
    addChild(root->child[0], "Assignments");

    addChild(root->child[1], "Movies");

    printf("File System Structure:\n");
    display(root, 0);

    return 0;
}
