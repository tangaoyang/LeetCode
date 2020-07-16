//
//  main.c
//  LeetCode
//
//  Created by cinderella on 2020/7/15.
//  Copyright © 2020 cinderella. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
int main(int argc, const char * argv[]) {
    //创建链表
//    struct ListNode *head, *pend, *pnew;
//    int n;
//    int returnSize = 0;
//    head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    head -> next = NULL;
//    pend = head;
//    scanf("%d", &n);
//    while(n != -1) {
//        pnew = (struct ListNode*)malloc(sizeof(struct ListNode)); //这里一定要为pnew开辟内存！
//        //想象一下，你无法int *a;后直接赋值a=3;必须先分配内存，同理。
//        pnew -> val = n;
//        pnew -> next = NULL;//新节点指向空，因为后面还没有元素加入
//        pend -> next = pnew;    //旧节点的指针指向新节点
//        pend = pnew;        //新节点变为旧节点
//        scanf("%d", &n);
//        ++returnSize;
//    }
    //剑指offer 06
//    int *array = NULL;
//    struct ListNode *p = head;
//    returnSize = 0;
//    while(p) {
//        array[returnSize] = (int *)malloc(sizeof(int));
//        array[returnSize] = p -> val;
//        p = p -> next;
//        ++returnSize;
//    }
//    for(int i = 0; i < returnSize / 2; i++) {
//        int t;
//        t = array[i];
//        array[i] = array[returnSize - i];
//        array[returnSize - i] = t;
//    }
//    for (int i = 0; i > 5; i++) {
//        printf("123");
//    }
    // 剑指offer 05
//    char* replaceSpace(char* s) {
    char *s = "We are happy.";
    int len = 0;
    char *str = (char *)calloc(sizeof(char), 10000);
    for (int i = 0, j = 0; i < 10000; i++) {
        if (s[i] == ' ') {
            str[j++] = '%';
            str[j++] = '2';
            str[j++] = '0';
            continue;
        }
        str[j++] = s[i];
    }
//        int t = len;
//        for(int i = len; i > 0; i--) {
//            while (s[i] == ' ') {
//                t += 2;
//                s[t] = s[t - 2];
//            }
//        }
//        return s;
//    }
    puts(str);
    return 0;
}
