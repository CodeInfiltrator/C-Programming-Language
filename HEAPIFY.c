#include <stdio.h>
#include <stdlib.h>

//heap struct
struct Heap {
    int* array; //array buat naro heap elemen
    int capacity; //max capacity for heap
    int size; //size skrg dr heap
};

//create new heap
struct Heap* createHeap(int capacity) {
    struct Heap* heap = (struct Heap*)malloc(sizeof(struct Heap));
    heap->array = (int*)malloc(capacity * sizeof(int));
    heap->capacity = capacity;
    heap->size = 0;
    return heap;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapify(struct Heap* heap, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if(left < heap->size && heap->array[left] > heap->array[largest]) {
        largest = left;
    }
    if(right < heap->size && heap->array[right] > heap->array[largest]) {
        largest = right;
    }
    if(largest != i) {
        swap(&heap->array[i] , &heap->array[largest]);
        maxHeapify(heap, largest);
    }
}

void minHeapify(struct Heap* heap, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if(left < heap->size && heap->array[left] > heap->array[largest]) {
        largest = left;
    }
    if(right < heap->size && heap->array[right] > heap->array[largest]) {
        largest = right;
    }
    if(largest != i) {
        swap(&heap->array[i] , &heap->array[largest]);
        minHeapify(heap, largest);
    }
}

void insertMax(struct Heap* heap, int value) {
    if(heap->size == heap->capacity) {
        printf("Heap is full!");
        return;
    }
    int i = heap->size++;
    heap->array[i] = value;
    while (i != 0 && heap->array[(i - 1) / 2] < heap->array[i]) {
        swap(&heap->array[i], &heap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void insertMin(struct Heap* heap, int value) {
    if(heap->size == heap->capacity) {
        printf("Heap is full!");
        return;
    }
    int i = heap->size++;
    heap->array[i] = value;
    while (i != 0 && heap->array[(i - 1) / 2] > heap->array[i]) {
        swap(&heap->array[i], &heap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int deleteMax(struct Heap* heap) {
    if(heap->size == 0) {
        printf("heap is empty");
        return -1;
    }
    int max = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;
    // Heapify the root
    maxHeapify(heap, 0);
    return max;
}

int deleteMin(struct Heap* heap) {
    if(heap->size == 0) {
        printf("heap is empty");
        return -1;
    }
    int min = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;
    // Heapify the root
    minHeapify(heap, 0);
    return min;
}

void printHeap(struct Heap* heap) {
    for(int i = 0; i < heap->size; i++) {
        printf("%d ", heap->array[i]);
    }
    printf("\n");
}

void destroyHeap(struct Heap* heap) {
    free(heap->array);
    free(heap);
}

int main() {
    //buat validasi max size heap yg mau diinput
    struct Heap* heap = createHeap(10);
    insertMax(heap, 35);
    insertMax(heap, 33);
    insertMax(heap, 42);
    insertMax(heap, 10);
    insertMax(heap, 14);
    //panggil print
    printHeap(heap);
    
    //validasi delete root min
    int min = deleteMin(heap);
    //panggil print
    printHeap(heap);
    
    //validasi destroy clear
    destroyHeap(heap);
    return 0;
}