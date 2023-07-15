#include<stdio.h>

void take_input_in_array(int num_arr[], int sz)
{

   for(int i = 0; i < sz; i++)
	scanf("%d", &num_arr[i]);

}

int main(void)
{

   int size;
   scanf("%d", &size);

   int num[size];
   take_input_in_array(num, size);


}
