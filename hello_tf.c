#include <stdio.h>
#include <tensorflow/c/c_api.h>

int main(){
    printf("Hello from TensorFlow C lib ver %s\n", TF_Version());
    return 0;
}
