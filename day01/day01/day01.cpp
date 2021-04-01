//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//typedef struct ListNode {
//    int val;
//    struct ListNode* next;
//}ListNode ;
//
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//    ListNode* p = (ListNode*)malloc(sizeof(ListNode));
//    ListNode* p1 = p;
//    while (l1 || l2) {
//        if (l2 == NULL) {
//            ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
//            p2->val = l1->val;
//            p2->next = NULL;
//            p1->next = p2;
//            p1 = p2;
//            l1 = l1->next;
//            continue;
//        }
//        if (l1 == NULL) {
//            ListNode*  p2 = (ListNode*)malloc(sizeof(ListNode));
//            p2->val = l2->val;
//            p2->next = NULL;
//            p1->next = p2;
//            p1 = p2;
//            l2 = l2->next;
//            continue;
//        }
//        if (l1->val <= l2->val) {
//            ListNode*  p2 = (ListNode*)malloc(sizeof(ListNode));
//            p2->val = l1->val;
//            p2->next = NULL;
//            p1->next = p2;
//            p1 = p2;
//            l1 = l1->next;
//        }
//        else {
//            ListNode*  p2 = (ListNode*)malloc(sizeof(ListNode));
//            p2->val = l2->val;
//            p2->next = NULL;
//            p1->next = p2;
//            p1 = p2;
//            l2 = l2->next;
//        }
//    }
//    return p->next;
//}
//void addnodel1(ListNode*& l) {
//    ListNode* p = (ListNode*)malloc(sizeof(ListNode)); 
//    l = p;
//    p->val = 1;
//    p->next = NULL;
//    ListNode* p1 = (ListNode*)malloc(sizeof(ListNode));
//    p1->val = 2;
//    p1->next = NULL;
//    p->next = p1;
//    ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
//    p2->val = 3;
//    p2->next = NULL;
//    p1->next = p2;
//    ListNode* p3 = (ListNode*)malloc(sizeof(ListNode));
//    p3->val = 4;
//    p3->next = NULL;
//    p2->next = p3;
//}
//
////void addnodel2(ListNode*& l) {
////    ListNode* p = (ListNode*)malloc(sizeof(ListNode));
////    l = p;
////    p->val = 5;
////    p->next = NULL;
////    ListNode* p1 = (ListNode*)malloc(sizeof(ListNode));
////    p1->val = 6;
////    p1->next = NULL;
////    p->next = p1;
////    ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
////    p2->val = 8;
////    p2->next = NULL;
////    p1->next = p2;
////}
//
//struct ListNode* swapPairs(struct ListNode* head) {
//    struct ListNode* p = head;
//    struct ListNode* q = p->next;
//    struct ListNode* l = NULL;
//    while (p&&q) {
//        if (l == NULL) {
//            p->next = q->next;
//            q->next = p;
//            head = q;
//            l = p;
//            if (p->next == NULL)
//                break;
//            p = p->next;
//            q = p->next;
//        }
//        else {
//            p->next = q->next;
//            q->next = p;
//            l->next = q;
//            l = p;
//            if (p->next == NULL)
//                break;
//            p = p->next;
//            q = p->next;
//        }
//
//    }
//    return head;
//}
//int main() {
//    ListNode* l;
//    addnodel1(l);
//    ListNode* q=swapPairs(l);
//    ListNode* p = q;
//    while (p) {
//        cout << p->val;
//        p = p->next;
//    }
//    return 0;
//}


//int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {
//    int maxnum;
//    for (int i = 0; i < numsSize - k + 1; i++) {
//        for (int j = i; j < i + k; j++) {
//            if (j == i) {
//                maxnum = nums[j];
//            }
//            if (maxnum <= nums[j]) {
//                maxnum = nums[j];
//            }
//        }
//        returnSize[i] = maxnum;
//    }
//    return returnSize;
//    free(returnSize);
//}
//
//int main() {
//    int* p=(int*)malloc(sizeof(int) * 8);
//    int a[] = { 1,3,-1,-3,5,3,6,7};
//    maxSlidingWindow(a, 8, 3, p);
//    cout << *p;
//
//}
//class A {
//public:
//	int age;
//};
//int main() {
//	A* a = new A();
//	A* p = new A[2];
//	p[0].age = 1;
//	p[1].age = 3;
//	cout << p[0].age;
//
//}

//void* my_memmove(void* dest,const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* p1 = (char*)dest;
//	char* p2 = (char*)src;
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			//*(char*)dest = *(char*)src;
//			//++(char*)dest;
//			//++(char*)src;
//			*p1 = *p2;
//			++p1;
//			++p2;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			////*((char*)dest + count) = *((char*)src + count);
//			*(p1 + count) = *(p2 + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr3[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr3 , arr3+2,20);
//	for (int i = 0; i < 10; i++) {
//		cout << arr3[i] << endl;
//	}

//int main() {
//	int n;
//	n = 0x01020304;
//	char x0;
//	char x1;
//	char x2;
//	char x3;
//	x0 = ((char*)&n)[0];
//	x1 = ((char*)&n)[1];
//	x2 = ((char*)&n)[2];
//	x3 = ((char*)&n)[3];
//	printf("x0=0x%x,x1=0x%x,x2=0x%x,x3=0x%x", x0, x1,x2,x3);
//}
#include <iostream>


struct travel_time {
    int hours;
    int minutes;
};

travel_time sum(travel_time i, travel_time j);
void show_time(travel_time i);

int main()
{
    travel_time i = { 5,30 };
    travel_time j = { 3,50 };
    travel_time k = sum(i, j);
    show_time(k);
    return 0;
}

travel_time sum(travel_time i, travel_time j) {
    int count = i.hours * 60 + i.minutes + j.hours * 60 + j.minutes;
    travel_time k;
    k.hours = count / 60;
    k.minutes = count % 60;
    return k;
}
void show_time(travel_time i) {
    using namespace std;
    cout << i.hours << "hours" <<","<< i.minutes << "minutes";
}

