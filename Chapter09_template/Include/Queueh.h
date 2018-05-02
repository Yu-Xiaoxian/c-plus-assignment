//Queue.h
#ifndef QUEUE_H
#define QUEUE_H
#include <cassert>
//��ģ��Ķ���
template <class T, int SIZE = 50>
class Queue {
private:
	int front, rear, count; //��ͷָ�롢��βָ�롢Ԫ�ظ���
	T list[SIZE];   //����Ԫ������
public:
	Queue();          //���캯������ʼ����ͷָ�롢��βָ�롢Ԫ�ظ���
	void insert(const T &item); //��Ԫ�����
	T remove(); //Ԫ�س���
	void clear();   //��ն���
	const T &getFront() const;  //���ʶ���Ԫ��
								//���Զ���״̬
	int getLength() const;//����г���
	bool isEmpty() const;//�ж϶��пշ�
	bool isFull() const;//�ж϶�������
};
//���캯������ʼ����ͷָ�롢��βָ�롢Ԫ�ظ���
template <class T, int SIZE>
Queue<T, SIZE>::Queue() : front(0), rear(0), count(0) { }

template <class T, int SIZE>
void Queue<T, SIZE>::insert(const T& item) {//���β����Ԫ��
	assert(count != SIZE);
	count++;    //Ԫ�ظ�����1
	list[rear] = item;  //���β����Ԫ��
	rear = (rear + 1) % SIZE;   //��βָ����1����ȡ������ʵ��ѭ������
}
template <class T, int SIZE> T Queue<T, SIZE>::remove() {
	assert(count != 0);
	int temp = front;   //��¼��ԭ�ȵĶ���ָ��
	count--;        //Ԫ�ظ����Լ�
	front = (front + 1) % SIZE;//����ָ����1��ȡ����ʵ��ѭ������
	return list[temp];  //������Ԫ��ֵ
}
template <class T, int SIZE>
const T &Queue<T, SIZE>::getFront() const {
	return list[front];
}
template <class T, int SIZE>
int Queue<T, SIZE>::getLength() const { //���ض���Ԫ�ظ���
	return count;
}

template <class T, int SIZE>
bool Queue<T, SIZE>::isEmpty() const {  //���Զӿշ�
	return count == 0;
}
template <class T, int SIZE>
bool Queue<T, SIZE>::isFull() const {   //���Զ�����
	return count == SIZE;
}
template <class T, int SIZE>
void Queue<T, SIZE>::clear() {  //��ն���
	count = 0;
	front = 0;
	rear = 0;
}
#endif  //QUEUE_H
