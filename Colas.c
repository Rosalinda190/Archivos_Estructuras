#include <stdio.h>
#define QUEUE_CAPACITY 3

 struct queue{
 int data[QUEUE_CAPACITY];
 int start;
  int end; 
 int count;
} ;

void setupQueue(struct queue *q);  
int dequeue(struct queue *q, int *value);
int enqueue(struct queue *q, int *value);

int main(void) {
  
  struct queue q;

  setupQueue(&q);
  enqueue(&q,10);
  enqueue(&q,11);
  enqueue(&q,12);
  enqueue(&q,13);
  
  dequeue(&q,13);

  return 0;
}

void setupQueue(struct queue *q)
{
  q->start=0;
  q->end=0;
  q->count=0;
}

int dequeue(struct queue *q, int *value)
{
  int r=0;
  if(q->start != q->end) //no esta vacía 
  {
    *value= q->data[q->start];
    q->start++;

    if(q->start>=QUEUE_CAPACITY+1)
    {
      printf("Error, cola vacía");
      q->start=0;
    } 
    r=1;
  }
  return r;
}

int enqueue(struct queue *q, int *value)
{
  int r=0;
  if((q->end+1)%((QUEUE_CAPACITY+1)!= q->start))
  {
    q->data[q->end]=value;
    q->end++;

    if(q->end>=QUEUE_CAPACITY+1) 
    {
      printf("Error, cola llena");
      q->end=0;
    } 
    r=1;
  }
  return 0;
}

