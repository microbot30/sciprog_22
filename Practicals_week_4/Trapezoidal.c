#include<stdio.h>
#include<math.h>

float deg_radians(float theta){ //Function converts theta to radians

    return (M_PI * theta)/180.0;
}

float area(float b_radian, int N, float function_array[N+1]){ //function for area calculation using trap rule.
    int i;
    float initial_area = function_array[0] + function_array[N];
    for(i = 1; i < N; i++){
        initial_area += 2 * function_array[i];
    }

float mul_radian = (M_PI*((b_radian)/(2*N)))/180.0; // Converting the multiplier (b-a)/2N to radians
float Complete_Area = mul_radian * initial_area; //Calculating the complete Area
return Complete_Area;
}

int main(void){
    float a = 0.0;
    float b = 60.0;
    int N = 12;
    float step_size = (b-a) / N;
    float tan_arr[N+1]; // Static declaration of array
    int i;
    for( i = 0; i <= 12; i++){
        tan_arr[i] = tan(deg_radians(step_size * i));
    }
float ans = area(b,N,tan_arr);
printf("Approximted_area = %f\n", ans);
printf("Exact_area = %f\n", log(2.0));

    return 0;
}