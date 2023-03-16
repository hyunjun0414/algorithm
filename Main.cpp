#include <stdio.h>

struct Node
{
	int data;
	Node* link;
};
int main()
{
	Node n1 = { 10, nullptr };
	Node n2 = { 20, nullptr };
	Node n3 = { 30, nullptr };

	n1.link = &n2;
	n2.link = &n3;

	Node* head = &n1;

	printf("%d\n", head->data);
	printf("%d\n", head->link->data);
	printf("%d\n", head->link->link->data);

	Node* p = head;
	printf("%d", p->data);
	p = p->link;
}



//#include <stdio.h>
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10, nullptr };
//	Node n2 = { 20, nullptr };
//	Node n3 = { 30, nullptr };
//
//	n1.link = &n2;
//	n2.link = &n3;
//
//	Node* head = &n1;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//}




//#include <stdio.h>
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10, NULL }; //null_ptr;
//
//	printf("%d %d %d\n", sizeof(n1), sizeof(n1.data), sizeof(n1.link));
//	printf("%ld\n", sizeof(n1));
//	printf("%ld\n", sizeof(Node));
//}



//#include <stdio.h>
//#include <vector>
//using namespace std;
//int main() {
//    int row = 3, col = 4;
//    vector<vector<int>> v;
//
//    for (int i = 0; i < row; ++i)
//        v.push_back(vector<int>());
//
//    for (int i = 0; i < row; i++)
//        for (int j = 0; j < col; j++)
//            v[i].push_back(i * col + j + 1);
//
//    for (int i = 0; i < v.size(); ++i)
//        printf("%5d", (int)v[i].size());
//    printf("\n");
//
//    for (int i = 0; i < row; ++i) {
//        for (int j = 0; j < col; j++) 
//            printf("%5d", v[i][j]);
//        
//    }
//}



//#include <stdio.h>
//#include <vector>
//using namespace std;
//int main() {
//    int size = 5;
//    vector<vector<int>> v;
//    for (int i = 0; i < size; ++i)
//        v.push_back(vector<int>());
//
//    v[0].push_back(1);
//    v[0].push_back(2);
//    v[0].push_back(3);
//    v[1].push_back(10);
//    v[1].push_back(20);
//    v[1].push_back(30);
//    for (int i = 0; i < v.size(); ++i)
//        printf("%5d", v[i].size());
//    printf("\n");
//
//}



//#include <stdio.h>
//#include <vector>
//using namespace std;
//int main() {
//    int size = 5;
//    vector<vector<int>> v;
//    for (int i = 0; i < size; ++i)
//        v.push_back(vector<int>());
//
//    for (int i = 0; i < v.size(); ++i)
//        printf("%5d", v[i].size());
//    printf("\n");
//
//}



//#include <stdio.h>
//#include <vector>
//using namespace std;
//int main() {
//    int size = 5;
//    vector<int> v;
//    for (int i = 0; i < size; ++i)
//        v.push_back(10 * (1 + i));
//
//    for (int i = 0; i < v.size(); ++i)
//        printf("%5d", v[i]);
//    printf("\n");
//
//}



//#include <stdio.h>
//
//int main() {
//    int row = 3, col = 4;
//    //int arrA[row][col];
//    //int(*arrB)[col] = new int[row][col];
//    int** arrC = new int* [row];
//    for (int i = 0; i < row; i++)
//        arrC[i] = new int[col];
//
//    for (int i = 0; i < row; ++i)
//        for (int j = 0; j < col; ++j)
//            arrC[i][j] = i * col + j + 1;
//
//    for (int i = 0; i < row; ++i)
//    {
//        for (int j = 0; j < col; ++j)
//        {
//            printf("%5d", arrC[i][j]);
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < row; ++i)
//        delete[] arrC[i];
//    delete[] arrC;
//
//
//}
////new 가 나오면 delete로 삭제 해줘야한다.




//#include <stdio.h>
//
//int main() {
//    int row = 3, col = 4;
//    //int arrA[row][col];
//    //int(*arrB)[col] = new int[row][col];
//    int** arrC = new int* [row];
//    for (int i = 0; i < row; i++)
//        arrC[i] = new int[col];
//
//    for (int i = 0; i < row; ++i)
//        for (int j = 0; j < col; ++j)
//            arrC[i][j] = i * col + j + 1;
//
//    for (int i = 0; i < row; ++i)
//    {
//        for (int j = 0; j < col; ++j)
//        {
//            printf("%5d", arrC[i][j]);
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < row; ++i)
//        delete[] arrC[i];
//        delete[] arrC;
//
//    
//}
////new 가 나오면 delete로 삭제 해줘야한다.



//#include <stdio.h>
//
//int main() {
//    int arrA[3][4];
//    int(*arrB)[4] = new int[3][4];
//    int** arrC = new int* [3];
//}




//#include <stdio.h>
//
//void printArray(int(*arr)[4]) { // 배열 포인터를 매개변수로 받는 함수 정의
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 4; ++j)
//            printf("%5d", arr[i][j]);
//        printf("\n");
//    }
//}
//
//int main() {
//    int(*arr)[4]; //배열 포인터
//    arr = new int[3][4];
//
//    for (int i = 0; i < 3; i++)
//        for (int j = 0; j < 4; j++)
//            arr[i][j] = i * 4 + j + 1;
//
//    printArray(arr); // 함수 호출
//
//    delete[] arr;
//    return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int(*arr)[4]; //배열 포인터
//	arr = new int[3][4];
//
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 4; j++)
//			arr[i][j] = i * 4 + j + 1;
//
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 4; ++j)
//			printf("%5d", arr[i][j]);
//		printf("\n");
//	}
//	delete[] arr;
//}



//#include <stdio.h>
//
//int main() {
//	int arr[3][4];
//
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 4; j++)
//			arr[i][j] = i * 4 + j + 1;
//
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 4; ++j)
//			printf("%5d", arr[i][j]);
//		printf("\n");
//	}
//}
//줄맞춤 컨트롤KF


//#include <stdio.h>
//
//int main() {
//	printf("Hello");
//}