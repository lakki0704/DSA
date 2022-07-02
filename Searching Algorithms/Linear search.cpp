#include <iostream> //linear searching

using namespace std;

struct Array {

    int* A; //pointer which will be converted to an array
    int size_arr; //size of the array
    int len_arr; //length of the array

};
//creating the array
void create_array(struct Array arr, int n)
{
    printf("Creating the array : \n");
    for(int i =0 ; i < n ; i++)
    {
        scanf("%d",&arr.A[i]);
    }
}

//displaying the array
void display_array(struct Array arr, int n)
{
    printf("\nDisplaying the array : \n");
    for(int i =0 ; i<n ; i++)
    {
        printf("%d ",arr.A[i]);
    }
    printf("\n");
}

//linear search first method
int linear_search(struct Array arr, int key)
{
    printf("\nLinear search for the given key : \n");
    for(int i =0 ; i< arr.len_arr ; i++)
    {
        if(arr.A[i]==key)
        {
            return i;
        }
    }
    return -1;
}

void swap_ele(int* x , int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}

//transposition
int linear_search_transposition(struct Array *arr, int key)
{
 printf("\nlinear searching using transpostion");
 for(int i=0 ; i< arr->len_arr ; i++)
 {
     if(arr->A[i] == key)
     {
         swap_ele(&arr->A[i],&arr->A[i-1]);
         return i-1;
     }
 }
}


int linear_search_firstindex(struct Array *arr, int key)
{
    printf("\nlinear searching and then shifting the element to first index");
   for(int i=0 ; i< arr->len_arr ; i++)
 {
     if(arr->A[i] == key)
     {
         swap_ele(&arr->A[i],&arr->A[0]);
         return 0;
     }
 }


}

int main()
{
    struct Array arr;
    arr.size_arr = 10 ;
    arr.A = new int[arr.size_arr];
    arr.len_arr = 5;
    //cannot initialise an array using normal and simple method.
    create_array(arr, arr.len_arr);
    display_array(arr, arr.len_arr);
    int i = linear_search(arr, 5);
    printf("\nThe index value of 5 is %d \n",i);

    int i2 = linear_search_transposition(&arr , 5);
    printf("\nThe index of 5 after transposition is : %d \n",i2);
    printf("\nDisplaying the new array : \n");
    display_array(arr, arr.len_arr);

    printf("\n Linear search of an element by shifting it to first index : \n");
    int i3 = linear_search_firstindex(&arr , 5);
    printf("After the most optimal search with least time complexity , the index of key element is %d \n",i3);

    printf("\nDisplaying the new array after shifting the key element to first index  : \n");
    display_array(arr, arr.len_arr);
    return 0;
}
