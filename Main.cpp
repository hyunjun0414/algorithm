//#include <stdio.h>
//#include<stdlib.h>
//struct Stack
//{
//	int* stack;
//	int top;
//	int capacity;
//
//
//	void Push(int data)
//	{
//		if (capacity <= top)
//			return; //원소 초과
//		stack[top++] = data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//
//	Stack(int cap)
//	{
//		stack = (int*)malloc(sizeof(int) * cap);
//		capacity = cap;
//		top = 0;
//		printf("1000메모리 초기화\n");
//	}
//	~Stack() //자동으로 실행됨
//	{
//		free(stack);
//		top = 0;
//		printf("1000메모리 마무리\n");
//	}
//};
//int main()
//{
//	Stack s1(1000);
//
//	s1.Push(10);
//	s1.Push(20);
//	s1.Push(30);
//	printf("%d\n", s1.Pop());
//	printf("%d\n", s1.Pop());
//	printf("%d\n", s1.Pop());
//}





//#include <stdio.h>
//#include<stdlib.h>
//struct Stack
//{
//	int* stack;
//	int top;
//	int capacity;
//
//
//	void Push(int data)
//	{
//		if (capacity <= top)
//			return; //원소 초과
//		stack[++top] = data;
//	}
//	int Pop()
//	{
//		return stack[--top];
//	}
//
//	void InitStack( int cap)
//	{
//		stack = (int*)malloc(sizeof(int) * cap);
//		capacity = cap;
//		top = 0;
//	}
//	void UninitStack()
//	{
//		free(stack);
//		top = 0;
//	}
//};
//int main()
//{
//	Stack s1;
//
//	s1.InitStack(1000);
//	s1.Push(10);
//	s1.Push(20);
//	s1.Push(30);
//
//
//
//	printf("%d\n", s1.Pop());
//	printf("%d\n", s1.Pop());
//	printf("%d\n", s1.Pop());
//	s1.UninitStack();
//}
//


//#include <stdio.h>
//#include<stdlib.h>
//struct Stack
//{
//	int* stack;
//	int top;
//	int capacity;
//
//
//	void Push(Stack* s, int data)
//	{
//		if (s->capacity <= s->top)
//			return; //원소 초과
//		s->stack[s->top] = data;
//		++s->top;
//	}
//	int Pop(Stack* s)
//	{
//		return s->stack[--s->top];
//	}
//
//	void InitStack(Stack* s, int cap)
//	{
//		s->stack = (int*)malloc(sizeof(int) * cap);
//		s->capacity = cap;
//		s->top = 0;
//	}
//	void UninitStack(Stack* s)
//	{
//		free(s->stack);
//		s->top = 0;
//	}
//};
//int main()
//{
//	Stack s1 ;
//
//	s1.InitStack(&s1, 1000);
//	s1.Push(&s1, 10);
//	s1.Push(&s1, 20);
//	s1.Push(&s1, 30);
//
//
//
//	printf("%d\n", s1.Pop(&s1));
//	printf("%d\n", s1.Pop(&s1));
//	printf("%d\n", s1.Pop(&s1));
//	s1.UninitStack(&s1);
//}



#include <stdio.h>
#include<stdlib.h>
struct Stack
{
	int* stack;
	int top;
	int capacity;
};

void Push(Stack* s, int data)
{
	s->stack[s->top] = data;
	++s->top;
}
int Pop(Stack* s)
{
	--s->top;

	return s->stack[s->top];
}

void InitStack(Stack* s,int cap)
{
	s->stack = (int*)malloc(sizeof(int) * cap);
	s->capacity = cap;
	s->top = 0;
}
void UninitStack(Stack* s)
{
	free(s->stack);
	s->top = 0;
}
int main()
{
	Stack s1 = { 0 };

	InitStack(&s1,1000);
	Push(&s1, 10);
	Push(&s1, 20);
	Push(&s1, 30);



	printf("%d\n", Pop(&s1));
	printf("%d\n", Pop(&s1));
	printf("%d\n", Pop(&s1));
	UninitStack(&s1);
}



//#include <stdio.h>
//
//struct Stack
//{
//	int stack[100];
//	int top;
//};
//
//void Push(Stack* s, int data)
//{
//	s->stack[s->top] = data;
//	++s->top;
//}
//int Pop(Stack* s)
//{
//	--s->top;
//
//	return s->stack[s->top];
//}
//
//void InitStack(Stack* s)
//{
//	s->top = 0;
//}
//void UninitStack(Stack* s)
//{
//	s->top = 0;
//}
//int main()
//{
//	Stack s1 = { 0 };
//	
//	InitStack(&s1);
//	Push(&s1, 10);
//	Push(&s1, 20);
//	Push(&s1, 30);
//
//
//
//	printf("%d\n", Pop(&s1));
//	printf("%d\n", Pop(&s1));
//	printf("%d\n", Pop(&s1));
//	UninitStack(&s1);
//}



//#include <stdio.h>
//
//struct Stack
//{
//	int stack[100];
//	int top;
//};
//
//void Push(Stack* s, int data)
//{
//	s->stack[s->top] = data;
//	++s->top;
//}
//int Pop(Stack* s)
//{
//	--s->top;
//
//	return s->stack[s->top];
//}
//int main()
//{
//	Stack s1 = { 0 };
//
//	Push(&s1, 10);
//	Push(&s1, 20);
//	Push(&s1, 30);
//
//
//
//	printf("%d\n", Pop(&s1));
//	printf("%d\n", Pop(&s1));
//	printf("%d\n", Pop(&s1));
//
//}



//#include <stdio.h>
//
//struct Stack
//{
//	int stack[100];
//	int top;
//};
//
//void Push(Stack* s, int data)
//{
//	s->stack[s->top] = data;
//	++s->top;
//}
//int Pop(Stack* s)
//{
//	--s->top;
//
//	return s->stack[s->top];
//}
//int main()
//{
//	Stack s1 = { 0 };
//	Stack s2 = { 0 };
//
//	Push(&s1, 10);
//	Push(&s1, 20);
//	Push(&s1, 30);
//
//	Push(&s2, 100);
//	Push(&s2, 200);
//
//
//	printf("%d\n", Pop(&s1));
//	printf("%d\n", Pop(&s2));
//	printf("%d\n", Pop(&s1));
//	printf("%d\n", Pop(&s2));
//	printf("%d\n", Pop(&s1));
//
//}



//#include <stdio.h>
//
//struct Stack
//{
//	int stack[100];
//	int top;
//};
//
//void Push(Stack& s, int data)
//{
//	s.stack[s.top] = data;
//	++s.top;
//}
//int Pop(Stack& s)
//{
//	--s.top;
//
//	return s.stack[s.top];
//}
//int main()
//{
//	Stack s1 = { 0 };
//	Stack s2 = { 0 };
//
//	Push(s1, 10);
//	Push(s1, 20);
//	Push(s1, 30);
//
//	Push(s2, 100);
//	Push(s2, 200);
//
//
//	printf("%d\n", Pop(s1));
//	printf("%d\n", Pop(s2));
//	printf("%d\n", Pop(s1));
//	printf("%d\n", Pop(s2));
//	printf("%d\n", Pop(s1));
//
//}



//#include <stdio.h>
//
//void Push(int* stack,int& top,int data)
//{
//	stack[top] = data;
//	++top;
//}
//int Pop(int* stack, int& top)
//{
//	--top;
//
//	return stack[top];
//}
//int main()
//{
//	int stack1[100];
//	int top1 = 0;
//	int stack2[100];
//	int top2 = 0;
//
//	Push(stack1, top1, 10);
//	Push(stack1, top1, 20);
//	Push(stack1, top1, 30);
//
//	Push(stack2, top2, 100);
//	Push(stack2, top2, 200);
//
//	
//	printf("%d\n", Pop(stack1, top1));
//	printf("%d\n", Pop(stack2, top2));
//	printf("%d\n", Pop(stack1, top1));
//	printf("%d\n", Pop(stack2, top2));
//	printf("%d\n", Pop(stack1, top1));
//
//}



//#include <stdio.h>
//
//int stack[100];
//int top = 0;
//
//void Push(int data)
//{
//	stack[top] = data;
//	++top;
//}
//int Pop()
//{
//	--top;
//
//	return stack[top];
//}
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	Push(100);
//	Push(200);
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}



////스택과 큐
////스택
//#include <stdio.h>
//
//int stack[100];
//int top = 0;
//
//void Push(int data)
//{
//	stack[top] = data;
//	++top;
//}
//int Pop()
//{
//	--top;
//
//	return stack[top];
//}
//int main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}


//입출력 순서가 반대가 되면 stack   FILO
//입출력 순서가 같으면 queue  FIFO







//#include <stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head = NULL;
//
//	head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->link = NULL;
//
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = 20;
//	p->link = NULL;
//	head->link = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 30;
//	p->link = NULL;
//	head->link->link = p;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//
//	p = head;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%p\n", p);
//
//	for (p = head; p != NULL; p = p->link)
//		printf("%d\n", p->data);
//}



//#include <stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head = NULL;
//
//	head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->link = NULL;
//
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = 20;
//	p->link = NULL;
//	head->link = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 30;
//	p->link = NULL;
//	head->link->link = p;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//
//}



//#include <stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head = NULL;
//
//	head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->link = NULL;
//	
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = 20;
//	p->link = NULL;
//	head->link = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 30;
//	p->link = NULL;
//	head->link->link = p;
//
//	printf("%d\n", head->link->link->data);
//	printf("%d\n", p->data);
//
//	delete head;
//}



//#include <stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//	Node * head = &n1;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//
//}



//#include <stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	
//	Node head = {10, NULL};
//
//	printf("%d\n", head.data);
//
//}



//#include <stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	 
//
//	 Node* head = (Node*)malloc(sizeof(Node));
//
//	head->data = 10;
//	head->link = NULL;
//	printf("%d\n", head->data);
//
//	delete head;
//}



//스택메모리에 데이터가 생기려면
//c언어는 malloc 과 free
//c++은 new 와 delete
//
//실시간데이터는 heap에 생성되고 보관


